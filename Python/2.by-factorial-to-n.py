# write a python program to evaluate the following series.
# 1+2/2!+3/3!+n/n! (Here the '!' mean the factorial of the number)

def main():
    a = int(input("Enter the number: "))
    print(f'The output of the series is {series(a)}')

def fact(n):
    if n == 1:
        return 1
    else:
        return n * fact(n-1)

def series(n):
    if n == 1:
        return n/fact(n)
    else:
        return (n/fact(n)) + (series(n-1))

    # x = 1
    # for i in range(2, n+1):
    #     x += i/fact(i)
    # return x

if __name__ == '__main__':
    main()