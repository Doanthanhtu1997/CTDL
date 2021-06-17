#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include <string.h>
#define MAX 100
using namespace std;

class SV
{
    private:
        char maHV[8];
        char hotenHV[30];
        char maMH[4];
        int diemMH;
    public:
        SV(){};   
        SV(char maHV[], char hotenHV[]){
            strcpy(this->maMH, maMH);
            strcpy(this->hotenHV, hotenHV);
        }
        SV(char maHV[], char hotenHV[], char maMH[], int diemMH){
            strcpy(this->maMH, maMH);
            strcpy(this->hotenHV, hotenHV);
            strcpy(this->maMH, maMH);
            this->diemMH = diemMH;
        }
        void setMonHoc1(char maMH[], int diemMH){
            strcpy(this->maMH, maMH);
            this->diemMH = diemMH;
        }
        
        string getMaHV(SV sv){return sv.maHV;};
        void setMaHV(char maHV[]){
            strcpy(this->maHV, maHV);
        }
        int getDiemMH(SV sv){return sv.diemMH;};
        void setDiemMH(int diemMH){this->diemMH = diemMH;};
        string getHoTenHV(SV sv){return sv.hotenHV;};
        void setHoTenHV(char hotenHV[]){
            strcpy(this->hotenHV, hotenHV);
        }
        string toString(){
            string result;          
            ostringstream convert;   
            convert << diemMH;      
            result = convert.str();
            return  "Ma HV: " + string(maHV)
                    + "\nHo ten HV: " + string(hotenHV)
                    + "\nMaMH: " + string(maMH)
                    + "\n diemMH: " + result
                    + "\n";
        }
        
};

