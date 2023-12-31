#write a python program to find the lcm of two number.

def main():
    a = int(input("Enter the first number: "))
    b = int(input("Enter the second number: "))
    print("The lcm of two number {} and {} is {}".format(a,b,lcm(a,b)))


def gcd(x, y):
    g = y
    while (x > 0):
        g = x
        x = y % x
        y = g
    return g


def lcm(a,b):
    return (a*b)/gcd(a,b)

if __name__ == '__main__':
    main()