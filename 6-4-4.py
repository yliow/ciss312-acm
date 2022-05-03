tableN = {}

SPACES = 0
def N(n,d):
    global SPACES
    SPACES += 4
    print " " * SPACES, "enter ...", n, d
    if (n,d) not in tableN.keys():
        if n % 2 == 1:
            tableN[(n,d)] = 0
        else:
            if n == 0:
                if d == 0:
                    tableN[(0,0)] = 1
                else:
                    tableN[(0,d)] = 0
            elif n == 2:
                if d == 1:
                    tableN[(2,1)] = 1
                else:
                    tableN[(2,d)] = 0
            else:
                if d == 0:
                    tableN[(n,0)] = 0
                else:
                    x = N(n - 2, d - 1)
                    print "x:", x
                    y = 0
                    for i in range(2, n, 2):
                        for j in range(0, d + 1):
                            y += N(i,j) * N(n-i, d-j)
                    print "y:", y
                    print "x + y:", x + y
                    tableN[(n,d)] = x + y
    print " " * SPACES, "exit  ...", n, d, " return", tableN[(n,d)]
    SPACES -= 4
    return tableN[(n,d)]

def pf(b):
    if b: print "pass"
    else: print "fail"
    
pf(N(0,0) == 1)
print 6,2
print N(6,2)

"""
N(6,2) = N(4,1) +
           N(1,0) * N(
"""
