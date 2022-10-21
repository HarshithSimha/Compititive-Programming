def move_zeros(array):
    counter = array.count(0)
    return [i for i in array if i!=0]+[0 for m in range(counter)]
