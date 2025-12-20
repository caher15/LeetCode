/*#387. First Unique Character in a String
Input: s = "leetcode"
Output: 0

Input: s = loveleetcode
Output: 2

Input: s = "aabb"
Output: -1

Time complexity O(n) 
*/
#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>

using namespace std;

    int firstUniqChar(string s) {
        unordered_map<char, int> freq;
        for(char c : s){
            freq[c]++;
        }
        
        for(int i = 0; i < s.size();i++){
            if(freq[s[i]] == 1){
                return i;
            }
        }
        return -1;
    
    
}

int main(){
    string s = "dddccdbba";
    cout << firstUniqChar(s);
    return 0;
}