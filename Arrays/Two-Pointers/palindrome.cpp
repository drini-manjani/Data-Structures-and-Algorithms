#include <iostream>
#include <string>

// Example 1: Given a string s, return true if it is a palindrome, false otherwise.

std::string b{"abcnba"};

bool checkifPalindrome(std::string s){
    
    int left = 0;
    int right = s.size() -1;

    while (left < right){

        if (s[left] != s[right]){

            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main(){

    std::cout << std::boolalpha;
    std::cout << "Is it a palindrome?:" << checkifPalindrome(b)<< std::endl;

}
