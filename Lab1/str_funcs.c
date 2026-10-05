#include "str_funcs.h"

int test_digit(char input){
    if (input >= '0' && input <= '9'){
        return 1;
    }
    else{
        return 0;
    }
}

int test_upper_lower(char input){
    if(input >= 'A' && input <= 'Z'){
        return 1;
    }
    else if(input >= 'a' && input <= 'z'){
        return 0;
    }
    else{
        return -1;
    }
}

char to_upper(char input){
    if(test_upper_lower(input) == 0){
        return (input & 0b11011111);
    }
    else if(test_upper_lower(input) == 1){
        return input;
    }
    else
        return -1;
}