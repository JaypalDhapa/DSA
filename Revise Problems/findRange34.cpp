/*34. Find First and Last Position of Element in Sorted Array

Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
Example 3:

Input: nums = [], target = 0
Output: [-1,-1]
 */


#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
        vector<int> searchRange(vector<int>& nums, int target) {
            int low=0;
            int high=nums.size()-1;
            int start=-1,end=-1;
    
            while(low<=high){
                int mid = low+(high-low)/2;
    
                if(nums[mid] == target){
                    start=mid;
                    high=mid-1;
                }else if(target>nums[mid]){
                    low=mid+1;
                }else{
                    high=mid-1;
                }
            }
    
            low=0;
            high=nums.size()-1;
    
            while(low<=high){
                int mid = low+(high-low)/2;
                if(nums[mid] == target){
                    end=mid;
                    low=mid+1;
                }else if(target>nums[mid]){
                    low=mid+1;
                }else{
                    high=mid-1;
                }
            }
    
            return {start,end};
        }
};

int main(){

    Solution s;
    vector<int>nums={2,4,6,8,8,8,8,10,12,15};
    int target=8;
    vector<int>Range = s.searchRange(nums,target);

    for(int num:Range){
        cout<<num <<" ";
    }

    return 0;
}