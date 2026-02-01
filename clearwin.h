
#ifdef APPLE
#define SLEEP(x) sleep(x)
#define CLEAR system("clear");
#include <unistd.h>
#define SLEEP(x) sleep(x)
#elif _WIN32
#include <windows.h>
#define SLEEP(x) Sleep((x) * 1000)
#define CLEAR system("cls");
#else
#include <unistd.h>
#define SLEEP(x) sleep(x)
#define CLEAR system("clear");
void actions(void);
#endif