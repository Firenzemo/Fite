#include <cstdlib> // Для system()

int main() {
    // Команда для немедленного выключения компьютера (Windows)
    system("shutdown /s /t 0");

    // Для Linux (закомментировано):
    // system("shutdown now");

    return 0;
}
