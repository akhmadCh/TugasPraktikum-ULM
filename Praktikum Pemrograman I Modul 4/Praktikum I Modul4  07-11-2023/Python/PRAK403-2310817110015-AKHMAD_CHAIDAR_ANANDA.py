# input 
a, b = map(int, input().split())

# deklarasi variabel perulangan
# untuk memudahkan membaca variabel loop
i = a
j = b

# kondisi jika a kurang dari b
if (a < b):
    # nested loops
    for i in range(a, b):
        while j >= a:
            print(f"{i} {j} - ", end=' ')
            i += 1
            j -= 1
            # kondisi jika i bernilai b dan j bernilai a, maka loop akan berhenti 
            if (i == b and j == a):
                print(f"{i} {j}")
                i += 1
                j -= 1
                

elif (a > b):
    # nested loop
    while i >= b:
        for j in range(b, a):
            print(f"{i} {j} - ", end=' ')
            i -= 1
            j += 1
        # kondisi jika i bernilai b dan j bernilai a, maka loop akan berhenti 
        if (i == b and j == a):
            print(f"{i} {j}")
            i -= 1
            j += 1