#write a program to generate fibonacci series where n is entered by user.
#where first two number of fibonacci series is 0,1.


def main():
    try:
        n = int(input("Enter the number: "))
    except:
        print("Invalid Input.")
        main()
        exit()
    print(f"the fobonacci of series from index 0 to {n}.")
    fibonacci(n)

def fibonacci(n,f1=0,f2=1):
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