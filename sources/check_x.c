#include "nqueens.h"

int check_x(int n, int qindex, int index) {
    int qx = x(n, qindex);
    int ix = x(n, index);

    return (qx == ix);
}
