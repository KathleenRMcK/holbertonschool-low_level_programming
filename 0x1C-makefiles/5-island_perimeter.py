#!/usr/bin/python3

"""
Return the perimeter of the given island in grid
"""

def island_perimeter(grid):
    """ walk the beach"""
    beach = 0
    for sand in range(len(grid)):
        for rocks in range(len(grid[sand])):
            if grid[sand][rocks] == 1:
                if sand == 0:
                    beach += 1
                else:
                    if grid[sand - 1][rocks] == 0:
                        beach += 1
                    if rocks == 0:
                        beach += 1
                    else:
                        if grid[sand][rocks - 1] == 0:
                            beach += 1
                        if sand == len(grid) - 1:
                            beach += 1
                        else:
                            if grid[sand + 1][rocks] == 0:
                                beach += 1
                            if rocks == len(grid[sand]) - 1:
                                beach += 1
                            else:
                                if grid[sand][rocks + 1] == 0:
                                    beach += 1
    return beach
