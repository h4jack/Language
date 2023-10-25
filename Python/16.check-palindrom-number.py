#write a python program to chek number is palidrome or not.

def main():
    try:
        a = int(input("Enter the number: "))
    except:
        print("Invalid Number: ")
        main()
        exit()
    if(isPalindrome(a)):
        print(f'The number {a} is palindrome')
    else:
        print(f'The number {a} is not palindrome')

def isPalindrome(a):
    tmp = a
    n = 0
    while(a > 0):
        n =(n*10) + a%10
        a //= 10
    return n == tmp

if __name__ == '__main__':
    main()