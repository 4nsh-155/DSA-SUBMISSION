// Last updated: 7/12/2026, 11:40:01 PM
1class Solution {
2public:
3    bool fun(vector<int> &have, vector<int> &need)
4    {
5        for(int i = 0; i < 256; i++)
6        {
7            if(have[i] < need[i])
8                return false;
9        }
10        return true;
11    }
12
13    string minWindow(string s, string t) {
14        int n = s.size();
15        int m = t.size();
16
17        if(n < m)
18            return "";
19
20        vector<int> have(256, 0), need(256, 0);
21
22        for(char c : t)
23            need[c]++;
24
25        int low = 0;
26        int res = INT_MAX;
27        int start = -1;
28
29        for(int high = 0; high < n; high++)
30        {
31            have[s[high]]++;
32
33            while(fun(have, need))
34            {
35                if(high - low + 1 < res)
36                {
37                    res = high - low + 1;
38                    start = low;
39                }
40
41                have[s[low]]--;
42                low++;
43            }
44        }
45
46        if(start == -1)
47            return "";
48
49        return s.substr(start, res);
50    }
51};