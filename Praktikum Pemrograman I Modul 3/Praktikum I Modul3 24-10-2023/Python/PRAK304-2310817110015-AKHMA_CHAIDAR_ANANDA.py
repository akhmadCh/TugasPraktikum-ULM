# Input nilai
a = int(input())

# Pengkondisian
if a == 0:
    print(f"Nol")
elif a >= 1 and a < 10:
    print(f"Satuan")
elif a >= 11 and a <= 19:
    print(f"Belasan")
elif a >= 10 and a <= 99:
    print(f"Puluhan")
elif a > 99:
    print(f"Anda Menginput Melebihi Limit Bilangan")