
int anagram(string s) {
    int n=s.size();
    if(s.size()%2!=0) return -1;
    int arr[26]={0};
    int sum=0;
    for(int i=0;i<n/2;i++)
    {
        arr[s[i]-'a']++;
    }
    for(int j=n/2;j<n;j++)
    {
        arr[s[j]-'a']--;
    }
    for(int i=0;i<26;i++)
    {
        if(arr[i]>0)
        {
           sum+=arr[i]; 
        }
    }
    return sum;

}
