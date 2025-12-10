#include<iostream>
#include<unordered_map>
#include<string>
#include<algorithm>

using namespace std;

string Solution(int goals){
    unordered_map<string, int> freq;
    for(int i = 0;i < goals;i++){
        string s;
        cin >> s;
        freq[s]++; 
    }
    string winner;
    int maxF = -1;//Aseguramos que el valor siempre es mayor 

    for(auto& p : freq){//itera el mapa 
        if(p.second > maxF){
        maxF = p.second;
        winner = p.first;
        }
    }
    return winner;
}

int main(){
    int goals;
    cin >> goals;
    string result = Solution(goals);
    cout << result << "\n";
    return 0;
}