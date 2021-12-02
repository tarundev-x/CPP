class Solution {
  public:
    vector<int> changeBits(int N) {
        
        // code here
        vector<int>v;
        string st="";
        int n=N;
        int cnt=0;
        while(n!=0)
        {
           n=n>>1;
           cnt++;
        
        }
     int k=pow(2,cnt)-1;
     int d=k-N;
     v.push_back(d);
     v.push_back(k);
      return v;
    }
