#include <stdio.h>
#include <iostream>
#include "SV.cpp"
#include <iostream>
#include "function.cpp"
using namespace std;
#define MAX 100
int main(){
    SV sv[max];
    int n = docFile(sv, fileName);
    while (true)
    {
        menu();
        cout << "Nhap: ";
        int i;
        cin >> i;
        switch (i)
        {
        case 0:
            cout << "Ban that xu muon thoat:" << "\n Nhap 0 de thoat.\n Nhap 1 de qua lai menu";
            cin >> i;
            break;
        case 1: 
            cout << "       1.Danh sach hoc vien." << endl;
            case1(sv, n);
            break;
        case 2: 
            cout << "       2.Them 1 hoc vien moi." << endl;
            case2();
            break;
        case 3: 
            cout << "       3.Xoa hoc vien." << endl; 
            break;
        case 4: 
            cout << "       4.Sap xep theo DM1." << endl; 
            break;
        case 5: 
            cout << "       5.Sap xep theo DM2." << endl; 
            break;
        case 6: 
            cout << "       6.Sap xep theo DM1 và DM2." << endl; 
            break;
        case 7: 
            cout << "       7.Danh sach theo ma mon hoc." << endl; 
            break;
        case 8: 
            cout << "       8.Them mon hoc phu cho sv." << endl; 
            break;
        case 9: 
            cout << "       9.Nhap diem mon hoc phụ." << endl; 
            break;
        case 10: 
            cout << "       10.Ghi vao file." << endl;
            ghiFile(sv, n, fileName);
            break;
        default:
            cout << "       Vui long nhap lai: ";
            cin >> i;
            break;
        }
        if(i == 0)
            exit(0);
    } 
    
    return 0;
}