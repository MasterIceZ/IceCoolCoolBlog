n = int(input())
m = int(input())
k = int(input())
A = int(input())
cnt = 0
for i in range(n,m+1,1) :
  cnt += k
  k += A
if cnt >= 1234 :
  print("Yes")
else :
  print(1234-cnt)
