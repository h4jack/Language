#write a python program to take input n as number of line and print the following below.
'''
*
**
* *
*  *
*   *
*    *
*     *
********
'''

try:
    a = int(input("Enter the no of line you want: "))
except:
    print("Input Error.")
    main()
    exit()
for i in range(1,a+1):
    for j in range(1,i+1):
        if j == 1 or j == i or i == a:
            print("*",end='')
        else:
            print(" ",end='')
    print("\n",end='')