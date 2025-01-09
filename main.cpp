#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


// Solution 1
// Finding the two indexes using nested for loop
vector<int> TwoSum1(vector<int> nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                // Return 0 based indices
                return {i , j};
            }
        }
    }
    // No solution found
    return {-1, -1};
}

// solution 2
// Using a hashmap to store values we have seen before
vector<int> TwoSum2(vector<int> nums, int target) {
    // Stores number -> index
    unordered_map<int, int> memory;

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (memory.find(complement) != memory.end()) {
            // Return 0 based indices
            return {memory[complement], i};
        }
        // Store the current number with its index
        memory[nums[i]] = i;
    }
    // No solution found
    return {-1, -1};
}

int main() {
    vector<int> result1 = TwoSum1({2,7,11,15}, 9);
    vector<int> result2 = TwoSum2({3,2, 4}, 6);

    cout << "TwoSum1 gives: " << result1[0] << ", " << result1[1] << endl;
    cout << "TwoSum2 gives: " << result2[0] << ", " << result2[1] << endl;

    return 0;
}
