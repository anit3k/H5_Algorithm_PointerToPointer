#include <stdio.h>

int main() {
	int x = 666; // declare value of 66 in x
	int *ptr1 = &x; // declare pointer 1 and point address to the x
	int** ptr2 = &ptr1; // declare new pointer (2) and set the pointer to pointer 1
	printf("The value is before: %d\n", x); // write out value
	printf("The value is before: %d\n", **ptr2); // write out value

	**ptr2 = 66; // set new value
	printf("The value is after: %d\n", x);
	printf("The value is after: %d\n", **ptr2);
	return 0;
}