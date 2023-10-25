#write a python program to check a number is prime number or not.

def main():
    try:
        a = int(input("Enter the number: "))
    except:
        print("Invalid Input.")
        main()
        exit()
    if isPrime(a):
        print(f'The number {a} is a Prime.')
    else:
        print(f'The number {a} is not a Prime number.')

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