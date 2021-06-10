#pragma once
#include <iostream>
#include <string>
#include "Course.cpp"
using namespace std;

class SV
{
    private:
        string maHV;
        string hotenHV;
        Course course;
    public:
        SV(){};   
        SV(string maHV, string hotenHV){
            this->maHV = maHV;
            this->hotenHV = hotenHV;
        }
        void setCourse(Course course){
            this->course = course;
        }
        void setCourse(string maMH, string tenMH, int diemMH){
            Course course(maMH, tenMH, diemMH);
            this->course = course;
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
                    +"\n" + course.toString();
                    +"\n";
        }
        void displaySV(SV sv){
            cout << sv.maHV << "\n" << sv.hotenHV << sv.course.toString() <<endl;
        }
        
};

