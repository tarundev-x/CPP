class Solution{
public:
    int kthPrime(int n, int k){
        // code here
         vector<int>v;
        for(int i=2;i*i<=n;i++)
        {
            while(n%i==0)
                {
                   v.push_back(i);
                   n=n/i;
                }
        }
        if(n>1) v.push_back(n);
        
        int x;
        for(int i=0;i<v.size();i++)
        {
            x=v[k-1];
        }
        
        if(v.size()<k) return -1;
        
        return x;
    }
};
