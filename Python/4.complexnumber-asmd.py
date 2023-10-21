#write a menu driven program to calculate the sum, sub, mul, div of two complex number.

def main():
    while(True):
        l1 = ['1','2','3','4']
        print("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit")
        o = input("Enter your choice: ")
        if o not in l1:
            if o == '5':
                exit()
            print("Wrong input")
            main()
            exit()
        a1 = int(input("Enter real number of the first number: "))
        b1 = int(input("Enter imaginery of the first number: "))
        a2 = int(input("Enter real number of the second number: "))
        b2 = int(input("Enter imaginery of the second number: "))
        a = complex(a1,b1)
        b = complex(a2,b2)
        match(o):
            case '1':
                print(f"The Addition of {a} and {b} is {cal(a,b,o)}")
            case '2':
                print(f"The Subtractioin of {a} and {b} is {cal(a,b,o)}")
            case '3':
                print(f"The Multiplicatioin of {a} and {b} is {cal(a,b,o)}")
            case '4':
                print(f"The Divisioin of {a} and {b} is {cal(a,b,o)}")

def cal(a,b,o):
    match(o):
        case '1':
            return a+b
        case '2':
            return a-b
        case '3':
            return a*b
        case '4':
            return a/b


if __name__ == '__main__':
    main()