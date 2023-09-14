#https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W

a,s,b,q,c=map(str,input().split())
a1=int(a)
b1=int(b)
c1=int(c)

if s=='+':
    if a1+b1==c1:
        print("Yes")
    else:
        print(a1+b1)

elif s=='-':
    if a1-b1==c1:
        print("Yes")
    else:
        print(a1-b1)

else:
    if a1*b1==c1:
        print("Yes")
    else:
        print(a1*b1)

'''
sample input1:
5 + 10 = 15
output:
Yes

sample input2:
3 * 6 = 19
output2:
18
'''
