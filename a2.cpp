#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int removeElement(vector<int>& nums,int val)
        {
            int size=nums.size();
            int repeat=0;
            for (int i = 0; i < size; i++)
            {
                if(nums[i]!=val)
                {
                    nums[repeat]!=nums[i];
                }
                nums[i]++;
            }
            return repeat;
            
        }
};
