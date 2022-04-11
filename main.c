#include <stdio.h>
#include "Trees.h"


int main() {
    printf("Hello, dot!\n");
    _dot_t *tree = _dot_t_int();
    _dot_t_print(tree,0);
    _dot_t_name(tree, "Koren");
    _dot_t_print(tree,0);
    _dot_t_dtor(tree);
    return 0;
}
