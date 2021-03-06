// erdos number

#include <iostream>
#include <vector>

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

// unique push_back in vector
template < class T >
void unique_push_back(std::vector < T > & v, T & newval)
{
    if (find(v, newval) == -1)
        v.push_back(newval);
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
        
        std::vector< std::string > all_authors;
        all_authors.reserve(10);
        all_authors.push_back(std::string("Erdos, P."));
        //std::cout << all_authors << '\n';

        // list of list of authors in a paper
        std::vector< std::vector< int > >  group;
        group.reserve(10);

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
                unique_push_back< std::string >(all_authors, author);
                //std::cout << "all: " << all_authors << "\n";
                int index = find(all_authors, author);
                unique_push_back< int >(agroup, index);

                if (tfname[tfname.size() - 1] == ':') break;
            }
            group.push_back(agroup);
            
            // skip the paper title
            std::string _;
            std::getline(std::cin, _);
        }

        
        // table[i][j] = 1 iff i,j (author indices) appear in a paper
        // table[i][i] = 0
        int ** table = new int*[all_authors.size()];
        for (int i = 0; i < all_authors.size(); i++)
        {
            table[i] = new int[all_authors.size()];
            for (int j = 0; j < all_authors.size(); j++) table[i][j] = 0;
        }

        for (int i = 0; i < group.size(); i++)
        {
            for (int j = 0; j < group[i].size(); j++)
            {
                for (int k = j + 1; k < group[i].size(); k++)
                {
                    int a = group[i][j], b = group[i][k];
                    table[a][b] = 1;
                    table[b][a] = 1;
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
        
        //std::cout << some_authors << '\n';
        int erdos_index = 0;
        
        for (int i = 0; i < some_authors.size(); i++)
        {
            //std::cout << "\n";

            // Print author that needs erdos index
            std::cout << all_authors[some_authors[i]] << ' ';
            
            std::vector< int > bag;
            int author_index = some_authors[i]; // index of this author
            //std::cout << "index " << author_index << "\n";
            
            bag.push_back(author_index);
            int steps = 0;
            bool found = false;
            while (1)
            {
                //std::cout << "bag:" << bag << "\n";
                steps++;
                int oldsize = bag.size();

                // add new author indices to bag
                std::vector< int > newthings;
                newthings.reserve(all_authors.size());
                for (int i = 0; i < oldsize; i++)
                {
                    int elt = bag[i];
                    for (int j = 0; j < all_authors.size(); j++)
                    {
                        if (table[elt][j] == 1)
                            unique_push_back(bag, j);
                    }
                }
                //std::cout << "steps:" << steps << "  bag:" << bag << '\n';
                if (find(bag, erdos_index) != -1)
                {
                    found = true;
                    break;
                }

                // break if bag size has not changed
                if (bag.size() == oldsize) break;
            }
            
            if (found) std::cout << steps << '\n';
            else std::cout << "infinity\n";
        }
                
        // delete table
        for (int i = 0; i < all_authors.size(); i++)
            delete [] table[i];
        delete [] table;        
    }
    
    return 0;
}
