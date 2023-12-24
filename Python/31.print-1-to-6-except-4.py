#*write a program to print 1 to 6 except 4.

i = 1
while(i < 7):
    if(i == 4):
        i+=1
        continue
    print(i)
    i+=1

# OUTPUT
# PS S:\WorkSpace\Language\Python> py .\31.print-1-to-6-except-4.py
# 1
# 2
# 3
# 5
# 6

#*write a program to print square and cubes of 1 to n.

def square(a):
    return a*a

def cube(a):
    return a*a*a

a = int(input("Enter the number: "))
for i in range(1,a+1):
    print("The Square and Cube of %d is %d and %d"%(i,square(i),cube(i)))

# OUTPUT
# PS S:\WorkSpace\Language\Python> py .\31.print-square-and-cube-1-to-n.py
# Enter the number: 4
# The Square and Cube of 1 is 1 and 1
# The Square and Cube of 2 is 4 and 8
# The Square and Cube of 3 is 9 and 27
# The Square and Cube of 4 is 16 and 64