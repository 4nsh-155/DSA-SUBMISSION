// Last updated: 7/21/2026, 11:13:04 PM
1class Solution {
2public:
3    int findDuplicate(vector<int>& nums) {
4        int slow = nums[0];
5        int fast = nums[nums[0]];
6
7        while (slow != fast) {
8            slow = nums[slow];
9            fast = nums[nums[fast]];
10        }
11
12        slow = 0;
13
14        while (slow != fast) {
15            slow = nums[slow];
16            fast = nums[fast];
17        }
18
19        return slow;
20    }
21};
22