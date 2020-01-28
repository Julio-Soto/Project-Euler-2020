#    Starting in the top left corner of a 2×2 grid
#    and only being able to move to the right and down
#    there are exactly 6 routes to the bottom right corner.
#    How many such routes are there through a 20×20 grid?

import math

print("Project Euler #15")
print('Lattice paths')
print('How many routes?')

#    SOLUTION:
#    Out of 40 moves,exactly half are the the same (right or down)
#    In the set of moves [1 - 40] find all sets of 20 moves. order does not matter.
#    Number of symbols n = 40 Set size m = 20
#    Use the combinatorics formula nCm = n!/[m! * (n - m)!]

squareGridSide = 20

n = squareGridSide *2
m = squareGridSide
combinations = math.factorial(n)/(math.factorial(m) * (math.factorial(n-m)))

print('Number of routes in a',squareGridSide,"by",squareGridSide,"grid:",combinations)