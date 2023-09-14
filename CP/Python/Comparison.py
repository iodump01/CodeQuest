#https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V

a,s,b=map(str,input().split())

a1=int(a)
b1=int(b)
if s=='<' and a1<b1:
    print("Right")
elif s=='>' and a1>b1:
    print("Right")
elif s=="=" and a1==b1:
    print("Right")
else:
    print("Wrong")

'''
sample input1:
5 > 4
output1:
Right

sample input2:
5 = 9
output2:
Wrong

sample input3:
4 < 8
output3:
Right
'''
