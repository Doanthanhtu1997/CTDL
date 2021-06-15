#include <stdio.h>
#include <iostream>
#include "SV.cpp"
#include "Course.cpp"
#include <iostream>
#include "function.cpp"
using namespace std;
void docfile();
int main(){
    // SV sv1("sv0001","Nguyen Van Dat");
    // sv1.setCourse("mh001","toan",9);
    // cout << sv1.toString();
    // // cout << sv1.getMaHV << "\n" << sv1.getHoTenHV << endl;
    do
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
            cout << "       Danh sach hoc vien." << endl; 
            break;
        case 2: 
            cout << "       Them 1 hoc vien moi." << endl; 
            break;
        case 3: 
            cout << "       Xoa hoc vien." << endl; 
            break;
        case 4: 
            cout << "       Sap xep theo DM1." << endl; 
            break;
        case 5: 
            cout << "       Sap xep theo DM2." << endl; 
            break;
        case 6: 
            cout << "       Sap xep theo DM1 và DM2." << endl; 
            break;
        case 7: 
            cout << "       Danh sach theo ma mon hoc." << endl; 
            break;
        case 8: 
            cout << "       Them mon hoc phu cho sv." << endl; 
            break;
        case 9: 
            cout << "       Nhap diem mon hoc phụ." << endl; 
            break;
        case 10: 
            cout << "       Ghi vao file." << endl; 
            break;
        default:
            cout << "       Vui long nhap lai: ";
            cin >> i;
            break;
        }
        if(i == 0)
            exit(0);
    } while (true);
    
    return 0;
}
void docfile(){
    // FILE *fi = fopen("hocvien.txt","r");
    // if(fi == NULL){
    //     cout << "file khong ton tai.";
    //     exit(0);
    // }
    // char n = fgetc(fi) - '0';
    // char temp = fgetc(fi);
    // int i = 0, j = 0;
    // while(temp != EOF){
    //     if(temp == '0' || temp == '1'){
    //         if(j == n){
    //             j = 0;
    //             i++;
    //         }  
    //         A[i][j++] = temp -'0';
    //     }
    //     temp = fgetc(fi);
    // }
    // fclose(fi);
}