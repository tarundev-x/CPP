class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
         int n = mat.size() ;
    vector<pair<int,int>> sum ;
    
    int i=0 ;
    
    for(auto x:mat)
    {
        int c = 0 ;
        
        for(auto y:x)
            c += y ;
        
        sum.push_back({c,i++}) ;
    }
    sort(sum.begin(),sum.end()) ;
    
    vector<int> ans(k) ;
    
    for(int j=0 ; j < k;j++)
        ans[j] = sum[j].second ;
    
    return ans ;
    }
};
