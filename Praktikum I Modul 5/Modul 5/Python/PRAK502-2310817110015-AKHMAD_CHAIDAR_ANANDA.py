# fungsi
def mutlak(angka):
    # menggunakan fungsi abs()
    nilai_mutlak = abs(angka)

    return nilai_mutlak

#fungsi
def hitung(nilai1, nilai2):
    hasil = nilai1 - nilai2

    return mutlak(hasil)

# input 
a, c, b, d = map(int, input().split())

hasil = hitung(a, b) + hitung(c, d)
# output
print(mutlak(hasil))