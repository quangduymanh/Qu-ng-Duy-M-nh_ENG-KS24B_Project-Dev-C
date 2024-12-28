#ifndef DATATYPE_H
#define DATATYPE_H

// Cau truc thong tin danh muc
typedef struct {
    int id;               // ID danh muc
    char name[50];        // Ten danh muc
    char description[100]; // Mo ta danh muc
} Category;

// Cau truc thong tin san pham
typedef struct {
    int id;               // ID san pham
    char name[50];        // Ten san pham
    int categoryId;       // ID danh muc chua san pham
    float price;          // Gia san pham
    int quantity;         // So luong san pham
} Product;

// Cau truc thong tin nguoi dung
typedef struct {
    char email[100];      // Email nguoi dung
    char password[50];    // Mat khau nguoi dung
    int role;             // Vai tro (1: Admin, 2: Employee, 3: Customer)
} User;

#endif
