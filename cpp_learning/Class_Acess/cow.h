#pragma once

#ifndef COW_H
#define COW_H
#include <string>
using namespace std ;
enum class cow_purpose{  meat , dairy ,hide , pet};


class cow {
private:
    string name;
    int age ;
    cow_purpose purpose ;

public:
    cow(string nami , int agi ,cow_purpose pur);
    string get_name() const;
    int get_age()const ;
    cow_purpose get_purpose() const;
    void set_age(int agi);
};


#endif // COW_H