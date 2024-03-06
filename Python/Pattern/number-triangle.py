#write a python program to print triangle of stars.

# input 5   
# input 5   
#              1
#           2     3
#        4     5     6
#     7     8     9    10
# 11    12    13    14    15

x = int(input("Enter the number: "))
k = 1
for i in range(x):
    for j in range(x-i):
        print("   ",end="")
    for j in range(i+1):
        print("%3d   "%k,end="")
        k+=1
    print()