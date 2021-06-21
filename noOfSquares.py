#number of squares within a gien range of numbers
#|_sqrt(upperLimit)-sqrt(lowerLimit)_| + 1 if lower limit is a perfect square

from math import floor, sqrt

def main():
    n = int(input())
    while(n):
        n-=1
        a,b = map(int, input().split())
        print(floor(sqrt(b))-floor(sqrt(a)) + (1 if sqrt(a)==int(sqrt(a)) else 0))

if __name__ == "__main__":
    main()