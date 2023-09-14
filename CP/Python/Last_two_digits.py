#https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y

a,b,c,d=map(int,input().split())
mul=a*b*c*d
dig1=mul%10
mul=mul//10
dig2=mul%10
s=str(dig2)+str(dig1)
print(s)

'''
sample input1:
5 7 2 4
output1:
80

sample input2:
3 9 9 9
output2:
87
'''
