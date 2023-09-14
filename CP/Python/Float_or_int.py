#https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U

a=float(input())

b=int(a)
if a==b:
    print("int",b)
else:
    print("float",b,"{:.3f}".format(a-b))

'''
sample input1:
234.000
output1:
int 234

sample input2:
5334.578
output2:
float 5334 0.578
'''
