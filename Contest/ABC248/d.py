N = int(input())

A = list(map(int, input().split()))

Q = int(input())

for _ in range(Q):
    l, r, x = map(int, input().split())
    print(A[l-1:r].count(x))