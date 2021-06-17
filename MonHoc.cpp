#pragma once
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class MonHoc
{
    private:
        char maMH[4];
        int diemMH;

    public:
        MonHoc(){};   
        MonHoc(string maMH, int diemMH){
            this->maMH = maMH;
            this->diemMH = diemMH;
        }
        string getMaMH(MonHoc monHoc){return MonHoc.maMH;};
        void setMaMH(string maMH){
            this->maMH = maMH;
        }
        int getDiemMH(MonHoc monHoc){return monHoc.diemMH;};
        void setDiemMH(int diemMH){
            this->diemMH = diemMH;
        }
        string toString(){
            string result;          
            ostringstream convert;   
            convert << diemMH;      
            result = convert.str(); 
            return "MaMH: " + maMHe
                    +"\n diemMH: " + result
                    +"\n";
        }
        
};

