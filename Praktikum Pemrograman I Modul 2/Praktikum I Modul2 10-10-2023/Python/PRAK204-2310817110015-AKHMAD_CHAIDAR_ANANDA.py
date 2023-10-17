import math
# Input
r,tinggi = map(int, input().split())
r_2 = float(math.pow(r,2))
PI = float(22 / 7) 

# Rumus
volume = PI * (r_2 * tinggi)
luas = (2 * PI * r_2) + (2 * PI * r * tinggi)
keliling = (2 * PI * r)
# Output
print("\nVolume =",format(volume, '.2f'))
print("Luas     =",format(luas, '.2f'))
print("Keliling =",format(keliling, '.2f'))