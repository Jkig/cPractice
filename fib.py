a = 0
b = 1
# print(a)
for i in range(10):
    inter = a+b
    a = b
    b = inter
    # print(a)
print(a)