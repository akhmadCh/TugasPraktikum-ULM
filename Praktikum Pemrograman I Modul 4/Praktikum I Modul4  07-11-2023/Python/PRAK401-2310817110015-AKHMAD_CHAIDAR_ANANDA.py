# input
bil, simbol = input().split()

bil = int(bil) # mengkonversi variabel bilangan menjadi tipe data int

# perulangan
for i in range(1, 50 + 1):
    
    # pengkondisian
    if (i % bil == 0): 
        print(simbol, end=' ')
        continue
    
    # output 
    print(f"{i}", end=' ')