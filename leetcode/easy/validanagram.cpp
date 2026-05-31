#include <iostream>
#include <unordered_map>

using namespace std;

bool isAnagram(string s, string t);

int main()
{
    cout<<"hola mundo"<<endl;
    string s="jar";
    string t="jam";
    bool band;
    band = isAnagram(s,t);
    cout<<band;
    return 0;
}

/*
Given two strings s and t, return true if the two strings are anagrams of each other, otherwise return false.

An anagram is a string that contains the exact same characters as another string, but the order of the characters can be different.

Example 1:

Input: s = "racecar", t = "carrace"

Output: true
Example 2:

Input: s = "jar", t = "jam"

Output: false
*/

bool isAnagram(string s, string t) 
{
    unordered_map<char,int> aux;
    bool band = true;
    if(s.size() != t.size()){
        return false;
    }else{
        for(int i=0;i<s.size();i++){
            aux[s[i]]++;
        }
        for(int j=0;j<t.size();j++){
            aux[t[j]]--;
            if(aux[t[j]]<0){
                return false;
            }
        }
    }
    return band;
}