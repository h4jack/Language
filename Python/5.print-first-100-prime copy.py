#write a python program to print the first 100 prime number.

def main():
    print("Printing Prime Numbers")
    count = 0
    a = 0
    while(count != 100):
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