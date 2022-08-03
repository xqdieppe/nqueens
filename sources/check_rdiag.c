#include "nqueens.h"

int check_rdiag(int n, int qindex, int index) {
    int qx = x(n, qindex);
    int qy = y(n, qindex);
    int ix = x(n, index);
    int iy = y(n, index);

    int b = qy + qx;
    return (iy == -ix + b);
}