#write a program to compare three number and print the largest.

def main():
    try:
        a = int(input("Enter the first number: "))
        b = int(input("Enter the second number: "))
        c = int(input("Enter the third number: "))
    except:
        print("Invalid Input")
        main()
        exit()
    print(f'The largest of three number {a,b,c} is {max(a,b,c)}')    

def max(a,b,c):
    if a < b and a < c:
        return c
    elif a < b:
        return b
    else:
        return a

if __name__ == '__main__':
    main()