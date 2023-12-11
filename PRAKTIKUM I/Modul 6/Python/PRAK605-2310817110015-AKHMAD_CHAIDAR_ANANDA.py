import numpy as np

def perkalian_matriks(ordo):    
    # Matriks A
    print("Matriks A")
    # deklarasi list input matriks A
    input_matriksA = []
    # input setiap baris pada matriks A
    for i in range(ordo):
        baris = [int(i) for i in input().split()]
        # menambahkan setiap elemen nilai ke dalam list input matriks
        input_matriksA.append(baris)

    # mengubah elemen nilai list input matriks menjadi array numpy 2D 
    matriksA = np.array(input_matriksA)

    # Matriks B
    print("Matriks B")
    # deklarasi list input matriks B
    input_matriksB = []
    # input setiap baris pada matriks B
    for i in range(ordo):
        baris = [int(i) for i in input().split()]
        # menambahkan setiap elemen nilai ke dalam list input matriks
        input_matriksB.append(baris)

    # mengubah elemen nilai list input matriks menjadi array numpy 2D
    matriksB = np.array(input_matriksB)

    # membuat matriks berisi angka nol dengan baris dan kolom = ordo menggunakan fungsi np.zeros
    # untuk menyimpan nilai perkalian dari matriks A dan matriks B
    hasil_matriks = np.zeros((ordo, ordo), dtype=int)
    print()
    # perkalian dua buah matriks
    for i in range(ordo):
        for j in range(ordo):
            for k in range(ordo):
                hasil_matriks[i][j] += matriksA[i][k] * matriksB[k][j]

    # output hasil perkalian dari dua buah matriks
    for i in range(ordo):
        for j in range(ordo):
            print(hasil_matriks[i][j], end=' ')
        print()

# input ordo
ordo = int(input())

perkalian_matriks(ordo)