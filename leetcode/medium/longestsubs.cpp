#include <iostream>
#include <string>

using namespace std;

int lengthOfLongestSubstring(string s); 

int main()
{
    string s = "pwwkew";
    int outs;
    outs = lengthOfLongestSubstring(s);
    cout<<outs;
    return 0;
}

/*Given a string s, find the length of the longest substring without duplicate characters.

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3. Note that "bca" and "cab" are also correct answers.
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
 */

int lengthOfLongestSubstring(string s) 
{
    string aux,aux1;
    aux = s[0];
    int j=0;
    for(int i=1;i<s.size();i++){
        for(j=0;j<aux.size();j++){
            if(aux[j]!=s[i]){
                aux=aux+s[i];
            }else{
                if(aux.find(s)){
                    aux1 = aux;
                    aux="";
                    aux+=s[i];
                }
            }
        }
    }
    cout<<aux1<<" "<<aux<<" ";
    return aux1.size();
}