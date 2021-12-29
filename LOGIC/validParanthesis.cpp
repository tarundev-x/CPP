bool matching(string s)
{
    if(s=='('&s==')' ||s=='{' &s=='}'||s=='[' & s==']') return true;
bool isBalanced(string s)
{
    stack<char>st;
    for(char x:s)
    {
        if(x=='('||x=='{'||x=='[')
        {
            st.push(x);
        }
        else
        {
            if(st.empty()==false)
            {
                return false;
            }
            if(matching(st.top(),x)==false)
            {
                return false;
            }
            else
            {
                st.pop();
            }
        }
    }
    return (st.empty()==true);
}
