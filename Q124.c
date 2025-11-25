// Q124 (File Handling)
// Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
#include <stdio.h>

int main() {
    char source[50], dest[50];
    printf("Enter source filename: ");
    scanf("%s", source);
    printf("Enter destination filename: ");
    scanf("%s", dest);

    FILE *fs = fopen(source, "r");
    if (fs == NULL) {
        printf("Source file not found");
        return 1;
    }

    FILE *fd = fopen(dest, "w");
    if (fd == NULL) {
        printf("Cannot create destination file");
        return 1;
    }

    int ch;
    while ((ch = fgetc(fs)) != EOF) {
        fputc(ch, fd);
    }

    fclose(fs);
    fclose(fd);

    printf("File copied successfully to %s", dest);
    return 0;
}
