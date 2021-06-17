#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include <string.h>
using namespace std;

class SV
{
    private:
        char maHV[8];
        char hotenHV[30];
        char maMH1[4];
        int diemMH1;
        char maMH2[4];
        int diemMH2;
        char maMHPhu[4];
        int diemMHPhu;
    public:
        SV(){};   
        SV(char maHV[], char hotenHV[]){
            strcpy(this->maHV, maHV);
            strcpy(this->hotenHV, hotenHV);
        }
        string getMaHV(){return maHV;};
        void setMaHV(char maHV[]){
            strcpy(this->maHV, maHV);
        }
        string getHoTenHV(){return hotenHV;};
        void setHoTenHV(char hotenHV[]){
            strcpy(this->hotenHV, hotenHV);
        }
        void setMonHoc2(char maMH[], int diemMH){
            strcpy(this->maMH2, maMH);
            this->diemMH2 = diemMH;
        }
        void setMonHocPhu(char maMH[], int diemMH){
            strcpy(this->maMHPhu, maMH);
            this->diemMHPhu = diemMH;
        }
        void setMonHoc1(char maMH[], int diemMH){
            strcpy(this->maMH1, maMH);
            this->diemMH1 = diemMH;
        }
        string getMaMH1(){return maMH1;};
        void setMaMH1(char maMH[]){strcpy(this->maMH1, maMH);};
        string getMaMH2(){return maMH2;};
        void setMaMH2(char maMH[]){strcpy(this->maMH2, maMH);};
        string getMaMHPhu(){return maMHPhu;};
        void setMaMHPhu(char maMH[]){strcpy(this->maMHPhu, maMH);};

        int getDiemMH1(){return diemMH1;};
        void setDiemMH1(int diemMH){this->diemMH1 = diemMH;};
        int getDiemMH2(){return diemMH2;};
        void setDiemMH2(int diemMH){this->diemMH2 = diemMH;};
        int getDiemMHPhu(){return diemMHPhu;};
        void setDiemMHPhu(int diemMH){this->diemMHPhu = diemMH;};
        string toString(){
            string result1;          
            ostringstream convert;   
            convert << diemMH1;      
            result1 = convert.str();
            string result2;
            convert << diemMH2;      
            result2 = convert.str();
            string resultPhu;
            convert << diemMHPhu;      
            resultPhu = convert.str();
            return  "Ma HV: " + string(maHV)
                    + "\nHo ten HV: " + string(hotenHV)
                    + "\nMa MH1: " + string(maMH1)
                    + "\n diem MH1: " + result1
                    + "\nMa MH2: " + string(maMH2)
                    + "\n diem MH2: " + result2
                    + "\nMa MH phu: " + string(maMHPhu)
                    + "\n diem MH phu: " + resultPhu
                    + "\n";
        }
        
};

