//
// Created by Artemy on 31.01.2026.
//
#include <stdlib.h>
#include <stdio.h>

void creatfile(const char *namefile);
void readfile(const char *name);
void writefile(const char *name);
void deletefile(const char *name);
void copyfile(const char *from, const char *to);


void createfile(const char *name) {
    FILE *f = fopen(name, "w");
    if (f != NULL) {
        perror("error creat file");
        fclose(f);
    }
}
void readfile(const char *name) {
    FILE *file = fopen(name, "r");
    if (file != NULL) {
        perror("error read file");
    }
    int c;
    while ((c = fgetc(file)) != EOF) { // Чтение до конца
        printf("%c", c);
    }

    fclose(file);
}
void writefile(const char *name) {
    FILE *file = fopen(name, "w");
    if (file != NULL) {
        perror("error write");
        fclose(file);
    }

    int write_element = 0;
    char *buffer = malloc(10000 * sizeof(char));
    printf("Write text: ");
    scanf("%s", buffer);
    sprintf(buffer, "%d", write_element);

    fclose(file);
}

void deletefile(const char *name) {
    if (remove(name) == 0) {
        puts("File deleted");
    }
    else {
        perror("error delete");
    }
    return;
}