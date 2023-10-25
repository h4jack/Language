#write a python program to convert every string char into a single list element .str to list.

def main():
    a = input("Enter your string: ")
    print(f"Your list after converting the string {a} is {strToList(a)}")

def strToList(str):
    list1 = []
    for i in str:
        list1.append(i)
    return list1

if __name__ == '__main__':
    main()