class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        int low=0;
        int high=0;
        unordered_map<char,int> f ;
        int maxlen=-1;
        int n=s.size();
        for(high=0;high<n;high++){
            f[s[high]]++;
            while(f.size()>k){
                f[s[low]]--;
                if(f[s[low]]==0){
                    f.erase(s[low]);
                    
                }
                low++;
            }
            if(f.size()==k){
                maxlen=max(maxlen,high-low+1);
            }
            
        }
        return maxlen;

        
    }
};