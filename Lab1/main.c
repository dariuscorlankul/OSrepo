#include <stdio.h>

int my_int;
float my_float;
double my_double;
char my_char;
char *p;

int main(void){
    printf("size of int: %zu\n", sizeof(my_int));
    printf("size of float: %zu\n", sizeof(my_float));
    printf("size of double: %zu\n", sizeof(my_double));
    printf("size of char: %zu\n", sizeof(my_char));
    printf("size of ptr to char: %zu\n", sizeof(p));   

    return 0;
}
