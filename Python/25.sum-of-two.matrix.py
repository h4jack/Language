#write a python program to print the sum of two matrix. where element of matrix are entered by user.

def main():
    m = int(input("Enter the height(m/row) of the matrix: "))
    n = int(input("Enter the width(n/column) of the matrix: "))
    mat1 = []
    mat2 = []
    
    tmp = []
    for i in range(m):
        for j in range(n):
            tmp.append(int(input(f'Enter the index [{i}][{j}] element: ')))
        mat1.append(tmp)
        tmp = []

    tmp = []
    for i in range(m):
        for j in range(n):
            tmp.append(int(input(f'Enter the index [{i}][{j}] element: ')))
        mat2.append(tmp)
        tmp = []
     
    result = []
    for i in range(m):
        result.append(mat1[i] + mat2[i])
    i = 0
    while(i < m):
        print(mat1[i] , ' + ' , mat2[i] , ' = ' , result[i])
        i+=1

    # for i in range(m):
    #     print(mat1[i] , ' + ' , mat2[i] , ' = ' , result[i])

if __name__ == '__main__':
    main()