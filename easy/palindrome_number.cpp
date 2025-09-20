#include <iostream>

using namespace std;

//Int Palindrome algorithm
int main(){
        int x = -121;
        int y = x;
        long long inverse = 0;
        while(x>0){
            int digit = x%10;
            inverse = inverse * 10 + digit;
            x = x/10;
        }
        if(y == inverse) {
            cout << "Palindrome";
        }else {
            cout << "Not a Palindrome";
        }
    
    return 0;
}