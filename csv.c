#include <stdio.h>
#include <string.h>
#include "csv.h"



int readCsv(const char *filename, unsigned char names[MAX_STUDENTS][MAX_NAME_SIZE], int *nbStudents) {
    // try to open the file
    FILE *file = fopen(filename, "r");
    const char * separators = ",;\"";

    if (!file) {
        perror("Error opening file");
        return 0;
    }

    *nbStudents = 0;
    char line[MAX_LINE_SIZE];
    int row = 0;

    while (fgets(line, MAX_LINE_SIZE, file)) {

        // Ignore the headers
        row++;
        if(row <= NUMBER_ROW_HEADERS){
            continue;
        }

        // Remove newline character if needed
        if(line[strlen(line)-1] == '\n'){
            line[strlen(line)-1] = '\0';
        }

        if (*nbStudents >= MAX_STUDENTS) {
            printf("Maximum number of students (%d) exceeded \n", MAX_STUDENTS);
            fclose(file);
            return 0;
        }

        char* value = strtok(line, separators);

        strcpy((char*)names[*nbStudents], value);
        (*nbStudents)++;
    }

    fclose(file);
    return 1;
}