def main():
    a = input("Enter the number")
    a = replaceAll(a)
    if checkexp(a):
        return
    print(str_to_list(a))
    print(float('1341.432')+100)
    return

def checkexp(str):
    j = 0
    for i in str:
        j += 1
        if isOperator(i):
            if str[j] != '(' or str[j] != '-':
                return 0
        elif not isNumber(i):
            return 0
    return 1

def str_to_list(str):
    li = []
    str1 = ''
    str.strip()
    j = 0
    for i in str:
        j += 1
        if isNumber(i):
            str1+=i
        elif isOperator(i):
            if str1 != '':
                li.append(float(str1))
                str1 = ''
            if(i == '-'):
                if(str[j-2] == '('):
                    str1 = '-'
            else:
                li.append(i)
    if(str1 != ''):
        li.append(float(str1))
    return li

def isNumber(str):
    li1 = ['0','1','2','3','4','5','6','7','8','9','.']
    if str in li1:
        return 1
    return 0

def isOperator(str):
    li1 = ['(',')','+','-','*','/','^']
    if str in li1:
        return 1
    return 0

if __name__ == '__main__':
    main()