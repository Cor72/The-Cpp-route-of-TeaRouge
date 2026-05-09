import math

r = float(input())
outer = r + 3

fencet = 2 * math.pi * outer * 35
concretet = math.pi * (outer**2 - r**2) * 20

print(fencet)
print(concretet)