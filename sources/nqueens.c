#include "nqueens.h"

int nqueens(int n) {
    int size = n * n;
    int map[size];

    for (int i = 0; i < size; i++)
        map[i] = 0;
    return (nqueens_recursive(n, map, 0, 0));
}
