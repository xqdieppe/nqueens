#include "nqueens.h"

int check_queen(int n, int qindex, int index) {
    return (
        check_x(n, qindex, index) |
        check_y(n, qindex, index) |
        check_ldiag(n, qindex, index) |
        check_rdiag(n, qindex, index)
    );
}