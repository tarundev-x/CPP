class Solution {
public:
    
    int countPrimes(int n) {
        if(n<2)
            return 0;
        vector<int>v(n,1);
        v[0]=0;
        v[1]=0;
        for(int i=2;i<sqrt(n);i++)
        {
            if(v[i]==1)
            {
                for(int j=2;j*i<n;j++)
                {
                    v[j*i]=0;
                }
            }
        }
        return count(v.begin(),v.end(),1);
    }
};
