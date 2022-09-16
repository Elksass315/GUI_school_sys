#pragma once
#include <iostream>

//#include <string>
//using namespace std;

ref class student
{
private:
    int rollnum;
    char* name;
    long long id;
    int age;
    float gpa;

public:

    int get_data(int r_nu , std::string n , long long i ,int ag , float gp);

    std::string show_data( long long rollnum);
    
   int delete_data(long long rollnum);

   int modify_data(int r_nu, std::string n, long long i, int ag, float gp);

    int count();

};


