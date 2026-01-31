//
// Created by Artemy on 31.01.2026.
//


#include "../libraru/initlibery.h"

static void power(void);
static void sqtr(void);
static void math_actions(void);

void actions(){
    unsigned short v;
    printf("Выберите действия из:\n1.Корень числа.\n2.Возведения в степень.\n3.Простой калькулятор.\n");
    scanf("%hu", &v);
    switch (v) {
        case 1:
            sqtr();
            break;
        case 2:
            power();
            break;
        case 3:
            math_actions();
            break;
    }
}

static void power(void) {
    int num1, num2;
    long result;

    printf("Please input two num:");
    scanf("%d %d", &num1, &num2);
    result = pow(num1, num2);
    printf("Result = %ld\n", result);

}

static void sqtr(void){
    unsigned long num;
    scanf("%ld",&num);
    unsigned short bb;
    bb = sqrt(num);
    printf("%hd",bb);
}

static void math_actions(void) {
    int num1, num2;
    char action;

    // Ввод чисел
    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);

    // Очистка буфера ввода
    while (getchar() != '\n');

    // Ввод операции
    printf("Enter action (+, -, *, /): ");
    scanf("%c", &action);

    // Вычисления
    printf("%d %c %d = ", num1, action, num2);

    switch (action) {
        case '+':
            printf("%d\n", num1 + num2);
            break;
        case '-':
            printf("%d\n", num1 - num2);
            break;
        case '*':
            printf("%d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                // Для целочисленного деления
                printf("%d\n", num1 / num2);
                // Или для деления с плавающей точкой:
                // printf("%.2f\n", (double)num1 / num2);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        default:
            printf("Error: Invalid operation!\n");
    }
}