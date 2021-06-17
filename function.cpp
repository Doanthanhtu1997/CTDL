#pragma once
#include <iostream>
#include <string>
#include "SV.cpp"
using namespace std;
#define MAX 100
char fileName[] = "hovien.txt";
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
void case1(SV sv[], int n){
    cout << "MSSV       Ho Ten HV       DM1     DM2         DM phu" << endl;
    for(int i = 0; i < n; i++){
        cout << sv[i].getMaHV() << "     " << sv[i].getHoTenHV() << "     " << sv[i].getMaMH1() << "     " << sv[i].getDiemMH1() << endl; 
    }
};
void case2(){
    SV sv;
    char ma[8] = "sv0001";
    sv.setMaHV(ma);
    char ten[30] = "Nguyen Van Dat";
    sv.setHoTenHV(ten);
    char mamon[5] = "mh01";
    sv.setMaMH1(mamon);
    sv.setDiemMH1(6);
    cout << sv.toString() << endl;};
void case3(){};
void case4(){};
void case5(){};
//dat
void case6(){};
void case7(){};
void case8(){};
void case9(){};
// void case10(SV sv[], int n){
//     ghiFile(sv, n, fileName);
// };

int docFile(SV a[], char fileName[]) {
        FILE * fp;
        int i = 0;
        fp = fopen (fileName, "r");
        cout << "Chuan bi doc file: "; puts(fileName);
        // doc thong tin sinh vien
        while (!feof(fp)) {
            fscanf(fp, "%8s", &a[i].setMaHV());
            fscanf(fp, "%30s", &a[i].setHoTenHV()); 
            fscanf(fp, "%5s", &a[i].setMaMH1());
            fscanf(fp, "%d" &a[i].setDiemMH1());
            fscanf(fp, "%5s", &a[i].setMaMH2());
            fscanf(fp, "%d", &a[i].setDiemMH2()); 
           i++;
           cout << " Doc ban ghi thu: " << i << endl;
        }
        cout << " So luong sinh vien co san trong file la: " << i << endl;
        cout << endl;
        // tra ve so luong sinh vien duoc doc tu file
        return i;
        fclose (fp);
};

void ghiFile(SV a[], int n, char fileName[]) {
    FILE * fp;
    fp = fopen (fileName,"w");
    for(int i = 0; i < n; i++){
        fprintf(fp, "%8s %30s\n", &a[i].getMaHV(), &a[i].getHoTenHV());
        fprintf(fp, "%8s %30s\n", &a[i].getMaMH1(), &a[i].getDiemMH1());
        fprintf(fp, "%5s %d\n", &a[i].getMaMH2(), &a[i].getDiemMH2());
        fprintf(fp, "%5s %d\n", &a[i].getMaMHPhu(), &a[i].getDiemMHPhu());
    }
    fclose (fp);
}