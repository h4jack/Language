#write a python program to calculate the following operation 1+1/1!+1/2!+1/3!+....+1/n!
# take the n as input from user.
# here the '!' mean factorial of the number.


def main():
    try:
        a = int(input("Enter the number: "))
    except:
        print("Invalid Input.")
        main()
        exit()
    print("The output of the series is : ",series(a))


def series(n):
    sum = 1
    for i in range(1,n+1):
        sum += 1/fact(i)
    return sum


def fact(n):
    fact = 1
    for i in range(2,n+1):
        fact *= i
    return fact

if __name__ == '__main__':
    main()