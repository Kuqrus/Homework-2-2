#include <iostream>

struct bankAcc
{
    int number;
    std::string name;
    double balance;
};

void newBankAcc(struct bankAcc &user) {
    std::cout << "Введите номер счет: ";
    std::cin >> user.number;

    std::cout << "Введите имя владельца: ";
    std::cin >> user.name;

    std::cout << "Введите баланс: ";
    std::cin >> user.balance;
}

void newBalance(double& currentBalance)
{
    std::cout << "Введите новый баланс: ";
    std::cin >> currentBalance;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    bankAcc andrey;
    newBankAcc(andrey);    

    std::cout << "Текущая информация по счету:\nНомер счета: " << andrey.number << ". Имя владельца: " << andrey.name << ". Баланс: " << andrey.balance << std::endl;
    
    newBalance(andrey.balance);

    std::cout << "Текущая информация по счету:\nНомер счета: " << andrey.number << ". Имя владельца: " << andrey.name << ". Баланс: " << andrey.balance << std::endl;

}

