/*
  
The words

abc
abd
abz
all look like ab[cdz]

abc
bbc
cbc
all look like [abc]bc

*/

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

std::string dic[16][25143];
int len_dic[16] = {0};

void dic_insert(const std::string & s)
{
    int i = s.length() - 1;
    // ignore duplicates
    for (int j = 0; j < len_dic[i]; j++)
    {
        if (s == dic[i][j]) return;
    }
    dic[i][len_dic[i]++] = s;
}

int dic_index(const std::string & s)
{
    int index = s.length() - 1;
    for (int i = 0; i < len_dic[index]; ++i)
    {
        if (s == dic[index][i]) return i;
    }
    return -1;
}

bool dic_isadj(const std::string & s,
           const std::string & t)
{
    if (s.length() != t.length()) return false;
    int diff = 0;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] != t[i]) ++diff;
        if (diff > 1) return false;
    }
    return (diff == 1);
}
           
void dic_print()
{
    std::cout << "\nBEGIN DICTIONARY\n";
    for (int i = 0; i < 16; i++)
    {
        for (int j = 0; j < len_dic[i]; j++)
        {
            std::cout << i << "," << j << ": " << dic[i][j] << std::endl;
        }
    }
    std::cout << "END DICTIONARY\n";
}


// an edge in edge[i] is (a,b) where a is a word i.e. in dic i.e.
// therefore (a,b) is made up of 4 numbers
// edge[3] contains edges for 3-word
std::vector< std::vector<int> > edge[16];

void edge_insert(int index, int i, int j)
{
    if (i == j) return; // should be error
    if (i > j)
    {
        int t = i; i = j; j = i;
    }
    std::vector<int> v(2);
    v[0] = i; v[1] = j;
    edge[index].push_back(v);
}

void edge_print()
{
    std::cout << ">>>>> BEGIN EDGE" << '\n';
    for (int i = 0; i < 16; i++)
    {
        for (int j = 0; j < edge[i].size(); ++j)
        {
            std::vector<int> v = edge[i][j];
            std::cout << i << "," << j << ": " << v[0] << "---"
                      << v[1] << std::endl;
        }
    }
    std::cout << ">>>>> END EDGE" << '\n';
}

int main()
{
    std::string s;
    std::cout << ">>>>> read dic" << std::endl;
    while (1)
    {
        std::getline(std::cin, s);
        if (s == "") break;
        std::cout << s << std::endl;
        dic_insert(s);
    }
    dic_print();

    std::cout << "\n>>>>> ADJ" << std::endl;
    for (int i = 0; i < 16; i++)
    {
        for (int j = 0; j < len_dic[i]; j++)
        {
            for (int k = j; k < len_dic[i]; k++)
            {
                if (dic_isadj(dic[i][j], dic[i][k]))
                {
                    std::cout << dic[i][j] << ' ' << dic[i][k] << '\n';
                    edge_insert(i, j, k);
                }
            }
        }
    }
    edge_print();
    std::cout << "\n>>>>> read pairs" << std::endl;
    while (1)
    {
        std::getline(std::cin, s);
        if (s == "") break;
        std::cout << s << std::endl;
    }
    
    return 0;
}
