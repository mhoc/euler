
def sumsquares(n):
    '''Sums the squares of every number 1->n inclusives'''
    sm = 0
    for i in range(0, n+1):
        sm += pow(i, 2)
    return sm

def squaresums(n):
    '''Squares the sums of every number 1->n inclusive'''
    sm = 0
    for i in range(0, n+1):
        sm += i
    return pow(sm, 2)

n = 100

print abs(sumsquares(n)-squaresums(n))
