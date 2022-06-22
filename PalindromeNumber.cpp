#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class Solution {
    public: 
        bool isPalindrome(int x) {
            bool palindrome = true;
            
            //convert int to string
            string str = to_string(x);

            //reverse string
            int n = str.length();
            
            for(int i = 0; i < n / 2; i++) {
                swap(str[i], str[n - i - 1]);
            }

            //compare data
            int y = stoi(str);

            if(x != y) 
                palindrome = false;
            
            return palindrome;
        }
};

int main() {
    Solution soln;

    cout << "Enter a number: " << endl;
    string str;
    cin >> str;
    int x = stoi(str);
    
    bool isPalindrome = soln.isPalindrome(x);
    if(isPalindrome) 
        cout << "The number " << x << " is a palindrome!" << endl;
    else 
        cout << "The number " << x << " is not a palindrome!" << endl;
}