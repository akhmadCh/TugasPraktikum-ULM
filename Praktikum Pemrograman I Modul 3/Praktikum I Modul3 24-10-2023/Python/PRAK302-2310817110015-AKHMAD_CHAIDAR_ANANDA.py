# Input nilai
nilai = int(input())

# Pengkondisian
if nilai >= 80:
    print(f"A")
elif nilai >= 70 and nilai <= 79:
    print(f"B")
elif nilai >= 60 and nilai <= 69:
    print(f"C")
elif nilai >= 50 and nilai <= 59:
    print(f"D")
elif nilai < 50:
    print(f"E")