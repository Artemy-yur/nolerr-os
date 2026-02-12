# Компилятор
CC = gcc

# Флаги компиляции
CFLAGS = -std=c2x -Wall -I.

# Имя программы
PROGRAM = Ezy_OS

# Все исходники
SRCS = main.c \
       file/workfiles.c \
       additions/calculator/calculator.c \
       additions/timenow.c \
       additions/wearth/getWearth.c \
       interface/interface.c \
       additions/help/help.c \
       additions/notich/notich.c

# Собираем все .o файлы из .c
OBJS = $(SRCS:.c=.o)

# По умолчанию собираем и запускаем
all: $(PROGRAM)
	./$(PROGRAM)

# Сборка программы (без ws2_32 для macOS/Linux)
$(PROGRAM): $(OBJS)
	$(CC) $(OBJS) -o $(PROGRAM) -lm

# Правило для сборки .o файлов
%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

# Очистка
clean:
	rm -rf $(OBJS) $(PROGRAM)

# Пересборка
rebuild: clean all

.PHONY: all clean rebuild