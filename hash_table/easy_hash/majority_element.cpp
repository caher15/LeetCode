/*#169. Majority Element
Input: nums = [3,2,3]
Output: 3

Input: nums = [2,2,1,1,1,2,2]
Output: 2

Time complexity O(n) 
*/
#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        int n = nums.size();
        for(int num : nums){
            freq[num]++;
            if(freq[num] > n /2) return num;
        }
        
        return 0;
    
    
}

int main(){
    vector<int> nums = {3,2,3};
    cout << majorityElement(nums);
    return 0;
}