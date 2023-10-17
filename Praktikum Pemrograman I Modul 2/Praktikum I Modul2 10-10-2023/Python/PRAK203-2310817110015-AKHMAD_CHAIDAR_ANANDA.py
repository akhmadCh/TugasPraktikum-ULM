a, b, i, j, x, y = map(int, input().split())
hasil = float( (a - b) * (i / j) - (x + y) )

print(format(hasil, '.3f'))