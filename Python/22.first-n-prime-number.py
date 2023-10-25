#write a python program to print the first n prime number where n is entered by user.

def main():
    try:
        n = int(input("Enter the Number: "))
    except:
        print("Invalid Number: ")
        main()
        exit()
    count = 0
    a = 0
    while(count != n):
        if(isPrime(a)):
            print(a)
            count += 1
        a += 1

def isPrime(n):
    if n < 2:
        return False
    if n in (2,3,5,7): 
        return True
    if n % 2 == 0 or n % 3 == 0 or n % 5 == 0 or n % 7 == 0: 
        return False
    for i in range(3,n,2):
        if n % i == 0:
            return False
    return True


if __name__ == '__main__':
    main()