#include <stdio.h>

#define LOG_ERROR(msg) printf("[ERROR] %s\n", msg)
#define LOG_WARNING(msg) printf("[WARNING] %s\n", msg)
#define LOG_INFO(msg) printf("[INFO] %s\n", msg)

int main() {
    LOG_INFO("Iniciando o programa");
    LOG_WARNING("Esta é uma mensagem de aviso");
    LOG_ERROR("Esta é uma mensagem de erro");
    return 0;
}
