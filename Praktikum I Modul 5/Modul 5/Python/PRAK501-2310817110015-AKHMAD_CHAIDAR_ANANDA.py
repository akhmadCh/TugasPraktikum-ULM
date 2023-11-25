# fungsi
def MaxBilangan(a, b, c, d):
    # pengkondisian
    if (a > b and a > c and a > d): return a
    elif (b > c and b > d): return b 
    elif (c > d): return c
    else: return d

# input 
a, b, c, d = map(int, input().split())

hasil = MaxBilangan(a, b, c, d)
# output
print(hasil)