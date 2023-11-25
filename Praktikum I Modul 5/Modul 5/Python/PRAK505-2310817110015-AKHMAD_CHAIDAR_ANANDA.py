# fungsi
def Biodata(thnLahir, Nama, asal):
    tahun_sekarang = 2023
    umur = int(tahun_sekarang - thnLahir)

    print(f"Perkenalkan Nama Saya : {Nama:s}")
    print(f"Umur Saya : {umur:d}")
    print(f"Saya Adalah Angkatan : {tahun_sekarang:d}")
    print(f"Asal Saya Dari : {asal:s}")

# input
tahun_lahir = int(input())
Namaku = input("")
Asal = input("")

# memanggil fungsi
Biodata(tahun_lahir, Namaku, Asal)