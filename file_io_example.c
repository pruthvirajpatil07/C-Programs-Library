#include <stdio.h>
#include <string.h>

int main(void) {
    const char *filename = "sample.txt";
    const char *text = "Hello from file I/O in C!\nThis is a second line.\n";

    // Write
    FILE *fw = fopen(filename, "w");
    if (!fw) { perror("fopen write"); return 1; }
    fputs(text, fw);
    fclose(fw);

    // Read
    FILE *fr = fopen(filename, "r");
    if (!fr) { perror("fopen read"); return 1; }
    printf("File contents of %s:\n", filename);
    char buf[256];
    while (fgets(buf, sizeof buf, fr)) {
        fputs(buf, stdout);
    }
    fclose(fr);
    return 0;
}
