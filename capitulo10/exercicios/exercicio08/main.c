#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char name[100];
    float salary;
} Employee;

typedef struct {
    Employee** employees;
    int size;
    int capacity;
} EmployeeDB;

EmployeeDB* createEmployeeDB() {
    EmployeeDB* db = (EmployeeDB*)malloc(sizeof(EmployeeDB));
    if (!db) {
        printf("Erro ao alocar memória para o banco de dados dos funcionários.\n");
        exit(1);
    }
    db->size = 0;
    db->capacity = 2; // Capacidade inicial
    db->employees = (Employee**)malloc(sizeof(Employee*) * db->capacity);
    if (!db->employees) {
        printf("Erro ao alocar memória para os funcionários.\n");
        free(db);
        exit(1);
    }
    return db;
}

void addEmployee(EmployeeDB* db, int id, const char* name, float salary) {
    if (db->size == db->capacity) {
        db->capacity *= 2;
        db->employees = (Employee**)realloc(db->employees, sizeof(Employee*) * db->capacity);
        if (!db->employees) {
            printf("Erro ao realocar memória para os funcionários.\n");
            exit(1);
        }
    }
    Employee* newEmployee = (Employee*)malloc(sizeof(Employee));
    if (!newEmployee) {
        printf("Erro ao alocar memória para o novo funcionário.\n");
        exit(1);
    }
    newEmployee->id = id;
    strncpy(newEmployee->name, name, sizeof(newEmployee->name) - 1);
    newEmployee->name[sizeof(newEmployee->name) - 1] = '\0'; // Garantindo terminação
    newEmployee->salary = salary;
    db->employees[db->size++] = newEmployee;
}

void listEmployees(EmployeeDB* db) {
    printf("Lista de Funcionários:\n");
    for (int i = 0; i < db->size; i++) {
        Employee* e = db->employees[i];
        printf("ID: %d, Nome: %s, Salário: %.2f\n", e->id, e->name, e->salary);
    }
}

void freeEmployeeDB(EmployeeDB* db) {
    for (int i = 0; i < db->size; i++) {
        free(db->employees[i]);
    }
    free(db->employees);
    free(db);
}

int main() {
    EmployeeDB* db = createEmployeeDB();

    addEmployee(db, 1, "João Silva", 3000.00);
    addEmployee(db, 2, "Maria Oliveira", 3500.00);
    // Adicionar mais funcionários conforme necessário

    listEmployees(db);

    freeEmployeeDB(db); // Liberar todos os recursos alocados

    return 0;
}
