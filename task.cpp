
#include <iostream>
#include <cstring>
#include <Windows.h>

struct bank{
    int accountNumber;
    std::string userName;
    double money;
};

void editMoney(bank* acc, double money){
    acc -> money = money;
}

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int account;
    std::cout << "Введите номер счёта: ";
    std::cin >> account;

    std::string name;
    std::cout << "Введите имя владельца: ";
    std::cin >> name;

    double money;
    std::cout << "Введите новый баланс: ";
    std::cin >> money;

    bank acc = {account, name};

    editMoney(&acc, money);

    std::cout << "Ваш счёт: " << acc.userName << ", " << acc.accountNumber << ", " << acc.money << std::endl;

    return 0;
}