#include <stdio.h>
#include "INIT.h"

void actions();
int main(void) {
    creatfile("nolerr.txt");
    actions();
    times();
    return 0;
}