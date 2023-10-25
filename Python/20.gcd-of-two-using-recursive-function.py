#write a python recursive function to find the gcd of two number.

def main():
    try:
        a = int(input("Enter the first number: "))
        b = int(input("Enter the second number: "))
    except:
        print("Invalid Input.")
        main()
        exit()

    print(f"The Gcd of two number {a} and {b} is {gcd(a,b,a)}")


def gcd(a,b,n):
    if a % n == 0 and b % n == 0:
        return n
    else:
        return gcd(a,b,n-1)

    
if __name__ == '__main__':
    main()