#pragma once
#include <iostream>
#include <string>
#include "MonHoc.cpp"
using namespace std;

void menu(){
    cout << "----------CHUONG TRINH QUAN LY SINH VIEN C/C++---------\n";
    cout << "*************************MENU**************************\n";
    cout << "1.Danh sach hoc vien." << endl; //đọc từ file
    cout << "2.Them 1 hoc vien moi." << endl; // chỉ nhập, không ghi vào file
    cout << "3.Xoa hoc vien." << endl; // không xóa trong file
    cout << "4.Sap xep theo DM1." << endl; 
    cout << "5.Sap xep theo DM2." << endl; 
    cout << "6.Sap xep theo DM1 và DM2." << endl; 
    cout << "7.Danh sach theo ma mon hoc." << endl; 
    cout << "8.Them mon hoc phu cho sv." << endl; 
    cout << "9.Nhap diem mon hoc phu." << endl; 
    cout << "10.Ghi vao file." << endl; // lưu vào file
    cout << "0.Thoat." << endl;
};
//Tu
void cas1(){};
void cas2(){};
void cas3(){};
void cas4(){};
void cas5(){};
//dat
void cas6(){};
void cas7(){};
void cas8(){};
void cas9(){};
void cas10(){};