/*#242 Valid Anagram
Input: s = "anagram", t = "nagaram"
Output: true

Input: s = "rat", t = "car"
Output: false

Time complexity O(n) Using hash table
*/

#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

bool Solution(string s, string t){
    unordered_map<char, int> count;

    for(char c : s){
        count[c]++;
    }
    for(char c : t){
        count[c]--;
        if(count[c] < 0) return false;
    }
    for(auto& [ch, cnt] : count){
        if(cnt != 0) return false;
    }
    return true;
}

int main(){
    string s, t;
    cin >> s ;
    cout << "\n";
    cin >> t ;
    bool result = Solution(s, t);
    cout << result<< "\n";
    return 0;
}
