vector<int> jimOrders(vector<vector<int>> orders) {
int n=orders.size();
vector<pair<int,int>> sum(n);
for(int i=0;i<n;i++)
{
    sum[i].first=orders[i][0]+orders[i][1];
    sum[i].second=i+1;
}
sort(sum.begin(), sum.end());
vector<int> index(n);
for(int i=0;i<n;i++)
{
    index[i]=sum[i].second;
}
return index;
  
  --------------output--------------------
    Sample Input 1

5
8 1
4 2
5 6
3 1
4 3
Sample Output 1

4 2 5 1 3
