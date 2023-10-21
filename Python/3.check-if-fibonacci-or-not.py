#write a python program to check a number is fibonacci or not.

def main():
    try:
        a = int(input("Enter the Number: "))
    except:
        print("Input Error")
        main()
        exit()
    if(isFibo(a)[0]):
        print(f'The number {a} is fibonacci number and its index in fibonacci is {isFibo(a)[1]}')
    else:
        print(f'The number {a} is not a fibonacci number')

def isFibo(n):
    f1 = 0
    f2 = 1
    tmp = 0
    count = 1
    while(f2 <= n):
        if f2 == n:
            return True,count
        else:
            tmp = f1
            f1 = f2
            f2 = tmp + f2
            count+=1
    return False,

if __name__ == '__main__':
    main()