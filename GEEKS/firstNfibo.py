class Solution:
    #Function to return list containing first n fibonacci numbers.
    def printFibb(self,n):
        # your code here
        if n==1:
            result=[1]
            return result
        result=[1,1]
        for i in range(2,n):
             result.append(result[i-1]+result[i-2]);
        return result
