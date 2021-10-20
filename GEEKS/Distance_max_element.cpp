class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
        return distance(arr, max_element(arr, arr + n));
       // Your code here
    }
};
