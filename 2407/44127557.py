# 2022년 6월 3일 20:29:10
# 맞았습니다!!
# 30840KB
# 76ms
x = [1]

for i in range(1, 101):
    x.append(x[i-1] * i)

a, b = input().split(" ")

print("{0}".format(x[int(a)]//x[int(b)]//x[int(a)-int(b)]))
