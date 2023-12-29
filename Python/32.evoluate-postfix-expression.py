#write a python program to evoluate postfix expression.

def main():
    a = input("Enter Postfix Expressioin: ")
    li = strtolist(a)
    print(li)
    print(evoluatePostfixList(li))
    return

def strtolist(str):
    li = []
    str1 = ""
    str.split()
    str += " ";

    for i in str:
        if(i == " "):
            if(isOperator(str1)):
                li.append(str1)
            else:
                li.append(int(str1))
            str1 = ""
        else:
            str1 += i
    return li

def isOperator(str):
    if(str == "+" or str == "-" or str == "*" or str == "/" or str == "^"):
        return 1
    else:
        return 0

def evoluatePostfixList(li):
    while(True):
        j = 0;
        if(len(li) == 1):
            return li[0]
        for i in li:
            if(isOperator(i)):
                break
            j+=1
        li[j-2:j+1] = [doOperation(li[j-2],li[j-1],li[j])]
    # return li[0]

def doOperation(op1,op2,opr):
    match(opr):
        case "+":
            return op1+op2;
        case "-":
            return op1-op2;
        case "*":
            return op1*op2;
        case "/":
            return op1/op2;
        case "^":
            return op1**op2;
        case _:
            return

if __name__ == '__main__':
    main()