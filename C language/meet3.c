#include<stdio.h>
#include<string.h>

int main() {
    char input[3]; 
	int i;
    while (1) {
        for ( i = 0; i < 5; i++) {
            printf("%d \n", i);
        }

        printf("Write Yes or No: ");
        scanf("%s", input);

        if (strcmp(input, "yes") == 0) {
            
        } else if (strcmp(input, "no" || strcmp(input,"NO")) == 0) {
            printf("Exiting the program.\n");
            break; 
        } else {
            printf("Invalid input. Please enter 'Yes' or 'No'.\n");
        }
    }

    return 0; 
}

