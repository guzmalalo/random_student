# ReadMe

## Overview

This project provides a simple C program that reads a list of student names from a CSV file and selects one student at
random. The program demonstrates basic file I/O, string manipulation, and random number generation in C.

## Features

- Reads student names from a CSV file.
- Handles configurable headers and delimiters.
- Selects a random student using the system's random number generator.

## Files

1. **csv.h**: Header file with constants and the declaration for the `readCsv` function.
2. **csv.c**: Implementation of the `readCsv` function.
3. **main.c**: Main program file that integrates the CSV reading function and random selection logic.
4. **test.csv**: Sample CSV file with student names.

## How to Build

To compile the program, you can use a standard C compiler such as GCC:

```sh
gcc -o random_student main.c csv.c
```

## How to Run

1. Prepare a CSV file with the following format:
    - Each row represents a student's name.
    - The first row(s) can be headers and will be ignored based on the `NUMBER_ROW_HEADERS` constant.

   Example `test.csv`:
   ```
    Nom;Né(e) le;Sexe;E-mail;Heures manquées;;Entrée;Sortie
    ;;;;Toutes;Mes cours;;
    "Alan Turing";"23/06/1912";"M";"alan.turing@enigma.org";"30h00 (1)";"00h00";"Début d'année";""
    "John von Neumann";"28/12/1903";"M";"john.neumann@mathlogic.net";"630h00 (21)";"120h00 (4)";"Début d'année";""
   ```

2. Execute the compiled program:

```sh
./random_student
```

3. The program will display the number of students and pick one at random:

```
There are 2 students:
1: Alan Turing
2: John von Neumann
And the chosen one is .... Alan Turing
```

## Configuration

- **`MAX_STUDENTS`**: Maximum number of students the program can handle (default: 40).
- **`MAX_NAME_SIZE`**: Maximum length of a student's name (default: 50).
- **`NUMBER_ROW_HEADERS`**: Number of header rows to skip in the CSV file (default: 2).

## Error Handling

- If the CSV file cannot be opened, an error message will be displayed.
- If the student limit is exceeded, the program will terminate with a relevant message.

## Dependencies

- Standard C libraries: `stdio.h`, `stdlib.h`, `string.h`, `time.h`.

## Limitations

- The program assumes that the first value in each row is the student's name.
- Only supports simple CSV files with delimiters `,;"`.

## License

This project is open-source and licensed under the GNU GENERAL PUBLIC LICENSE

