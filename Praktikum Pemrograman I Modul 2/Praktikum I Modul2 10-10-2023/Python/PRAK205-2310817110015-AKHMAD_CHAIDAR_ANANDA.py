import math

tinggi, sisi_miring = map(int, input().split())

alas = math.sqrt((sisi_miring*sisi_miring) - (tinggi*tinggi))
keliling = alas + tinggi + sisi_miring
luas = 0.5 * alas * tinggi

print("Alas     =",format(alas,'.0f'),'cm')
print("Tinggi   =",format(tinggi,'.0f'),'cm')
print("Keliling =",format(keliling,'.0f'),'cm')
print("luas     =",format(luas,'.0f'),'cm^2')