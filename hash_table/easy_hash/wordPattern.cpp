/*#290. Word Pattern
Input: pattern = "abba", s = "dog cat cat dog"
Output: true

Input: pattern = "abba", s = "dog cat cat fish"
Output: false

Time complexity O(n) Using hash table
*/

#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<unordered_map>

using namespace std;

bool Solution(string pattern, string s){
    vector<string> words;
    string word;
    stringstream ss(s);

    while(ss >> word) words.push_back(word);
    if(words.size() != pattern.size())return false;
    
    unordered_map<char, string>mp;
    unordered_map<string, char> rev;
    
    for(int i = 0; i < pattern.size(); i++){
        char c = pattern[i];
        string w = words[i];

        if(mp.count(c) && mp[c] != w) return false;
        if(rev.count(w) && rev[w] != c) return false;

        mp[c] = w;
        rev[w] = c;
    }
    return true;

}

int main(){
    string pattern, s;
    cout << "Enter the pattern \n";
    cin >> pattern ;
    cout << "Enter the words \n";
    cin.ignore();  //clean buffer the input
    getline(cin, s); //for empty spaces
    bool ans = Solution(pattern, s);
    cout << ans<< "\n";
    return 0;
}
