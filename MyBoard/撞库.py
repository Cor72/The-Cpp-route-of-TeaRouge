import random
n, m, q = input().split(' ')
q = int(q)
for x in range(0, q):
    print(random.randint(0, 100))

import random
n = input();
mm = input();
m = int(input());
arr = [i for i in range(1, m + 1)]
random.shuffle(arr)
for x in range(0, m):
    if x != 0:
        print(' ', end = '')
    print(arr[x], end = '')

import random
n, p = input().split(' ')
p = int(p)
print(random.randint(0, p))