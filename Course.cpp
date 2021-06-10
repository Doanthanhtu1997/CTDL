#pragma once
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Course
{
    private:
        string maMH;
        string tenMH;
        int diemMH;

    public:
        Course(){};   
        Course(string maMH, string tenMH){
            this->maMH = maMH;
            this->tenMH = tenMH;
        }
        Course(string maMH, string tenMH, int diemMH){
            this->maMH = maMH;
            this->tenMH = tenMH;
            this->diemMH = diemMH;
        }
        string getMaMH(Course course){return course.maMH;};
        void setMaMH(string maMH){
            this->maMH = maMH;
        }
        string getTenMH(Course course){return course.tenMH;};
        void settenMH(string tenMH){
            this->tenMH = tenMH;
        }
        int getDiemMH(Course course){return course.diemMH;};
        void setDiemMH(int tenMH){
            this->tenMH = tenMH;
        }
        string toString(){
            string result;          
            ostringstream convert;   
            convert << diemMH;      
            result = convert.str(); 
            return "MaMH: " + maMH
                    + "\n tenMH: " + tenMH
                    +"\n diemMH: " + result
                    +"\n";
        }
        void displayCourse(Course course){
            cout << course.maMH << "\n" << course.tenMH << endl;
        }
        
};

