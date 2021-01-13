#include <iostream>
#include "sq_list.h"
using std:: cout;
using std:: cin;
using std:: endl;

int main()
{
    SqList list;
    InitSqList(&list, 10);
    InsertSqList(&list, 8, 2);
    DeleteSqList(&list, 2);
    DisplaySqList(&list);
    return 0;
}