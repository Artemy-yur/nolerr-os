def show_function_help():
    """Полная справка по всем функциям программы"""
    help_text = """
╔══════════════════════════════════════════════════════════════╗
║                     СПРАВКА ПО ФУНКЦИЯМ                     ║
╚══════════════════════════════════════════════════════════════╝
 1. listfile()     - Просмотр файлов (список, размеры)
 2. workfile()     - Управление (создание, удаление, copy, move)
 3. actions()      - Математика (+, -, *, /, ^, √, sin, cos, log)
 4. times()        - Дата и время (ЧЧ:ММ:СС, ДД.ММ.ГГГГ)
 5. get_weather_win() - Погода (температура в городе)
╚══════════════════════════════════════════════════════════════╝
"""
    print(help_text)

def main():
    # Список существующих функций для проверки
    commands = ['listfile', 'workfile', 'actions', 'times', 'get_weather_win']

    show_function_help()

    while True:
        try:
            command = input("\nЧтобы выйти напишите (exit): ").strip().lower()
            if command == 'exit':
                print("Выход из справки...")
                break
            else:
                print(f"Неизвестная команда: '{command}'")
        except (EOFError, KeyboardInterrupt):
            print("\nПрограмма завершена.")
            break

if __name__ == "__main__":
    main()
