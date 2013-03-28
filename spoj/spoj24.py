#!/usr/bin/python3.2
def main():
    while True:
        line = int(input())
        if 1<= line <= 100:
            break
        else:
            pass
    counter = 0
    while (counter < line):
        while True:
            x = int(input())
            if 1<= x <= 100:
                break
            else:pass
        counterx = 1
        result = 1
        while(counterx <= x):
            result = result * counterx
            counterx = counterx + 1
        counter = counter + 1
        print(result)

if __name__ =="__main__":
    main()
