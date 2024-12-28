#ifndef FUNCTION_H
#define FUNCTION_H

void displayStartMenu();
void displayLogin();
void adminMenu();
void inputEmail(char email[]);
void inputPassword(char password[]);
int validateLogin(char email[], char password[]);
int login();
void handleRole(int role);
void handleAdminChoice(int choice);

#endif
