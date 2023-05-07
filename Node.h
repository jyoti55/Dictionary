#ifndef NODE_H
#define NODE_H
#include<iostream>
#include<string>
#include<iterator>
#include<vector>
#include<list>
#include<fstream>
#include<sstream>
#include<cstdlib>
#include<utility>
#include<iomanip>
#define ALPHABET_SIZE 26
using namespace std;
class trie
{
    public:
    string meaning;
    string word;
    trie* children[26];
    int isLeaf;
};

#endif


