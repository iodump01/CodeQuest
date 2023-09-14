#https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C
n=int(input())
num=list(map(int,input().split()))
e=0
o=0
p=0
ne=0
for i in range(n):
    if num[i]<0:
        ne+=1
    elif num[i]>0:
        p+=1
    
    if num[i]%2==0:
        e+=1
    else:
        o+=1

print("Even: ",e)
print("Odd: ",o)
print("Positive: ",p)
print("Negative: ",ne)

'''
sample input1:
5
-5 0 -3 -4 12 
output1:
Even:  3
Odd:  2
Positive:  1
Negative:  3
'''
