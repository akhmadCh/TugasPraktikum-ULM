# fungsi
def maksimal(maxs, num):
    if (maxs < num):
        maxs = num
            
    return maxs
# fungsi
def minimal(minims, num):
    if (minims > num):
        minims = num

    return minims

# deklarasi variabel
batas = 0
maks = -100000
minim = 100000
# input bilangan
bilangan = int(input())

# perulangan
while(batas < bilangan):

    # input nilai
    nilai = int(input())

    maks = maksimal(maks, nilai)
    minim = minimal(minim, nilai)

    # increment
    batas += 1

# output
print(f"{maks} {minim}")