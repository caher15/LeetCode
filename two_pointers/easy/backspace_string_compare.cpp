/*844. Backspace String Compare
Input: 
s = "xywrrmp"
t = "xywrrmu#p"
Output: true

Input: 
s = "a#c"
t = "b"
Output: false

Time complexity O(n + m) Using two pointers
*/
#include<iostream>
#include<string>

using namespace std;

bool backspaceCompare(string s, string t){
    int i = s.size()- 1;
    int j = t.size()- 1;
    int skipS = 0, skipT = 0;
    while(i >= 0 || j >= 0){
        while(i >= 0){//iterate S
            if(s[i] == '#'){
                skipS++;
                i--;
            }else if(skipS > 0){
                skipS--;
                i--;
            }else{
                break;
            }
        }
            while(j >= 0){
                if(t[j] == '#'){
                    skipT++;
                    j--;
                }else if(skipT > 0){
                    skipT--;
                    j--;
                }else{
                    break;
                }
            }
            if(s[i] >= 0 && t[j]>=0 && s[i] != t[j]) return false; //compare
            if((s[i] >=0) != (t[j] >=0)) return false;
            i--;
            j--;
    }
    return true;
}


int main(){
    string s = "xywrrmp", 
    t = "xywrrmu#p";
    bool ans = backspaceCompare(s, t);
    cout << ans;
    cout << "\n";
    return 0;
}