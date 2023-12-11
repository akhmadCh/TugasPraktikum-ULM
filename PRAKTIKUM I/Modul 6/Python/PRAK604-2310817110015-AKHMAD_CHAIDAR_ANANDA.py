# mendefinisikan total string dan maksimal string
TOTAL_STRINGS = 2
MAX_STRINGS = 50

# deklarasi variabel
pesan = ["", ""]
hitung_bintang = 0
hitung_pagar = 0
ubah_pesan = [""]
pesan_baru = [""]

# input
for i in range(TOTAL_STRINGS):
    pesan[i] = input()

# hitung panjang dari kedua pesan
# dan mengkonversikannya ke tipe data integer
size1 = int(len(pesan[0]))
size2 = int(len(pesan[1]))

# kondisi dan perulangan
if size1 != size2:
    print("Panjang kalimat berbeda, pesan palsu")
elif size1 == size2:
    for i in range(size1 and size2):
        if pesan[0][i] == ' ' and pesan[1][i] == ' ':
            pesan_baru.append(' ')
            #ubah_pesan[i] == ' '
        elif pesan[0][i] == pesan[1][i]:
            pesan_baru.append('*')
            #ubah_pesan[i] == '*'
            hitung_bintang += 1
        else:
            pesan_baru.append('#')
            #ubah_pesan[i] == '#'
            hitung_pagar += 1

    # menggabungkan list pesan baru menjadi string
    print(''.join(pesan_baru))
    print(f"* = {hitung_bintang}")
    print(f"# = {hitung_pagar}")

    if hitung_bintang >= hitung_pagar:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")