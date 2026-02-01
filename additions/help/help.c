//
// Created by Artemy on 01.02.2026.
//
#include "../../libraru/initlibery.h"


void python_help(void) {
    // Используем system(), чтобы запустить скрипт и дождаться его завершения
    int status = system("python3 help.py");

    if (status == -1) {
        perror("Ошибка запуска help.py");
    } else {
        printf("Возврат в основную программу.\n");
    }
}
