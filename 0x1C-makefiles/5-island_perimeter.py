#!/usr/bin/python3
"""
code to calculae perimeter of a matrix island
"""


def island_perimeter(grid):
    """calculates perimeter"""
    total = 0
    for row_ind, row in enumerate(grid):
        for cell_ind, cell in enumerate(row):
            if cell == 0:
                continue
            if len(grid) == row_ind + 1:
                next_row = None
            else:
                next_row = grid[row_ind + 1]
            if row_ind == 0:
                prev_row = None
            else:
                prev_row = grid[row_ind - 1]

            if len(row) == cell_ind + 1:
                next_cell = None
            else:
                next_cell = row[cell_ind + 1]
            if cell_ind == 0:
                prev_cell = None
            else:
                prev_cell = row[cell_ind - 1]

            total += sumofsides(cell_ind, prev_cell,
                                next_cell, prev_row, next_row)
    return total


def sumofsides(cell_ind, prev_cell, next_cell, prev_row, next_row):
    """checks the sides"""
    top = bott = left = right = 1
    if prev_row and prev_row[cell_ind] == 1:
        top = 0
    if next_row and next_row[cell_ind] == 1:
        bott = 0
    if prev_cell and prev_cell == 1:
        left = 0
    if next_cell and next_cell == 1:
        right = 0
    return top + bott + left + right
