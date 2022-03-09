
class Solution{
	public:
	vector<int>AllPrimeFactors(int N) {
	    // Code here
	    set<int>s;
	    vector<int>v;
	    for(int i=2;i<=N;i++)
	    {
	        while(N%i==0)
	        {
	            s.insert(i);
	            N=N/i;
	        }
	    }
	    for(auto it:s)
	    {
	        v.push_back(it);
	    }
	    return v;
	}
};
