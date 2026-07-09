// Last updated: 7/9/2026, 10:16:44 PM
1class Solution {
2public:
3    int characterReplacement(string s, int k) {
4        int low=0;
5        int n=s.size();
6        int maxf=0;
7        int high;
8        int res=0;
9        vector<int> f(26,0);
10        for(high=0;high<n;high++){
11            f[s[high]-'A']++;
12            maxf=max(maxf,f[s[high]-'A']);
13            while((high-low+1)-maxf >k){
14                f[s[low]-'A']--;
15                low++;
16            }
17            res=max(res,high-low+1);
18
19
20        }
21
22
23        return res;
24    }
25};