# fungsi menghitung perkalian matrix
def perkalian_matrix(n1, n2):
    # kondisi
    if (n1 == n2):
        # input matrix 1 dan matrix 2
        m1 = [int(i) for i in input().split()]
        m2 = [int(j) for j in input().split()]

        print()

        sum = 0
        # perkalian matrix 1 dan matrix 2
        # dan output hasil dari perkalian 
        for i in range(n1 and n2):
            sum = m1[i] * m2[i]
            print(sum, end=' ')
    else:
        print("Jumlah tidak sama")


# input bilangan
n1, n2 = map(int, input().split())

# memanggil fungsi matrix
perkalian_matrix(n1, n2)