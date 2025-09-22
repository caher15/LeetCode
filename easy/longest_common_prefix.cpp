#include <iostream>
#include <vector>
#include <string>

using namespace std;

typedef vector<string> vs;

string longestCommonPrefix(const vs& strs){
    for(int i =0; i < strs[0].size(); i++){
        for(int j = 1; j < strs.size(); j++){
            if(i >= strs[j].size() || strs[j][i] != strs[0][i]){
                return strs[0].substr(0, i);
            }
        }
    }
    return strs[0];
}

int main(){
    vs strs = {"flower", "flight", "flow"};
    cout << longestCommonPrefix(strs)<< "\n";
    return 0;
}
