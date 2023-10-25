#write a python program to find the lcm of two number.

def main():
    a = int(input("Enter the first number: "))
    b = int(input("Enter the second number: "))
    print("The lcm of two number {} and {} is {}".format(a,b,lcm(a,b)))


def gcd(a,b):
    gcd = 0
    for i in range(2,a):
        if a % i == 0 and b % i == 0:
            gcd = i
    return gcd


def lcm(a,b):
    return (a*b)/gcd(a,b)

if __name__ == '__main__':
    main()