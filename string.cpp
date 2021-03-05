#include "head.h"
#include <iostream>
#include <string.h>

MyString::MyString(char * s) {
    str_count = strlen(s);
    str = new char[str_count + 1];
    strcpy(str, s);
}

int MyString::Size() {
    return str_count;
}

void MyString::print() {
    std::cout << str << std::endl;
}

void MyString::add_symbol(int position, char symbol) {
    char * buffer = new char[str_count + 1];
    strcpy(buffer, str);
    buffer[position] = symbol;
    for (int i = position; i < str_count; ++i) {
        buffer[i + 1] = str[i];
    }
    delete[] str;
    char * str = new char[strlen(buffer)];
    strcpy(str, buffer);
    delete[] buffer;
    str_count +=1;
}

void MyString::change_symbol(int position, char symbol) {
    str[position] = symbol;
}

void MyString::deleting_symbol(int position) {
    for(int i = position + 1; i < str_count; ++i) {
        str[i - 1] = str[i];
    }
    str[str_count - 1] = '\0';
    str_count -= 1;
}

void MyString::operator+(MyString str2) {
    char* buffer = new char[str_count + str2.str_count - 1];
    strcpy(buffer, str);
    strcat(buffer, str2.str);
    delete[] str;
    char * str = new char[strlen(buffer)];
    strcpy(str, buffer);
    delete[] buffer;
    str_count = strlen(buffer);
}

void MyString::operator=(char * str2) {
    delete[] str;
    char * str = new char[strlen(str2)];
    strcpy(str, str2);
    str_count = strlen(str2);
}
