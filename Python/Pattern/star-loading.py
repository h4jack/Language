#python program to show loading screen using the star field.

from time import sleep

x = int(input("Enter the number of line: "))

for i in range(x):
    print("*"*i,"_"*(x-i), f"Loading... {(i*100)/x}",end="\r")
    sleep(0.5)
print("*"*x, f"Loaded {(i*100)/x}")