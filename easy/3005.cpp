
//3005. Count Elements With Maximum Frequency
// sum the element that appear most frequently
// with the same numeber of times

#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>

using namespace std;

typedef vector<int> vi;
typedef unordered_map<int, int> umii;
int maxFrequencyElements(vi& nums) {
        umii freq;
        for(int num : nums){
            freq[num]++;
        }

        int maxFreq = 0;
        for(const auto& pair: freq){
            maxFreq = max(maxFreq, pair.second);
        }

        int total = 0;
        for(const auto& pair: freq){
            if(pair.second == maxFreq){
                total += pair.second; 
            }
        }
        return total;
    }

int main(){
    vi nums = {1,2,2,3,1,4};
    cout << maxFrequencyElements(nums);
    return 0;
}
