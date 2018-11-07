#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define START_BALANCE 153.80

//    Name:     Ynigo Reyes
//    Section:  Section # 501
//    Purpose of program:
//    Lab 9 - Project 2
//
//    ATM
//
//    Function main begins program execution

typedef struct {
  float balance;
  char password[100];
} Bank;

void prompt() {
  puts("\n1) Check Balance");
  puts("2) Make A Deposit");
  puts("3) Make A Withdrawal");
  puts("4) Change Password");
  puts("5) Exit");
  puts("Please enter a number from 1 to 5 to select a menu item");
}

void handleOption1(Bank *bank) {
  puts("\nExecute Check Balance");
  printf("Balance is $ %.2f\n", bank->balance);
}

void handleOption2(Bank *bank) {
  puts("\nExecute Make a Deposit");
  float addition = 0.00;
  printf("Enter amount to deposit: ");
  scanf("%f", &addition);
  bank->balance += addition;

  printf("New Balance is $ %.2f\n", bank->balance);
}

void handleOption3(Bank *bank) {
  puts("\nExecute Make a Withdrawal");
  float subtraction = 0.00;
  printf("Enter amount to withdraw: ");
  scanf("%f", &subtraction);
  bank->balance -= subtraction;

  printf("New Balance is $ %.2f\n", bank->balance);
}

void handleOption4(Bank *bank) {
  puts("\nExecute Change Password");
  printf("Enter new password: ");
  char newPassword[100];
  scanf("%s", newPassword);
  strncpy(bank->password, newPassword, 100);

  printf("New Password is \"%s\"\n", bank->password);
}

int main() {
  int choice = -1;
  Bank bank;
  bank.balance = START_BALANCE;

  while (choice != 5) {
    prompt();
    scanf("%d", &choice);
    printf("User entered %d\n", choice);
    switch (choice) {
      case 1:
        handleOption1(&bank);
        break;
      case 2:
        handleOption2(&bank);
        break;
      case 3:
        handleOption3(&bank);
        break;
      case 4:
        handleOption4(&bank);
        break;
      case 5:
        break;
      default:
        puts("Invalid option");
        break;
    }
  }

  puts("\nExecuting Exit");
  puts("Terminating Program");
  puts("Have a nice day!");
  return 0;
}

