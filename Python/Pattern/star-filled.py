#print this star pattern.

# input 6
# *
# **
# ***
# ****
# *****
# ******

x = int(input("Enter the number of line: "))

for i in range(x):
    for j in range(i+1):
        print("*",end="")
    print()