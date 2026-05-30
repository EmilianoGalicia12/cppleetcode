#include <iostream>
#include <vector>

using namespace std;

//tiempo 23:00 min

vector<int> TwoSum(vector<int>& nums, int target);

int main()
{
    vector<int> nums,outs;
    nums = {3,2,4};
    int target = 6;
    outs = TwoSum(nums,target);
    for(int numero:outs)
    {
        cout<< numero << " ";
    }
    return 0;
}

/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:
Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:
Input: nums = [3,3], target = 6
Output: [0,1]
*/

vector<int> TwoSum(vector<int>& nums, int target)
{
    vector<int> out;
    int j=0;
    for(int i=0;i<nums.size();i++){
        for(j=1;j<nums.size();j++){
            if(nums[i] + nums[j] == target && i!=j){
                out.push_back(i);
                out.push_back(j);
                return out;
            }else{
                continue;
            }
        }
    }
    if(out.empty())
        cout<<"no se encontro nada"<<endl;
    return out;
}