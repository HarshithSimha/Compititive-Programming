def solution(array_a, array_b):
    res = 0 
    for i in range(len(array_a)):
        res = res + ((array_a[i]-array_b[i])**2)
    return res/len(array_a)
