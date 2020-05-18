// Simeon Ng
// 5/16/20
// Problem 1-1
// Is Unique: Implement an algorithm to determine if a string has all unique characters. 
// What if you cannot use additional data structures?

#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() 
{
    string testStr;
    cin >> testStr;

    unordered_map<char, int> umap;
    bool isUnique = true;
    for (int i = 0; i < testStr.size(); i++)
    {
        auto search = umap.find(testStr[i]);
        if (search != umap.end()) {
            isUnique = false;
            break;
        }
        umap[testStr[i]] = i;
    }

    if (isUnique)
        cout << testStr << " is unique" << endl;
    else
        cout << testStr << " is not unique" << endl;
    
    return 0;
}