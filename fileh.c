#include <stdio.h>

int main() {
    FILE *src, *dest;
    char srcName[50], destName[50];
    int ch;

    printf("Enter source and destination file names: ");
    scanf("%49s %49s", srcName, destName);

    src = fopen(srcName, "r");
    dest = fopen(destName, "w");

    if (src == NULL || dest == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully.\n");
    fclose(src);
    fclose(dest);
    return 0;
}
