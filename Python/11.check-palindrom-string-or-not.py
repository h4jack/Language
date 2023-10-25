#write a python program to check a string is palindrom or not.


def main():
    a = input("Enter your string: ")
    if isPalindrome(a):
        print(f"the string {a} is Palindrome.")
    else:
        print(f"the string {a} is not Palindrome.")



def isPalindrome(str):
    l = len(str)/2
    i = 0
    while(i < l):
        if(str[i] != str[(i+1)*-1]):
            return False
        i+=1
    else:
        return True


if __name__ == '__main__':
    main()