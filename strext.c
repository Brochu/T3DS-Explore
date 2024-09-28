#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    if (argc <= 1) {
        printf("USAGE: strext <FILE>\n");
        printf("Did not provide file to search for strings.\n");
        return EXIT_FAILURE;
    }

    printf("Findings readable strings in file at : %s\n", argv[1]);
    FILE *f;
    errno_t err = fopen_s(&f, argv[1], "rb"); 
    if (err != 0) {
        printf("ERROR: Could not open file for reading at: %s\n", argv[1]);
        return EXIT_FAILURE;
    }

    printf("File opened !\n");
    fclose(f);
    printf("File closed !\n");
    return EXIT_SUCCESS;
}
