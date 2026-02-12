//
// Created by Artemy on 12.02.2026.
//

#ifndef EZY_OS_INTERFACE_H
#define EZY_OS_INTERFACE_H
void menu_file(void);
void actions(void);
void times(void);
void get_weather_winweather(void);
void info_system(void);
void notich(void);
void listfile(void);

#define F_BLUE    "\033[1;34m" // Основной синий
#define F_CYAN    "\033[1;36m" // Светло-голубой
#define F_WHITE   "\033[1;37m" // Жирный белый
#define F_BOLD    "\033[1m"    // Просто жирный
#define RESET     "\033[0m"

#endif //EZY_OS_INTERFACE_H
