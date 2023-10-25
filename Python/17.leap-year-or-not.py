#write a python program to check a year is leap year or not.

def main():
    try:
        a = int(input("Enter the year: "))
    except:
        print("Invalid Input")
        main()
        exit()
    if(isLeapYear(a)):
        print(f"the year {a} is a leapyear.")
    else:
        print(f"the year {a} is not a leapyear.")

def isLeapYear(a):
    if a % 100 == 0:
        return a % 400 == 0
    else:
        return a % 4 == 0

if __name__ == '__main__':
    main()