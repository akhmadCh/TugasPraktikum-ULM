# perulangan
while True:
    # pilihan
    print("Pilih Program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")
    # input pilihan
    pil = int(input("Masukkan Pilihan : "))

    # kondisi jika input == 5 akan keluar dari perulangan 
    if (pil == 5): 
        print("Terimakasih, telah menggunakan kalkulator Akhmad Chaidar Ananda")
        break
    # kondisi jika input > 5 akan kembali melakukan perulangan dan meminta pengguna menginputkan pilihan
    elif (pil > 5): 
        print("Input anda salah, silahkan coba lagi") 
        continue
    # input nilai a dan b
    a = float(input("Masukkan nilai pertama : "))
    b = float(input("Masukkan nilai kedua   : "))

    # kondisi switch case
    match pil:
        # pilihan == 1
        case 1:
            hasil = a + b
            print(f"Hasil pertambahan antara {a:.2f} dengan {b:.2f} adalah {hasil:.2f}")
            
        # pilihan == 2
        case 2:
            hasil = a - b
            print(f"Hasil pengurangan antara {a:.2f} dengan {b:.2f} adalah {hasil:.2f}")
            
        # pilihan == 3
        case 3:
            hasil = a * b
            print(f"Hasil perkalian antara {a:.2f} dengan {b:.2f} adalah {hasil:.2f}")
            
        # pilihan == 4
        case 4:
            hasil = a / b
            print(f"Hasil pembagian antara {a:.2f} dengan {b:.2f} adalah {hasil:.2f}")