#include<iostream>
#include<unordered_set>
#include<vector>

using namespace std;


//Contains duplicate #217
// Using unorderedset-hash 
// Time complexity n(1)

bool Solution(vector<int>& v){
    unordered_set<int> seen(v.begin(), v.end());
    if(seen.size() != v.size()) return true;
    return false;
}


int main(){
    vector<int> v = {1,1,1,3,3,4,3,2,4,2 };
    cout << Solution(v) << "\n";
}