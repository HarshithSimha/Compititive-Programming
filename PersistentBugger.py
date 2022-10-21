def persistence(n):
    count = 0
    while len(str(n))>1:
        count += 1
        value = 1
        l = [int(i) for i in str(n)]
        for j in l:
            value *= j
        n = value
    return count
