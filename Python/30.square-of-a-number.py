#*write a program to find the square of a number.

a = int(input("Enter the Number: "))
print("The Square of the Number is",(a*a))

# OUTPUT
# PS S:\WorkSpace\Language\Python> py .\30.square-of-a-number.py
# Enter the Number: 4
# The Square of the Number is 16

#*write a program to find the length of a string

st1 = input("Enter your string: ")
print(f"The length of your string \"{st1}\" is {len(st1)}")

# OUTPUT
# PS S:\WorkSpace\Language\Python> py .\31.length-of-a-string.py
# Enter your string: this is me
# The length of your string "this is me" is 10

#*Write a Function to Add Two Numbers.

def add_two_num(a,b):
    return (a+b)

a = int(input("Enter the first Number: "))
b = int(input("Enter the Second Number: "))
print("The Sum of %d and %d is %d"%(a,b,add_two_num(a,b)))

# OUTPUT
# PS S:\WorkSpace\Language\Python> py .\32.sum-of-two-number.py
# Enter the first Number: 12
# Enter the Second Number: 23
# The Sum of 12 and 23 is 35

#*Write a Function to find sum of 1 to N.

def sum_of_n(n):
    return (n*(n+1))/2

n = int(input("Enter the Number: "))
print("The sum of all number from 1 to %d is %d"%(n,sum_of_n(n)))

# OUTPUT
# PS S:\WorkSpace\Language\Python> py .\33.sum-of-1-to-n.py
# Enter the Number: 11
# The sum of all number from 1 to 11 is 66