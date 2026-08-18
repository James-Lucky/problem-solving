#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mp; 

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i]; 


        if (mp.find(complement) != mp.end()) {
            return {mp[complement], i}; 
        }

        mp[nums[i]] = i;
    }

    return {};
}

int main() {
    vector<int> nums = {3, 2, 4, 5, 8};
    int target = 6;

    vector<int> result = twoSum(nums, target);

    if (!result.empty()) {
        cout << "index -" << "[" << result[0] << ", " << result[1] << "]" << endl;
        cout << "Sum - "  << nums[result[0]] + nums[result[1]]  << endl;
    } 
    return 0;
}