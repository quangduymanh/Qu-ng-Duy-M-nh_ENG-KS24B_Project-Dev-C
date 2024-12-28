#include <stdio.h>
#include <string.h>
#include <conio.h> // Su dung cho ham getch() tren Windows
#include "function.h"

// Tai khoan mau
char correctEmail[] = "test@gmail.com";
char correctPassword[] = "123456";

// Hien thi menu chinh
void displayStartMenu() {
    printf("========================================\n");
    printf("   *** Supermarket Management System ***\n");
    printf("========================================\n");
    printf("               CHOOSE YOUR ROLE          \n");
    printf("----------------------------------------\n");
    printf("[1] Admin\n");
    printf("[2] Employee\n");
    printf("[3] Customer\n");
    printf("[0] Exit the Program\n");
    printf("----------------------------------------\n");
    printf("Enter Your Choice: ");
}

// Hien thi giao dien dang nhap
void displayLogin() {
    printf("========================================\n");
    printf("   *** Supermarket Management System ***\n");
    printf("========================================\n");
    printf("                  LOGIN                  \n");
    printf("----------------------------------------\n");
}

void adminMenu() {
    printf("========================================\n");
    printf("   *** Supermarket Management System ***\n");
    printf("========================================\n");
    printf("                 MENU                   \n");
    printf("----------------------------------------\n");
    printf("[1] Categories Management.\n");
    printf("[2] Products Management.\n");
    printf("[3] Employee Management.\n");
    printf("[4] User Guideline.\n");
    printf("[5] About Us.\n");
    printf("[0] Exit to Main Menu.\n");
    printf("----------------------------------------\n");
    printf("Enter Your Choice: ");
}

// Nhap email
void inputEmail(char email[]) {
    printf("Email: ");
    scanf("%s", email);
}

// Nhap mat khau (an ky tu)
void inputPassword(char password[]) {
    printf("Password: ");
    int i = 0;
    char ch;
    while ((ch = getch()) != '\n' && i < 99) {
        if (ch != '\b') {
            password[i++] = ch;
            printf("*");
        } else if (i > 0) {
            i--;
            printf("\b \b");
        }
    }
    password[i] = '\0';
    printf("\n");
}

// Kiem tra thong tin dang nhap
int validateLogin(char email[], char password[]) {
    return (strcmp(email, correctEmail) == 0 && strcmp(password, correctPassword) == 0);
}

// Thuc hien dang nhap
int login() {
    char email[100];
    char password[100];
    displayLogin();
    inputEmail(email);
    inputPassword(password);
    printf("----------------------------------------\n");
    if (validateLogin(email, password)) {
        printf("Login Successful!\n");
        return 1;
    } else {
        printf("Invalid Email or Password. Please try again.\n");
        return 0;
    }
}

// Xu ly vai tro
void handleRole(int role) {
    switch (role) {
        case 1:
            printf("\nAdmin functionalities are coming soon!\n");
            break;
        case 2:
            printf("\nEmployee functionalities are coming soon!\n");
            break;
        case 3:
            printf("\nCustomer functionalities are coming soon!\n");
            break;
        default:
            printf("\nInvalid role! Please restart the program.\n");
    }
}

// Xu ly lua chon cua Admin
void handleAdminChoice(int choice) {
    switch (choice) {
        case 1:
            printf("\nCategories Management is under construction.\n");
            break;
        case 2:
            printf("\nProducts Management is under construction.\n");
            break;
        case 3:
            printf("\nEmployee Management is under construction.\n");
            break;
        case 4:
            printf("\nUser Guideline is under construction.\n");
            break;
        case 5:
            printf("\nAbout Us: This system is developed for supermarket management.\n");
            break;
        case 0:
            printf("\nExiting to Main Menu...\n");
            break;
        default:
            printf("\nInvalid choice! Please try again.\n");
    }
}
