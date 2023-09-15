<<<<<<<< HEAD:CP/Python/Range_sum.py
#https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/D

t=int(input())
for i in range(t):
    l,r=map(int,input().split())
    if r>l:
        sumation=(r*(r+1)//2)-(l*(l+1)//2)
        print(sumation+l)
    else:
        sumation=(l*(l+1)//2)-(r*(r+1)//2)
        print(sumation+r)

'''
sample input:
4
3 6
2 11
4 16
7 17

output:
18
65
130
132
'''
========
#https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/D

t=int(input())
for i in range(t):
    l,r=map(int,input().split())
    if r>l:
        sumation=(r*(r+1)//2)-(l*(l+1)//2)
        print(sumation+l)
    else:
        sumation=(l*(l+1)//2)-(r*(r+1)//2)
        print(sumation+r)

'''
sample input:
4
3 6
2 11
4 16
7 17

output:
18
65
130
132
'''
>>>>>>>> 1a54a43 (Organized files java and python):CP/Python/Week 1/Range_sum.py
