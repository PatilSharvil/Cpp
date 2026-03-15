#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<int> nums = {1,3,-1,2,-3,5,3,6,7};
    int k = 3;

    deque<int> d;
    vector<int> ans;

    for(int i = 0; i < nums.size(); i++)
    {
        while(!d.empty() && d.front() < i - k + 1)
        {
            d.pop_front();
        }

        d.push_back(i);

        if(i >= k - 1)
        {
            int Max = INT_MIN;

            for(auto idx : d)
            {
                Max = max(Max, nums[idx]);
            }

            ans.push_back(Max);
        }
    }

    for(auto x : ans)
        cout << x << " ";
}
