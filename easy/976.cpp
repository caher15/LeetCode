//976. Largest Perimeter Triangle
// greedy 
// Given an integer array nums, return the largest perimeter of a triangle 

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
typedef vector<int> vi;

int largestPerimeter(vi& nums) {
    sort(nums.begin(), nums.end(), greater<int>());  //largest to smallest
    for(int i = 0; i < nums.size()-2; i++) // using 3 largest values
        if(nums[i + 1] + nums[i +2] > nums[i]) //b + c > a
            return nums [i] + nums[i +1] + nums[i +2]; 
    return 0;
}

int main(){
    vi nums = {2,1,2}; // output 5
    cout << largestPerimeter(nums);
    return 0;
}