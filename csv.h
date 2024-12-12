#ifndef RANDOM_STUDENT_CSV_H
#define RANDOM_STUDENT_CSV_H

#define MAX_STUDENTS 40
#define MAX_NAME_SIZE 50
#define MAX_LINE_SIZE 200
#define NUMBER_ROW_HEADERS 2

int readCsv(const char *filename, unsigned char names[MAX_STUDENTS][ MAX_NAME_SIZE], int *nbStudents);


#endif //RANDOM_STUDENT_CSV_H
