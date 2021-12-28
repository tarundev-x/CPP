////count pairs with given sum

Multisets are a type of associative containers similar to set, with an exception that multiple elements can have same values.
Some Basic Functions associated with multiset: 
begin() – Returns an iterator to the first element in the multiset 
end() – Returns an iterator to the theoretical element that follows last element in the multiset 
size() – Returns the number of elements in the multiset 
max_size() – Returns the maximum number of elements that the multiset can hold 
empty() – Returns whether the multiset is empty

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        multiset <int> m;
       int ans=0;
       for(int i=0;i<n;i++)
       {
           int sum=k-arr[i];
           ans+= m.count(sum);
           
           m.insert(arr[i]);
       }
       return ans;
    }
};
