#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>

using namespace std;

    bool isIsomorphic(string s, string t) {
    unordered_map<char,int> map_s, map_ts;

    if(s.size() != t.size()){
        return false;
    }

    for(int i = 0; i < s.size();i++){
        if(map_s.find(s[i]) == map_s.end()){
            map_s[s[i]] = i;
        }
        if(map_ts.find(t[i]) == map_ts.end()){
            map_ts[t[i]] = i;
        }
        if(map_s[s[i]] != map_ts[t[i]]){
            return false;
        }
    }
    return true;

    
    
}

int main(){
    string s = "egs", t = "add";
    cout << isIsomorphic(s, t);
    return 0;
}