n,m,k=map(int, input().split())
data = list(map(int, input().split()))
data.sort()
first=data[n-1]
second=data[n-2]
print(first)
print(second)

firstc=m-m//(k+1) #가장큰수가더해지는 횟수
print(firstc)
seconds=m//(k+1) #두번째 수가 더해지는 횟수
print(seconds)
result = 0
result +=first*(firstc)
result +=second*(seconds)
print(result)
