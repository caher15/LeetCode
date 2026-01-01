/*125. Valid Palindrome
Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]

Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]

Time complexity O(n) Using two pointers
*/
#include<iostream>
#include<vector>

using namespace std;

typedef vector<char> vc;


//Two sum algorithm implementing hash map

vc reverseString(vc& s){
    int left = 0, right = s.size()-1;
    while(left < right){
        swap(s[left], s[right]);
        left++;
        right--;
    }
    return s;
}

int main(){
    vc s = {'h','e','l','l','o'};
    cout << "Original vector: ";
    for(char c : s){
        cout << c << " ";
    }
    cout << "\n";
    vc ans = reverseString(s);
    cout << "reverse vector: ";
    for(char c : s){
        cout << c << " ";
    }
    cout << "\n";
    return 0;
}