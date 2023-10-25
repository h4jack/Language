#write a python program to take two number form user and one operator as a input and then show the result.



def main():
    a = input("Enter the number: ")
    oplist = ['+','-','/','*','**','%','^']
    list1 = []
    a = a.replace(' ','')
    a = a.replace('**','^')
    temp = ''
    op = ''
    for i in a:
        if i in oplist:
            op = i
            list1.append(temp)
            temp = ''
        else:
            temp += i
    list1.append(temp)
    print(temp)
    print(a)
    print(len(list1))
    if len(list1) != 2:
        print("Invalid Input.")
        main()
        exit()

    print(f"the output of your following input {a} is {calop(list1[0],list1[1],op)}")
    

def calop(a,b,op):
    a = float(a)
    b = float(b)
    match op:
        case '+':
            return a+b
        case '-':
            return a-b
        case '*':
            return a*b
        case '/':
            return a/b
        case '%':
            return a%b
        case '^':
            return a**b
        
        



if __name__ == '__main__':
    main()