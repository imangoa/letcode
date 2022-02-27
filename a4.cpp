#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int removeElement(string input)
        {
            bool is = true;
            int length = input.length();
            int i=0,j=length-1;
            while (i<j)
            {
                if (input[i]!=input[j])
                    is=false;
                i++;
                j--;
            }
            cout << (is?"Yes":"no")<< "\n";
        }
}
