#write a python program to find the gcd and lcm or two number.


def main():
    a = int(input("Enter the first nubmer: "))
    b = int(input("Enter the second nubmer: "))
    print(f"The gcd of {a} and {b} is {gcd(a,b)}")
    print(f"The gcd of {a} and {b} is {lcm(a,b)}")


def gcd(x, y):
    g = y
    while (x > 0):
        g = x
        x = y % x
        y = g
    return g

def lcm(a,b):
    return (a*b)/gcd(a,b);

if __name__ == '__main__':
    main()