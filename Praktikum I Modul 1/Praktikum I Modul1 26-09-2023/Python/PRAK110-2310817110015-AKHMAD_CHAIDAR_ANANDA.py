import math

alas = 5
tinggi = 12

jumlahAlasTinggi = alas + tinggi

sisi_miring = int(math.sqrt((alas*alas) + (tinggi*tinggi)))

keliling = int(jumlahAlasTinggi + sisi_miring)

luas = int(0.5 * alas * tinggi)

print("Diketahui :")
print("Alas =",alas,"cm")
print("Tinggi =",tinggi,'cm\n')

print("Jawab :")
print("Sisi A =",alas,"cm")
print("Sisi B =",tinggi,"cm")
print("Sisi C =",sisi_miring,"cm")
print("Keliling =",keliling,"cm")
print("Luas =",luas,"cm")