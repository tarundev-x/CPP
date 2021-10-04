   int level=0;
    int valleys=0;
    
for(int i=0;i<steps;i++)
{
    if(path[i]=='U')
    {
        if(level==-1)
        {
            valleys++;
        }
        level++;
    }
    else {
    level--;
    }
}
return valleys;
