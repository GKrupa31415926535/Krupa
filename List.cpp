#include "List.h"
List::List()
{
    this->lenght=0;
}
List::List(int lenght)
{
    this->lenght=lenght;
    for(int i=0; i<lenght; i++)
    {
        pointer[i]=1.0;
    }
}

List::List(int lenght, double value): lenght(lenght), value(value)
{
    this->lenght=lenght;
    for(int i=0; i<lenght; i++)
    {
        pointer[i]=value;
    }

}


List::~List()
{
    delete this->pointer;
    pointer= NULL;
}


void List::printList() const
{
    for(int i=0; i<lenght;i++)
    {
        std::cout << pointer[i] <<std::endl;
    }
}

int List::getLenght() const
{
    return this->lenght;
}

bool List::isEmpty() const
{
    if(this->lenght == 0) return true;
    return false;
}

void List::add(double new_value)
{
    double* temp = new double[lenght+1];
    for(int i=0; i < lenght;i++)
    {
        temp[i]=pointer[i];
    };
    delete [] pointer;
    temp[lenght]=new_value;
    pointer=temp;
    temp=NULL;
    lenght=lenght+1;
}

void List::changeElement(int element_id, double new_value)
{
    pointer[element_id]=new_value;
}

void List::removeElement(int element_id)
{
    int j=0;
    double* temp=new double[lenght-1];
    for(int i=0;i<lenght-1;i++)
    {

        if(i==element_id)
        {
            j++;
            temp[i]=pointer[j];
        }
        else{
            temp[i]=pointer[j];
        }
        j++;
    }
    delete pointer;
    pointer=temp;
    temp=NULL;
    lenght--;
}