   int count=0;
    vector<bool>gem(26);
    for(int l='a';l<='z';l++)
    {
        bool flag=true;
        for(int i=0;i<arr.size();i++)
        {
        if(arr[i].find(l)==string::npos)
        {
            gem[i]=false;
            flag=false;
            break;
        }
            
        }
        if(flag)
            count++;
    }
    return count;
