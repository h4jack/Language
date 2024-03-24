
def main():
    a = int(input("Enter your range: "))
    n = 2
    print("The first {0} perfect numbers are : ".format(a))
    print(6)
    b = 1
    while(b < a):
        n = n*4
        print(sum(n-1))
        b+=1

def sum(n):
    return (n*(n+1))//2;

if __name__ == '__main__':
    main()