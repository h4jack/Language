#write a python program to check a number is armstrong number or not.

def main():
    a = input("Enter the number: ")
    if isArmstrong(a):
        print(f'The no {a} is a Armstrong number.')
    else:
        print(f'The no {a} is not a Armstrong number.')

def isArmstrong(a):
    l = len(a)
    tmp = 0
    for i in a:
        tmp += int(i) ** l
    return (tmp == int(a))

if __name__ == '__main__':
    main()

# OUTPUT
# PS S:\WorkSpace> cd .\Language\Python\
# PS S:\WorkSpace\Language\Python> py .\18.armstrong-number-or-not.py
# Enter the number: 153
# The no 153 is a Armstrong number.
# PS S:\WorkSpace\Language\Python> py .\18.armstrong-number-or-not.py
# Enter the number: 470
# The no 470 is not a Armstrong number.
# PS S:\WorkSpace\Language\Python> 