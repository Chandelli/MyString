#include "head.h"

int main()
{
    MyString str("word");
    str.add_symbol(3, 'l');
    str.print();

    MyString str2("house");
    str2.change_symbol(0, 'm');
    str2.print();

    str.deleting_symbol(3);
    str.print();

    str2 + str;
    str2.print();

    str2 + " day";
    str2.print();

    str2 = "hello";
    str2.print();
    return 0;
}
