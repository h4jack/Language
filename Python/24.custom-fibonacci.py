#write a python program where first two number or fibonacci is entered by user and print n term or fibonacci.

def main():
    f1 = int(input("Enter the First index of fibonacci: "))
    f2 = int(input("Enter the Second index of fibonacci: "))
    n = int(input("Enter the 'n' of Fibonacci: "))
    fibonacci(f1,f2,n)

def fibonacci(f1,f2,n):
    temp = 0
    count = 2
    print("Index => Value")
    print("%-5d => %5d"%(0,f1))
    print("%-5d => %5d"%(1,f2))
    while(count != n):
        temp = f1 + f2
        f1 = f2
        f2 = temp
        print("%-5d => %5d"%(count,f2))
        count+=1
    return f2


if __name__ == '__main__':
    main()