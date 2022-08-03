#ifndef NQUEENS_H
#define NQUEENS_H

int x(int n, int index);
int y(int n, int index);
int pos(int n, int x, int y);

int check_x(int n, int qindex, int index);
int check_y(int n, int qindex, int index);
int check_rdiag(int n, int qindex, int index);
int check_ldiag(int n, int qindex, int index);
int check_queen(int n, int qindex, int index);
int check_queens(int n, int *map, int index);
int count_queens(int n, int *map);

int nqueens_recursive(int n, int *map, int index, int counter);
int nqueens(int n);

#endif