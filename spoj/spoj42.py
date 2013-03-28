def main():
    while True:
        a = int(input())
        if a <= 10000:
            break
        else:pass
    counter = 0
    while counter < a :
        var1, var2 = input().split()
        var1, var2 = [(x) for x in [var1, var2]]
        x = int("".join(reversed(var1)).strip("0"))
        y = int("".join(reversed(var2)).strip("0"))
        z = str(x + y)
        result = "".join(reversed(z))
        counter = counter + 1
        print(result.strip("0"))


if __name__ =="__main__":
    main()
