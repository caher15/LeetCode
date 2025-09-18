#include<iostream>
#include<vector>
#define REP(i,a,b) for(int i = a ; i<b; i++);

using namespace std;

typedef vector<int> vi;

int main(){
    vi n = {3,2,4};
    int target = 6;

    for(int i = 0; i < n.size(); i++){
        for(int j = i+1; j < n.size(); j++){
            if(n[i] +n[j] == target)
                cout << i << j << "\n";
        }
    }
    return 0;

}