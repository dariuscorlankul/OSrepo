#include <stdio.h>
#include <string.h>

#include "str_funcs.h"

#define MAX 20

char name[100];
char first[MAX]; 
char last[MAX];
char str[MAX];
int year;


int main(void){
    scanf("%s", first);
    scanf("%s", last);
    for(int i= 0; i < strlen(last); i++){
        str[i] = to_upper(last[i]);
    }
    printf("%s\n", name);
    scanf("%i", &year);
    snprintf(name, sizeof(name), "%s %s %i",first, last, year);
    printf("%s\n", name);
}