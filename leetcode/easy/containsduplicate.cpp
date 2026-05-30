#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool hasDuplicate(vector<int>& nums);

int main()
{
    cout<<"hola mundo";
    bool band;
    vector<int> nums = {1,2,3,4};
    band = hasDuplicate(nums);
    cout<<endl<<band;
    return 0;
}

/*
Given an integer array nums, return true if any value appears more than once in the array, otherwise return false.

Example 1:

Input: nums = [1, 2, 3, 3]

Output: true

Example 2:

Input: nums = [1, 2, 3, 4]

Output: false
*/

bool hasDuplicate(vector<int>& nums) 
{
    unordered_set<int> aux;
    for(int i=0;i<nums.size();i++){
        if(aux.count(nums[i]) > 0)
        {
            return true;
        }else{
            aux.insert(nums[i]);
        }
    }
    return false;
}