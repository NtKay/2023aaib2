N = int (input('½Ð¿é¤JN:'))

def func(n):
  if n==1: return 1
  return n * func(n-1)
ans = func(N)
print(ans)
