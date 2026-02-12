/*
 * Nolerr-OS - Copyright (c) 2025 Артемий Юров
 * Лицензия MIT: свободное использование с сохранением авторства
 */
#include "../../libraru/initlibery.h"
#include "../../clearwin.h"

void python_help(void) {
    // Используем system(), чтобы запустить скрипт и дождаться его завершения
    int status = system("python3 help.py");

    if (status == -1) {
        perror("Ошибка запуска help.py");
    } else {

        printf("Возврат в основную программу.\n");

    }
}
