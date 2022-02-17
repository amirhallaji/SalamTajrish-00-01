import random

a = [random.randint(1, 100) for i in range(10)]

print(a)
print(a[-1])

print(a[1:5])
print(a[1:5:2])

print(a[0:])

print(a[:4])