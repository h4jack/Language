#write a python program to find the prime factor of a number.

def main():
    pList = []
    try:
        a = int(input("Enter the number: "))
    except:
        print("Invalid Input")
        main()
        exit()
    for i in range(1,a/2):
        if a % i == 0 and isPriime(i):
            pList.append(i)
    if len(pList) == 0:
        print("The Prime factors of {} are {}".format(a,[1,a]))
    else:
        print("The Prime factors of {} are {}".format(a,pList))
        

def isPriime(n):
    if n < 2:
        return False
    if n in (2,3,5,7): 
        return True
    if n % 2 == 0 or n % 3 == 0 or n % 5 == 0 or n % 7 == 0: 
        return False
    for i in range(2,n):
        if n % i == 0:
            return False
    return True

if __name__ == '__main__':
    main()
