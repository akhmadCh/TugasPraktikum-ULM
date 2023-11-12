# input
bil = int(input())

# perulangan untuk bilangan ganjil
for i in range(1, bil + 1):
    # kondisi, jika input bilangan ganjil
    if (i % 2 == 1):
        print(f"{i}", end=' ')

print("")

# perulangan untuk bilangan genap
for j in reversed(range(1, bil + 1)):
    # kondisi, jika input bilangan genap
    if (j % 2 == 0):
        print(f"{j}", end=' ')