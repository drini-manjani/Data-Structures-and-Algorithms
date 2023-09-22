#include <iostream>
#include <string>
#include <vector>
#include <cmath>

// Example 1 - Maximum length of subarray (contsgious) with sum smaller than

int max_length(std::vector<int> nums,  int k){


    int left = 0, curr = 0, ans = 0;

    for(int right = 0; right < nums.size(); right++){

        curr += nums[right];

        while(curr > k){

            curr -= nums[left];
            left++;
        }

        ans = std::max(ans, right - left + 1);

    }

    return ans;
}

int main(){

    std::vector<int> example{1,4,6,7,8,5,6,8,5,9};
    int number = 10;

    std::cout << max_length(example, number) << std::endl;

}