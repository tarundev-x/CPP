
string convert(string s)
{
    // code here.
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>=65 & s[i]<=90)
        {
            int temp=s[i]-'A';
            s[i]='Z'-temp;
        }
        if(s[i]>=97 & s[i]<=122)
        {
            int temp=s[i]-'a';
            s[i]='z'-temp;
        }
    }
    return s;
}
