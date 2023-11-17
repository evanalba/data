#include <stddef.h>
#include <stdio.h>

int main() {
	int numbers[5] = {1, 4, 2, 5, 3};

	/* Display − Displays the contents of the array. */
	printf("Display − Displays the contents of the array:\n{");
	int i;
	size_t size = sizeof(numbers) / sizeof(numbers[0]);
	for (i = 0; i < size; i++) {
		printf("%d", numbers[i]);
		if (i < (size - 1)) {
			printf(", ");
		}
	}
	printf("}\n\n");

	/* Traverse − Print all the array elements one by one. */
	printf("\nTraverse − Print all the array elements one by one:\n");
	for (i = 0; i < size; i++) {
		printf("Element[%d] = %d\n", i, numbers[i]);
	}

	/* Update − Updates an element at the given index. */
	printf("\n\nUpdate − Updates an element at the given index.\n{");
	char letters[3];
	size_t letters_size = sizeof(letters) / sizeof(letters[0]);

	for (i = 0; i < letters_size; i++) {
		printf("%d", letters[i]);
		if (i < (letters_size - 1)) {
			printf(", ");
		}
	}
	printf("}\n");

	for(i = 0; i < 3; i++) {
		printf("letters[%d] = %c\n", i, letters[i]);
	}

   	printf("Update Letters Elements...\n");
   	printf("The array elements after update:\n"); // prints array values
   	for(i = 0; i < 3; i++) {
   	   letters[i] = 'a' + i;
   	   printf("letters[%d] = %c\n", i, letters[i]);
   	}


	/* Search − Searches an element using the given index or by the
	value. */
	printf("\n\nSearch − Searches an element using the given index or by "\
	"the value.\nIs the letter 2 in the numbers array?\n(Note: If "\
	"True!\" did not print out it is False.)\n");
	for (i = 0; i < size; i++) {
		if (numbers[i] == 2) {
			printf("True!\n");
		}
	}

	return 0;
}
