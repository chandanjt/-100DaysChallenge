/*
Given an array of integers nums and an integer target, return indices of the
 two numbers such that they add up to target.
You may assume that each input would have exactly one solution,
 and you may not use the same element twice.

You can return the answer in any order.

Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].*/
// C++ Code:

    vector<int> twoSum(vector<int>& nums, int target) {
         int i,j,k=0;
        vector<int>arr;
        for(i=0;i<nums.size();i++)
        {
            for(j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
               {arr.push_back(i);
               arr.push_back(j);
                  break;
               }

            }
        }
        return arr;
    }
