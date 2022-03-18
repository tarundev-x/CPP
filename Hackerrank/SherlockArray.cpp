string balancedSums(vector<int> arr) {
int sum=0;
int l=0;
for(auto it:arr)
{
    sum+=it;
}
for(auto it:arr)
{
    if(2*l== sum-it) return "YES";
    else l+=it;
}
return "NO";
  
  --------------------
    ---------input------
    Sample Input 0

2
3
1 2 3
4
1 2 3 3
    ------------output-------
    Sample Output 0

NO
YES
    -----------------
    xplanation(using math logic) - let's denote a middle integer with y and both
right and left side as x because there sum is same. Now the equation will look like ->
1) x + y + x = sum of array
2) 2x + y = sum
3) 2x = sum - y
