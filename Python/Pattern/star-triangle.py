#write a python program to print triangle of stars.

# input 5   
#     *     
#    * *    
#   * * *   
#  * * * *  
# * * * * * 

x = int(input("Enter the number: "))

for i in range(x):
    for j in range(x-i):
        print(" ",end="")
    for j in range(i+1):
        print("* ",end="")
    print()