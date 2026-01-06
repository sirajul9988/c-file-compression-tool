#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *input, *output;
    char ch;

    input = fopen("input.txt", "r");
    if (input == NULL) {
        printf("Input file not found\n");
        return 1;
    }

    output = fopen("compressed.txt", "w");
    if (output == NULL) {
        printf("Unable to create output file\n");
        fclose(input);
        return 1;
    }

    while ((ch = fgetc(input)) != EOF) {
        fputc(ch, output);
    }

    fclose(input);
    fclose(output);

    printf("File compression simulation completed\n");
    return 0;
}
