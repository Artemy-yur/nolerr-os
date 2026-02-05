/*
 * Nolerr-OS - Copyright (c) 2025 Артемий Юров
 * Лицензия MIT: свободное использование с сохранением авторства
 */

#include <stdio.h>
#include <stdlib.h>
#include "INIT.h"
#include "clearwin.h"


void execute_choice(int choice) {
    switch(choice) {
        case 1:
            printf("Работа над файлом (функция пока не реализована)\n");
            printf("\nНажмите Enter для продолжения...");
            getchar();
            break;
        case 2:
            actions();
            break;
        case 3:
            times();
            break;
        case 4:
            {
                char city[50];
                printf("Введите город: ");
                scanf("%49s", city);
                while(getchar() != '\n'); // Очистка буфера
                get_weather_win(city);
            }
            break;
        case 5:
            python_help();
            break;
        case 6:
            printf("Функция заметок (пока не реализована)\n");
            printf("\nНажмите Enter для продолжения...");
            getchar();
            break;
        case 7:
            listfile();
            break;
        case 8:
            info_system();
            break;
        default:
            printf("Неизвестное действие!\n");
            printf("\nНажмите Enter для продолжения...");
            getchar();
            break;
    }
}


int starts(void) {
    int choice;

    while(1) {
        CLEAR;
        printf("\n========== ГЛАВНОЕ МЕНЮ ==========\n");
        const char *vibor[] = {
            "1. Работа над файлом.\n",
            "2. Математика.\n",
            "3. Время сейчас.\n",
            "4. Погода.\n",
            "5. Help\n",
            "6. Заметка\n",
            "7. Все файлы в директории\n",
            "8. Информация о Системе\n",
            "0. Выход\n",
        };

        for (int i = 0; i < ARRAYSIZE(vibor); i++) {
            printf("%s", vibor[i]);
        }
        printf("=================================\n");

        printf("Введите число от (1-8): ");
        scanf("%d", &choice);
        while(getchar() != '\n'); // Очистка буфера


        if(choice < 1 || choice > 8) {
            printf("Ошибка! Введите число от 1 до 8 (или 1 для выхода).\n");
            printf("Нажмите Enter для продолжения...");
            getchar();
            continue;
        }

        execute_choice(choice);
    }
}

int main(void)
{

    int first_choice = start();

    execute_choice(first_choice);

    starts();

    return 0;
}