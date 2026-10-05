#include <stdio.h>
int factorial(int number);
int main(void) {
	printf("Calculating 5!.... \n ");
	int result = factorial(5);
	printf("5! = %d\n", result);
	return 0;
	}


int factorial(int number){
	int current = number;
	int result = 1;

	while (current > 0) {
		result *= current;
		current--;
		printf("Current value of result= %d\n", result);
		}
	return result;
}

//https://developers.redhat.com/articles/the-gdb-developers-gnu-debugger-tutorial-part-1-getting-started-with-the-debugger#
//https://developers.redhat.com/articles/2022/01/10/gdb-developers-gnu-debugger-tutorial-part-2-all-about-debuginfo#
//https://developers.redhat.com/articles/2021/12/09/printf-style-debugging-using-gdb-part-3

// set debuginfod enabled off
// set debuginfod urls 
// set auto-load safe-path /

