class Solution {
public:
vector plusOne(vector& list) {

int n = list.size();

if (list[n - 1] + 1 <= 9)
{
    list[n - 1] += 1;
    return list;
}
else
{
    for (int i = n - 1; i >= 0; i--)
    {
        if (list[i] == 9 && i != 0)
            list[i] = 0;
        else if (list[i] == 9 && i == 0)
        {
            list[i] = 1;
            list.push_back(0);
        }
        else
        {
            list[i] += 1;
            break;
        }
    }
    return list;
}
   
}
};
