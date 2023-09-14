#include <iostream>
#include <string>
#include <vector>
#include <cmath>

// Example 1: Given a string s, return true if it is a palindrome, false otherwise.

bool checkifPalindrome(std::string word){
    
    int left = 0;
    int right = word.size() -1;

    while (left < right){

        if (word[left] != word[right]){

            return false;
        }

        left++;
        right--;
    }

    return true;
}

std::vector<int> sorted_squared(std::vector<int>& sorted_vector){

    int left = 0;
    int right = sorted_vector.size() -1;
    std::vector<int> sorted_sq_vector(sorted_vector.size());

    for(int i = 0; i < sorted_vector.size(); i++){
        int square;

        if(abs(sorted_vector[left]) < abs(sorted_vector[right])){

            square = sorted_vector[right];
            right -- ;

        }else{

            square = sorted_vector[left];
            left ++ ;

        }

        sorted_sq_vector[i] = square * square;

    }

    return sorted_sq_vector;

}



int main(){

    std::string word_example{"abcba"};

    std::cout << std::boolalpha;
    std::cout << "Is it a palindrome?:" << checkifPalindrome(word_example)<< std::endl;

    ////////////////////////////////////////////////////////////////////////////////////

    std::vector<int> sorted_vector{-5,-3,-1,0,1,3,6};
    auto sorted_sq = sorted_squared(sorted_vector);

    for (auto i: sorted_sq){

        std::cout << i << ' ';

    }

    std::cout << std::endl;

}
