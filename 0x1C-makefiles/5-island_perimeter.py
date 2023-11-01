#!/usr/bin/python3
""" create function that finds the perimeter of an island """


def island_perimeter(grid):
    """ Find the perimeter of the island described by a grid """
    if not len(grid):
        return 0

    perimeter = 0
    for i, cell in enumerate(grid):
        for j, g in enumerate(cell):
            if g:
                perimeter += 4
                if i != 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j + 1 != len(cell) and cell[j + 1] == 1:
                    perimeter -= 2

    return perimeter
