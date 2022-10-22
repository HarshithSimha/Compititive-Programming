def tribonacci(signature, n):
    if n == 0:
        return []
    elif n == 1:
        return [signature[0]]
    elif n == 2:
        return [signature[0], signature[1]]
    elif n == 3:
        return signature
    else:
        count = n - 3
        while(count > 0):
            tnext = signature[-1]+signature[-2]+signature[-3]
            signature.append(tnext)
            count = count - 1
        return signature
