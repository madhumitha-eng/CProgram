x1 = float(input("Enter x1: "))
y1 = float(input("Enter y1: "))
x2 = float(input("Enter x2: "))
y2 = float(input("Enter y2: "))

if x2 - x1 == 0:
    print("Vertical line")
else:
    slope = (y2 - y1) / (x2 - x1)
    print("Slope =", slope)

    if slope > 0:
        print("Land rises")
    elif slope < 0:
        print("Land descends")
    else:
        print("Land is horizontal")
