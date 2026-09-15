// importing libraries

#include<stdio.h> 
#include<stdlib.h>
 
int main() {

    // create the storage array
    
    char log_array[200];

    // ask the user for an input string and save using fgets()

    printf("Enter a string: ");

    fgets(log_array, sizeof(log_array), stdin);

    // creating a pointer that opens the file 

    FILE *file_pointer = fopen("system_log.txt", "a");

    // ensuring that the pointer actually leads to a file 

    if (file_pointer == NULL) {
        printf("Fatal error: couldn't create file. Please try the program again.");
        return 1;
    }

    // writing to the file 

    fprintf(file_pointer, "Input from user: %s", log_array);

    // closing the file to free memory 

    fclose(file_pointer);

    printf("Data appended successfully.\n");

    return 0;

}
