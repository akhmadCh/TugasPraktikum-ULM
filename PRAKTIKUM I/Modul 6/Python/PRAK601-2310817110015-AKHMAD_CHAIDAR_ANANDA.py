# fungsi untuk menampilkan matrix
def tampilkan_matrix(baris, kolom):
    # input matrix
    a = [int(i) for i in input().split()]
    
    print()
    # output matrix
    for i in range(baris * kolom):
        print(a[i], end=' ')
        # kondisi jika index terakhir dari matrix
        # mencapai kolom terakhir dari baris matrix
        if (i + 1) % kolom == 0: print()

# input
baris, kolom = map(int, input().split())

# pemanggilan fungsi matrix
tampilkan_matrix(baris, kolom)