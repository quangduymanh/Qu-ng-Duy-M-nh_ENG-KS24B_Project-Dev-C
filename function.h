#ifndef FUNCTION_H
#define FUNCTION_H

// Hien thi menu chinh
void displayStartMenu();

// Hien thi giao dien dang nhap
void displayLogin();

// Nhap email
void inputEmail(char email[]);

// Nhap mat khau
void inputPassword(char password[]);

// Kiem tra thong tin dang nhap
int validateLogin(char email[], char password[]);

// Thuc hien dang nhap
int login();

// Xu ly vai tro
void handleRole(int role);

// Hien thi menu admin
void adminMenu();

// Xu ly lua chon cua admin
void handleAdminChoice(int choice);

#endif
