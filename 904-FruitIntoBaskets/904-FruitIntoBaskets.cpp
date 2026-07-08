// Last updated: 7/8/2026, 3:43:02 PM
1class Solution {
2public:
3    int totalFruit(vector<int>& fruits) {
4        int low=0;
5        unordered_map<int,int> f;
6        int maxlen=0;
7        int n=fruits.size();
8        for(int high=0;high<n;high++){
9            f[fruits[high]]++;
10            while(f.size()>2){
11                f[fruits[low]]--;
12                if(f[fruits[low]]==0){
13                    f.erase(fruits[low]);
14                }
15              low++;
16            }
17            maxlen=max(maxlen,high-low+1);
18        }
19        return maxlen;
20        
21    }
22};