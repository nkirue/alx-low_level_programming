#!/usr/bin/python3
"""def island_perimeter(grid): that returns the perimeter of the island"""


def island_perimeter(grid):
    """This function returns the perimiter of an island.

    The grid is a list of list of integers:0 water and 1 land.

    Arguments:
        grid (list): list of list of integers representing an island.
    Returns:
        This returnsperimeter of the island defined in grid.
    """
    wid = len(grid[0])
    hei = len(grid)
    edg = 0
    siz = 0

    for k in range(hei):
        for j in range(wid):
            if grid[k][j] == 1:
                siz += 1
                if (j > 0 and grid[k][j - 1] == 1):
                    edg += 1
                if (k > 0 and grid[k - 1][j] == 1):
                    edg += 1
    return siz * 4 - edg * 2
