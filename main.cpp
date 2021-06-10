#include <stdio.h>
#include <iostream>
#include "SV.cpp"
#include "Course.cpp"
#include <iostream>
using namespace std;
void docfile();
int main(){
    SV sv1("sv0001","Nguyen Van Dat");
    sv1.setCourse("mh001","toan",9);
    cout << sv1.toString();
    // cout << sv1.getMaHV << "\n" << sv1.getHoTenHV << endl;
    return 0;
}
void docfile(){
    FILE *fi = fopen("hocvien.txt","r");
    if(fi == NULL){
        cout << "file khong ton tai.";
        exit(0);
    }
    n = fgetc(fi) - '0';
    char temp = fgetc(fi);
    int i = 0, j = 0;
    while(temp != EOF){
        if(temp == '0' || temp == '1'){
            if(j == n){
                j = 0;
                i++;
            }  
            A[i][j++] = temp -'0';
        }
        temp = fgetc(fi);
    }
    fclose(fi);
}