#include "nqueens.h"

int nqueens_recursive(int n, int *map, int index, int counter) {
    int size = n * n;
    if (!check_queens(n, map, index)) {
        map[index] = 1;
    }
    if (index < size) { counter = nqueens_recursive(n, map, index + 1, counter); }
    else if (count_queens(n, map) >= n) { return (counter + 1); }
    
    if (map[index]) {
        map[index] = 0;
        if (index < size) { counter = nqueens_recursive(n, map, index + 1, counter); }
        else if (count_queens(n, map) >= n) { return (counter + 1); }
    }
    return (counter);
}