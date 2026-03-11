# 读取一行输入，如 "1 2 3"
line = input()

# 拆分并转换为整数列表 [1, 2, 3]
nums = list(map(int, line.split()))

# 计算总和
result = 0
for x in nums:
    result += x

# 打印总和，而不是最后一个数 x
print(result)