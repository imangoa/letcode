#include<bits/stdc++.h>
using namespace std;

// void swap(int &a,int &b)
// {
//     int c=a;
//     a=b;
//     b=c;
// }

// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     swap(a,b);
//     cout<<a+b;
//     cout<<a<<b;
//     return 0;
// }

class Solution {
    public:
        int removeElement(vector<int>& nums){
            int n=nums.size();
            if(n==0)
                return 0;
            int fast=1,slow=1;
            while (fast<n)
            {
                if (nums[fast]!=nums[fast-1])
                {
                    nums[slow]=nums[fast];
                    ++slow;
                }
                ++fast;
            }
            return slow;
        }
};