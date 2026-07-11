// Last updated: 7/11/2026, 11:53:28 PM
1class Solution {
2public:
3    int minSubArrayLen(int target, vector<int>& nums) {
4        int n=nums.size();
5        int low=0;
6        int sum=0;
7        int minlen= INT_MAX;
8        int high;
9        for (high=0;high<n;++high){
10            sum+=nums[high];
11        
12        while(sum>=target){
13            minlen= min(minlen,high-low+1);
14            sum-=nums[low];
15            ++low;
16
17        }}
18        return(minlen==INT_MAX)? 0 : minlen;
19        
20    }
21};