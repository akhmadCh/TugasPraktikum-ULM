# fungsi
def reverse(nilai):
    reverseNilai = 0

    # perulangan
    while (nilai != 0):
        sisa_bagi = nilai % 10
        reverseNilai = reverseNilai * 10 + sisa_bagi
        nilai //= 10

    return reverseNilai

# input
a, b = input().split()

# konversi ke tipe data integer
a = int(a)
b = int(b)

a = reverse(a)
b = reverse(b)

c = a + b
# output
print(reverse(c))