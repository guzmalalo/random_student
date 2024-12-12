#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include  "csv.h"


int main(){
    // Initial seed for the random number
    srand(time(0));

    // Declarations
    int nbStudents=0;
    int chosenOne=0;
    unsigned char names[MAX_STUDENTS][MAX_NAME_SIZE];

    // filename
    const char *filename = "../test.csv";

    // Load names
    if (readCsv(filename, names, &nbStudents)) {
        printf("There are %d students:\n", nbStudents);
        for (int i = 0; i < nbStudents; i++) {
            printf("%d: %s\n", i + 1, names[i]);
        }
    } else {
        fprintf(stderr, "Failed to read the CSV file.\n");
    }

    // generate a random number
    chosenOne = rand()%nbStudents;

    // the chosen one
    printf("And the chosen one is .... %s", names[chosenOne]);

    return 0;
}