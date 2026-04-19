# 2025년 4월 6일 17:05:11
# 틀렸습니다
# KB
# ms
#도움용 제출

def dst(cor1,cor2):
  return (cor1[0]-cor2[0])**2+(cor1[1]-cor2[1])**2

cor=[]
for i in range(3):
  cor.append(list(map(int,input().split())))
lst=[]
lst.append(dst(cor[0],cor[1]))
lst.append(dst(cor[0],cor[2]))
lst.append(dst(cor[1],cor[2]))
lst.sort()
if lst[2]**0.5>lst[0]**0.5+lst[1]**0.5 or abs(lst[2]**0.5-lst[0]**0.5-lst[1]**0.5)<1e-6:print('X')
elif lst[0]==lst[1]==lst[2]:print('JungTriangle')
elif lst[0]==lst[1]:
  if lst[2]==lst[0]*2:print('Jikkak2Triangle')
  elif lst[2]>lst[0]*2:print('Dunkak2Triangle')
  else:print('Yeahkak2Triangle')
else:
  if lst[2]>lst[0]+lst[1]:print('DunkakTriangle')
  elif lst[2]==lst[0]+lst[1]:print('JikkakTriangle')
  else:print('YeahkakTriangle')