#include<iostream>
#include<vector>
#include<unordered_map>
#define REP(i,a,b) for(int i = a ; i<b; i++);

using namespace std;

typedef vector<int> vi;

//Two sum algorithm implementing hash map

vi twoSum( const vi &nums, int target){
    unordered_map<int, int> seen;
    for (int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums[i];
        if (seen.find(complement) != seen.end()){
            return {seen[complement], i};
        }
        seen[nums[i]] = i;
        
    }
    return {};
}

int main(){
    vi nums = {2,7,11,15};
    int target = 18;
    vi result = twoSum(nums, target);
    if(!result.empty()){
        cout << result[0] << " " << result[1];
    }else{
        cout << "No solution";
    }
    return 0;
}