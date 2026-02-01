/*
 * Nolerr-OS - Copyright (c) 2025 Артемий Юров
 * Лицензия MIT: свободное использование с сохранением авторства
 */
#include <stdlib.h>
#include <stdio.h>

void creatfile(const char *name);
void readfile(const char *name);
void writefile(const char *name);
void deletefile(const char *name);
void copyfile(const char *from, const char *to);


void creatfile(const char *name) {
    FILE *file = fopen(name, "w");
    if (file != NULL) {
        printf("File %s created successfully\n", name);
        fclose(file);
    } else {
        perror("Error creating file");
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
    free(buffer);
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

void copyfile(const char *from, const char *to) {
    FILE *file = fopen(from, "rb"); 
    if (file == NULL) {  
        perror("Error opening source file");
        return;
    }
    
    FILE *file2 = fopen(to, "wb");  
    if (file2 == NULL) {
        perror("Error opening destination file");
        fclose(file);
        return;
    }
    printf("Copying file to %s\n", to);

    // Get file size
    fseek(file, 0, SEEK_END);
    long length = ftell(file);
    fseek(file, 0, SEEK_SET);
    
 
    if (length == 0) {
        fclose(file);
        fclose(file2);
        return;
    }

    char *buffer = malloc(length);
    if (buffer == NULL) {
        perror("Memory allocation failed");
        fclose(file);
        fclose(file2);
        return;
    }

    size_t bytes_read = fread(buffer, 1, length, file);
    if (bytes_read != length) {
        perror("Error reading file");
        free(buffer);
        fclose(file);
        fclose(file2);
        return;
    }
    fclose(file);

    size_t bytes_written = fwrite(buffer, 1, length, file2);
    if (bytes_written != length) {
        perror("Error writing file");
    }

    free(buffer);
    fclose(file2);
}