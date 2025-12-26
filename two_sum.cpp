class Solution {
public:
//This function finds two different indices in the array such that the sum of the elements at those indices equals the target value
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0; i<nums.size(); i++){ //Loop through the array for the first element
            for(int j=i+1; j<nums.size(); j++){ //Loop through the remaining elements to find a pair with nums[i]
                if(nums[i]+nums[j]==target){ //Check if the sum of the current pair equals the target
                    return {i,j}; //Return the indices of the two elements if condition is satisfied
                }
            }
        }
        return {}; //Return an empty vector if no valid pair is found
    }
};
//Time Complexity: O(n^2) because two nested loops are used
//Space Complexity: O(1) as no extra data structures are used
