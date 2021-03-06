table = {}
size = 0
lookup = 0

def product(xs):
    p = 1
    for x in xs: p *= x
    return p

def choose(n, r):
    return product(range(n , n - r, -1)) / product(range(1, r + 1))

def catalan(n):
    return choose(2 * n , n) / (n + 1)

def c(n, d):

    global table, size, lookup

    #if n < 0 or d < 0: return 0
    if n <= 0 or d <= 0:
        if n == 0 and d == 0: return 1
        else: return 0
    if d == n or d == 1: return 1
    if d > n: return 0

    # lookup
    if table.has_key((n,d)):
        return table[(n,d)]
    
    s = 0
    for a in range(n):
        b = n - a - 1
        x = c(a, d - 1) # stored to prevent recompute
        y = c(b, d)     # stored to prevent recompute
        s += x * y
        for e in range(d): s += x * c(b, e)
        for e in range(d - 1): s += c(a, e) * y
    table[(n, d)] = s
    return s

tests = [(0,-1,0),
         (0,-2,0),
         (-1,0,0),
         (-2,0,0),
         (-1,-1,0),
         (-2,-3,0),
         (1,-1,0),
         (-1,1,0),
         (0,0,1),
         (0,1,0),
         (0,2,0),
         (0,3,0),
         (0,4,0),
         (1,0,0),
         (1,1,1),
         (1,2,0),
         (1,3,0),
         (1,4,0),
         (2,0,0),
         (2,1,1),
         (2,2,1),
         (2,3,0),
         (2,4,0),
         (3,0,0),
         (3,1,1),
         (3,2,3),
         (3,3,1),
         (4,1,1),
         (4,2,7),
         (4,3,5),
         (4,4,1),
         #(150,150,1),
         ]

for n,d,correct in tests:
    print n, d, correct,
    if c(n,d) == correct: print "pass"
    else: print "FAIL"

print "catalan(0):", catalan(0)
print "c(0, 0):", c(0,0)
for n in range(1, 150):
    x = sum([c(n, d) for d in range(1, n + 1)])
    y = catalan(n)
    print "c(%s):" % n, x == y


#for n in range(1, 150):
#    for d in range(1, n + 1):
#        print "%3s" % n, "%3s" % d, c(n, d)

print "size:", len(table.keys())
print "lookup:", lookup

import sys; sys.exit()

"""
In the computation of c(n, d):

s = 0
for a = 0, ..., n - 1:
    b = n - a - 1
    s += c(a, d - 1) x c(b, d)
    s += c(a, d - 1) x c(b, e) for 0 <= e <= d - 1
    s += c(a, e) x c(b, d)     for 0 <= e <= d - 2
"""
