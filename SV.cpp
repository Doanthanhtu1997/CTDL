#pragma once
#include <iostream>
#include <string>
#include "MonHoc.cpp"
using namespace std;

class SV
{
    private:
        char maHV[8];
        char hotenHV[30];
        MonHoc monHoc[3];
    public:
        SV(){};   
        SV(string maHV, string hotenHV){
            this->maHV = maHV;
            this->hotenHV = hotenHV;
        }
        void setMonHoc(MonHoc monHoc){
            this->monHoc = monHoc;
        }
        void setMonHoc(string maMH, int diemMH){
            MonHoc monHoc(maMH, diemMH);
            this->monHoc = monHoc;
        }
        string getMaHV(SV sv){return sv.maHV;};
        void setMaHV(string maHV){
            this->maHV = maHV;
        }
        string getHoTenHV(SV sv){return sv.hotenHV;};
        void setHoTenHV(string hotenHV){
            this->hotenHV = hotenHV;
        }
        string toString(){
            return  "Ma HV: " + maHV
                    + "\nHo ten HV: " + hotenHV
                    +"\n" + monHoc.toString();
                    +"\n";
        }
        void displaySV(SV sv){
            cout << sv.maHV << "\n" << sv.hotenHV << sv.monHoc.toString() <<endl;
        }
        
};

