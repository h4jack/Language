#write a program to find the sum of xor of all pairs in a list of numbers.

#User function Template for python3

class Solution:
    def sumXOR (self, arr, n) : 
        #Complete the function
        sum = 0
        i = 0
        while(i < n):
            j = i
            while(j < n):
                sum += arr[i] ^ arr[j]
                print(sum)
                j+=1
            i+=1
        return sum
            

#{ 
 # Driver Code Starts
#Initial Template for Python 3



for _ in range(0,int(input())):
    
    n = int(input())
    arr = list(map(int,input().strip().split()))
    ob = Solution()
    res = ob.sumXOR(arr, n)
    print(res)


# } Driver Code Ends