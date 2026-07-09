// Last updated: 7/9/2026, 9:42:08 PM
1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        int low=0;
5        int n=s.size();
6        int maxlen=0;
7        unordered_map<int,int> f;
8        for(int high=0;high<n;high++){
9            f[s[high]]++;
10            while(f[s[high]]>1){
11                f[s[low]]--;
12                low++;
13            }
14            maxlen=max(maxlen,high-low+1);
15        }
16        return maxlen;
17
18        
19    }
20};