#write a python program to print the calsius to fahrenheit table from 0 to 100 calsius.

def main():
    print("| Calsius => Fahrenheit |")
    for i in range(0,101):
        print("| %-7d => %10.2f |"%(i,ctof(i)))

def ftoc(f):
    return (f-32)*5/9

def ctof(c):
    return c*(9/5)+32

if __name__ == '__main__':
    main()