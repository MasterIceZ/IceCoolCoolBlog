a = []
n = int(input())
for i in range(0,n,1) :
  num = int(input())
  a[num] += 1
mark = 1
for i in range(0,2020,1) :
  if a[2020+i]==1 and mark!=1 :
    mark = 1
    print(2020+i)
  elif a[2020-i]==1 and mark!=1 :
    mark = 1
    print(2020-i)
if mark!=1 :
  print("NO")
