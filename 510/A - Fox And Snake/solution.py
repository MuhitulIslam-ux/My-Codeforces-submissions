n, m = (int(x) for x in input().split())
for i in range (1, n+1):
    if i%2 != 0:
        for j in range(1, m+1):
            print('#', end = '')
        print()
    elif i%2 == 0 and i/2 % 2 != 0:
        for j in range(1, m):
            print('.', end = '')
        print('#')
    else:
        print('#', end = '')
        for j in range(2,m+1):
            print('.', end = '')
        print()