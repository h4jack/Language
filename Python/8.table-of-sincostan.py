#Using a while loop produce a table sins cosins tangents make a variable x in range or 0 to 10 in steps of 0.2 for each value x print the value x of sin(x) cos(x) tan(x).

def main():
    withoutmath()

def withmath():
    import math
    x = 0
    while x <= 10:
        sin_x = math.sin(x)
        cos_x = math.cos(x)
        tan_x = math.tan(x)
        print(f"x = {x:5.1f}: sin(x) = {sin_x:10.4f}, cos(x) = {cos_x:10.4f}, tan(x) = {tan_x:10.4f}")
        x += 0.2

def withoutmath():
    x = 0
    while x <= 10:
        sin_x = x - (x ** 3) / 6 + (x ** 5) / 120 - (x ** 7) / 5040
        cos_x = 1 - (x ** 2) / 2 + (x ** 4) / 24 - (x ** 6) / 720
        tan_x = sin_x / cos_x
        print(f"x = {x:5.1f}: sin(x) = {sin_x:10.4f}, cos(x) = {cos_x:10.4f}, tan(x) = {tan_x:10.4f}")
        x += 0.2

if __name__ == '__main__':
    main()