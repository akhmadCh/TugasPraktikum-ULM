# input
baris, kelipatan = map(int, input().split())

# deklarasi variabel hasil bernilai nol
hasil = 0

# perulangan
for i in range(1, baris + 1):
    
    # variabel temp akan tetap bernilai nol
    # variabel sementara yang menyimpan hasil penjumlahan dari setiap kelipatan
    temp = 0
    
    # perulangan kedua
    while (i > 0):

        temp += i * kelipatan
        hasil += i * kelipatan

        # kondisi
        if (i == 1):
            print(f"({i} * {kelipatan})", end=' ')
        else:
            print(f"({i} * {kelipatan}) +", end=' ')

        i -= 1
    # output hasil sementara dari setiap penjumlahan
    print(f"= {temp}")

# output hasil dari setiap penjumlahan
print(f"{hasil}")