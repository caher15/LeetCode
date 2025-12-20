/*#944. Delete Columns to Make Sorted
Input: strs = ["cba","daf","ghi"]
    cba
    daf
    ghi
Output: 1

Input: strs = ["a","b"]
Output: 0

Time complexity O(n * k) 
*/

#include<iostream>
#include<vector>
#include<string>

using namespace std;

bool isUnsortered(const vector<string>& strs, int j){
    for(int i = 1; i < strs.size(); i++){
        if(strs[i][j] < strs[i - 1][j])return true;
    }
    return false;
}

int Solution(const vector<string>& strs){
    int res = 0;
    for(int j = 0; j < strs[0].size(); j++){
        res += isUnsortered(strs, j);
    }
    return res;
}

int main(){
    vector<string> vs = {"zyx","wvu","tsr"};
    int result = Solution(vs);
    cout << result << "\n";
    return 0;
}