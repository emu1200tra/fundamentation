
#include <iostream>
#include<stdlib.h>


using namespace std;

struct linked_list{
    int value;
    linked_list *next;
};

int main()
{
    linked_list *first;
    first->value = 0;
    linked_list *second;
    first->next = second;
    second->value = 1;
    second->next = first;

    cout<<"�Ĥ@��value "<<endl<<first->value<<endl;
    cout<<"�ĤG��value "<<endl<<second->value<<endl;
    cout<<first->next->value<<endl;

    return 0;
}
