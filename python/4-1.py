N = int(input())
Data = list(input().split())
x, y = 1, 1
xa, ya = 0, 0
dx=[-1,+1,0,0]
dy=[0,0,-1,+1]
cardinal=['L','R','U','D']

for i in Data: ##Data에 있는 것을 하나씩 확인
    for j in range(len(cardinal)): #0부터 3까지 확인
        if cardinal[j] == i:
            xa=x+dx[j]
            ya=y+dy[j]
        if xa<1 or ya<1 or xa>N or ya>N :
            continue
        x=xa
        y=ya

print(x, y)

##오류
##1.python은 리스트 {}가 아닌 []사용
##2.문자입력시 ""말고 ''써야 입력받은것과 같음
