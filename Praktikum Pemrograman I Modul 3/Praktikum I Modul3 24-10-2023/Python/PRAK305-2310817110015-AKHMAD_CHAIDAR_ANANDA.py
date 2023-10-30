# Input, sebuah bilangan yang merepresentasikan detik
detik = int(input())

# Konversi detik ke hari
hari = int(detik / 86400)
# Menghitung sisa bagi dari hari
detik -= 86400 * hari

# Konversi detik ke jam
jam = int(detik / 3600)
# Menghitung sisa bagi dari jam
detik -= 3600 * jam

# Konversi detik ke menit
menit = int(detik / 60)
# Menghitung sisa bagi dari menit
detik -= 60 * menit

# Pengkondisian
if hari == 0:
    print(f"{jam:02d}:{menit:02d}:{detik:02d}") # Format string
else:
    print(f"{hari:d} hari {jam:02d}:{menit:02d}:{detik:02d}") # Format string