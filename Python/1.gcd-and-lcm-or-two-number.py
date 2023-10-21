#write a python program to find the gcd and lcm or two number.


def main():
    a = int(input("Enter the first nubmer: "))
    b = int(input("Enter the second nubmer: "))
    print(f"The gcd of {a} and {b} is {gcd(a,b)}")
    print(f"The gcd of {a} and {b} is {lcm(a,b)}")


def gcd(a,b):
    gcd = None
    for i in range(2,a):
        if a % i == 0 and b % i == 0:
            gcd = i
    return gcd

def lcm(a,b):
    return (a*b)/gcd(a,b);

if __name__ == '__main__':
    main()