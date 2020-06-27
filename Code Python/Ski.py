n = int(input())
m = int(input())
q = int(input())
for i in range(0,q,1) :
  now = n+1;
  mark = 0
  for j in range(0,m,1) :
    ski = int(input())
    if ski == 1 :
      now+=1
    else :
      now-=1
    if now>=0 or now>=2*n+1 :
      mark=1
  if mark==1 :
    print("0")
  else :
    print("1")
