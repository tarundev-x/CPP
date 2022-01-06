def beautifulTriplets(d, arr):
    # Write your code here
    gc=0
    for i in range(n):
        if (arr[i]+d) in arr and (arr[i]+2*d) in arr:
            gc+=1
    return gc
