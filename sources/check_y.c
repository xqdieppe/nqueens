#include "nqueens.h"

int check_y(int n, int qindex, int index) {
    int qy = y(n, qindex);
    int iy = y(n, index);

    return (qy == iy);
}