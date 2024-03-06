#write a python program to print the following pattern.

# input 5
# *    
# **   
# * *  
# *  * 
# *****

x = int(input("Enter the number of line: "))

for i in range(x):
    for j in range(i+1):
        if(j == 0 or j == i or i+1 == x):
            print("*",end="")
        else:
            print(" ",end="")
    print()