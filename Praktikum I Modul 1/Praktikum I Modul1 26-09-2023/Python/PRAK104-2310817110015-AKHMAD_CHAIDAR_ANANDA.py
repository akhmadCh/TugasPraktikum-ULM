hargaSepatuA = 400000
hargaSepatuB = 350000

diskonSepatuA = 0.13
diskonSepatuB = 0.21

hasil_potonganA = hargaSepatuA * diskonSepatuA
hasil_potonganB = hargaSepatuB * diskonSepatuB

hasilA = int(hargaSepatuA - hasil_potonganA)
hasilB = int(hargaSepatuB - hasil_potonganB)

print("Harga sepatu adalah",hargaSepatuA)
print("Harga sepatu adalah",hargaSepatuB)
print("Sepatu mendapat diskon 13%","sehingga harganya menjadi",hasilA)
print("Sepatu mendapat diskon 21%","sehingga harganya menjadi",hasilB)