n = int(input())
a = []
cnt = 0
for i in range(0,n,1) :
  num = int(input())
  a.append(num)
f = int(input())
for i in range(0,n,1) :
  if a[i]==f and cnt!=1:
    print("Yes")
    cnt+=1
if cnt==0 :
  print("No")
