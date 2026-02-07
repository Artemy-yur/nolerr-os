/*
 * Nolerr-OS - Copyright (c) 2025 Артемий Юров
 * Лицензия MIT: свободное использование с сохранением авторства
 */
#pragma once

static void creatfile(const char *name);
static void readfile(const char *name);
static void writefile(const char *name);
static void deletefile(const char *name);
static void copyfile(const char *from, const char *to);
void listfile(void);

//calculator
static void power(void);
static void sqtr(void);
static void match_actions(void);
void actions(void);

//time
void times(void);

//wearth
void get_weather_win(const char *city);

//interface
int start(void);
void python_help(void);
int starts(void);
void menu_file(void);

void notich(void);

void info_system(void);

#define F_BLUE    "\033[1;34m" // Основной синий Fedora
#define F_CYAN    "\033[1;36m" // Светло-голубой
#define F_WHITE   "\033[1;37m" // Жирный белый
#define F_BOLD    "\033[1m"    // Просто жирный
#define RESET     "\033[0m"
