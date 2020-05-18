// Simeon Ng
// 5-17-20
// Problem 2-1
// Remove Dups: Write code to remove duplicates from an unsorted linked list.

// Need to check solution.

#include <iostream>
#include <forward_list>
#include <unordered_map>

using namespace std;

int main() 
{
    forward_list<int> fList = {5, 4, 3, 2, 1, 2, 3};
    unordered_map<int, int> umap;

    for (auto i = fList.begin(); i != fList.end(); ++i)
    {
        auto search = umap.find(*i);
        if (search != umap.end())
        {
            fList.remove(*i);
        }
        umap[*i] = 1;
    }

    cout << "Removed dups: ";
    for (auto i = fList.begin(); i != fList.end(); ++i)
    {
        cout << *i << " ";
    }
    cout << endl;

    return 0;
}