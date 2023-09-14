#https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Z

import math
a,b,c,d=map(int,input().split())
if b*math.log(a)>d*math.log(c):
    print("YES")
else:
    print("NO")

'''
sample input1:
3 2 5 4
output1:
No

sample input2:
5 2 4 2
output2:
Yes
'''
