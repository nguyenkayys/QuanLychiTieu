#ifndef EXPENSE_H
#define EXPENSE_H
#include <string>

struct Expense {
    std::string name;
    double amount;
};

void addExpense();
void showExpenses();
#endif