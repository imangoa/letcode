#include<bits/stdc++.h>
using namespace std;

class Solution {
 int removeElement(vector<int>& nums, int val) {
     int j=0;
     for (int i = 0; i < nums.size(); i++)
     {
         if (nums[i]==val)
         {
             nums[j]=val;
             j++;
         }
         
     }
     if(j>0)
        j=j+1;
     return j;
}
};
