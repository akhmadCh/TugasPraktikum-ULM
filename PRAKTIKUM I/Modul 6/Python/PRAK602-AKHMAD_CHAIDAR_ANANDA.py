# input 
jml_ruang = int(input())

# input array
arr = [int(i) for i in input().split()]

# output
print()
for j in range(jml_ruang):
    print(arr[j] * (j + 1), end=' ')