# Input
a, b = map(int, input().split())

# Pengkondisian
if a > b:
    temp = a # Temp merupakan variabel sementara yang meyimpan nilai a
    a = b
    b = temp 
    print(f"{a:d} {b:d}") # Menggunakan format string
else:
    print(f"{a:d} {b:d}") # Menggunakan format string