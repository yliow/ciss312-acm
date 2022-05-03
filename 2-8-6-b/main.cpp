// erdos number
//
// erdos index = 0
//
// 
// [1,3,5] means this paper is written by author 1, 3, 5.
// [1,3,5] --- [2,4,5] --- [1, 4] 
// |
// |
// [1,2,3]
//
// node U is adjacent to node V if ----  U intersect V is nonempty.
//
// ERDOS_NODES = [W0, W1, W2]
//
// To compute erdos index of i
// DONE = []
// TODO = [U0, U1, U2, ...] the set of nodes containing i
// NEW = [V0, V1, V2, ...] where the nodes are adjacent to those in TODO
//                         and Vi not present in DONE and not in TODO
//
// * IGNORE PAPERS WITH ONE AUTHOR
// * IGNORE PAPERS WITH THE SAME AUTHORS
//
// target = 1
// [1,3,5] -----> [1,3,5] + [2,4,5] (because of the 5)

#include <iostream>
#include <vector>

    
typedef std::vector< int > vecint;


// print a vector
template < class T >
std::ostream & operator<<(std::ostream & cout, std::vector< T > v)
{
    std::cout << "[";
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i];
        if (i != v.size() - 1) cout << ", ";
    }
    std::cout << "]";
    return cout;
}


//------------------------------------------------------------------------------------
// find in vector
template < class T >
int find(const std::vector< T > & v, const T & target)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == target) return i;
    }
    return -1;
}


//------------------------------------------------------------------------------------
// intersect
template< class T >
bool intersect(const std::vector< T > & u, const std::vector< T > & v)
{
    for (int i = 0; i < u.size(); i++)
    {
        if (find(v, u[i]) > -1) return true; 
    }
    return false;
}


//------------------------------------------------------------------------------------
// push back uniquely
template < class T >
int unique_push_back(std::vector< T > & v, const T & x)
{
    if (find(v, x) == -1)
    {
        v.push_back(x);
        return v.size() - 1;
    }
    else
    {
        return -1;
    }
}




int main()
{
    int nscenarios;

    std::string input;
    std::cin >> nscenarios;
    for (int i = 0; i < nscenarios; ++i)
    {
        std::cout << "Scenario " << (i + 1) << '\n';
        int npaper;
        std::cin >> npaper;
        
        int nauthor;
        std::cin >> nauthor;

        //---------------------------------------------------------------------
        // All the authors. A unique list. At index 0 is Erdos
        std::vector< std::string > all_authors;
        all_authors.reserve(10);
        all_authors.push_back(std::string("Erdos, P."));

        //---------------------------------------------------------------------
        // list of list of authors in a paper
        // Example: group[0] = [1,3,5] means paper at index 0 is written by
        //                             authors 1, 3, 5 in all_authors
        std::vector< std::vector< int > >  group;
        group.reserve(10); // assume 10 papers

        //---------------------------------------------------------------------
        // Read authors-paper data 
        for (int i = 0; i < npaper; i++)
        {
            std::vector< int > agroup; // array of author indices in curr paper
            agroup.reserve(all_authors.size());
            
            // agroup[0] = 5 means the first author of this paper is author
            // with index 5 in all_authors
            
            while (1)
            {
                //-------------------------------------------------------------
                // Read author
                // tfname - temp fname. Can contain ':' which means it's the
                // last author.
                std::string lname, fname, tfname, author;
                std::cin >> lname >> tfname;
                fname = tfname.substr(0, tfname.size() - 1); // remove , or :  
                author = lname + ' ' + fname;
                //std::cout << "author:" << author << "\n";

                //-------------------------------------------------------------
                // Add author (uniquely) to all_authors
                int author_index = find(all_authors, author);
                if (author_index == -1)
                {
                    all_authors.push_back(author);
                    author_index = all_authors.size() - 1;
                }
                unique_push_back< int >(agroup, author_index);

                if (tfname[tfname.size() - 1] == ':') break;
            }

            // agroup is made up author indices of a paper. Add to group.
            group.push_back(agroup);
            
            // skip the paper title
            std::string _;
            std::getline(std::cin, _);
        }

        // group is now list of list of author indices

        // build adjacency matrix of papers
        // table[i][j] = 1 iff group i and group j has a common author
        // table[i][i] = 0
        int ** table = new int*[group.size()];
        for (int i = 0; i < group.size(); i++)
        {
            table[i] = new int[group.size()];
            for (int j = 0; j < group.size(); j++) table[i][j] = 0;
        }

        for (int i = 0; i < group.size(); i++)
        {
            for (int j = i + 1; j < group.size(); j++)
            {
                if (intersect(group[i], group[j]))
                {
                    table[i][j] = 1;
                    table[j][i] = 1;
                }
            }
        }

        // some_authors is array of authors that we need to compute
        // their erdos indices
        std::vector< int > some_authors(nauthor);
        for (int i = 0; i < nauthor; i++)
        {
            std::string a;
            std::getline(std::cin, a);
            some_authors[i] = find(all_authors, a);
        }

        //--------------------------------------------------------------------
        // Find "Erdos" nodes, i.e., node/paper where Erdos is an author
        // erdos_nodes is a list of indices of the group vector that
        // contains Erdos.
        //
        //std::cout << some_authors << '\n';
        std::vector< int > erdos_nodes; // REMEMBER ... indices to group!!!
        for (int i = 0; i < group.size(); i++)
        {
            if (find(group[i], 0) > -1) erdos_nodes.push_back(i);
        }
        
        for (int i = 0; i < some_authors.size(); i++)
        {
            //std::cout << "\n";

            // Print author that needs erdos index
            std::cout << all_authors[some_authors[i]] << ' ';
            
            std::vector< int > DONE;
            std::vector< int > TODO;
            
            int author_index = some_authors[i]; // index of this author
            //std::cout << "index " << author_index << "\n";
            for (int i = 0; i < group.size(); i++)
            {
                if (find(group[i], author_index) > -1)
                {
                    TODO.push_back(i);
                }
            }
                        
            int steps = 0;
            bool found = false;
            
            while (1)
            {
                steps++;

                std::vector< int > NEW_TODO;
                for (int i = 0; i < TODO.size(); i++)
                {
                    int elt = TODO[i];
                    for (int j = 0; j < group.size(); j++)
                    {
                        if (table[elt][j] == 1
                            && find(TODO, elt) == -1
                            && find(DONE, elt) == -1)
                        {
                            if (find(erdos_nodes, elt) != -1)
                            {
                                found = true;
                                goto EXIT;
                            }
                            NEW_TODO.push_back(elt);
                        }
                    }
                }
                
                if (NEW_TODO.size() == 0) break;

                TODO = NEW_TODO;
            }

        EXIT:
            if (found) std::cout << steps << '\n';
            else std::cout << "infinity\n";
        }
                
        // delete table
        for (int i = 0; i < group.size(); i++)
            delete [] table[i];
        delete [] table;        
    }
    
    return 0;
}
