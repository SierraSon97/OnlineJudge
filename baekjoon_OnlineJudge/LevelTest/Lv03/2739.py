import sys

N = int(sys.stdin.readline().rstrip())

for i in range(1, 10):
    print(N, '*', i ,'=', N*i)
