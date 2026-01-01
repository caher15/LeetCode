/*125. Valid Palindrome
Input: s = "A man, a plan, a canal: Panama"
Output: true

Input: s = "race a car"
Output: false

Time complexity O(n) Using two pointers
*/
#include<iostream>
#include<string>
#include<cctype>

using namespace std;


//Two sum algorithm implementing hash map

bool isPalindrome(string s){
    if(s.size() == 0) return true;
    int left =0, right = s.size()-1;
    while(left < right){
        if(!isalnum(s[left])){
            left++;
            continue;
        }
        if(!isalnum(s[right])){
            right--;
            continue;
        }
        if(tolower(s[left]) != tolower(s[right])){
            return false;
        }
        right--;
        left++;
    }
    return true;
}

int main(){
    string s = "A man, a plan, a canal: Panama";
    bool ans = isPalindrome(s);
    cout << ans;
    cout << "\n";
    return 0;
}