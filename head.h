#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED

#pragma once

class MyString {
public:

    MyString(char *);
    int Size();
    void print();
    void add_symbol(int, char);
    void change_symbol(int, char);
    void deleting_symbol(int);
    void operator+(MyString);
    void operator=(char *);

private:
    char* str;
    int str_count;
};

#endif // HEAD_H_INCLUDED
