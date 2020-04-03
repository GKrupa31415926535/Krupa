#ifndef LIST_LIST_H
#define LIST_LIST_H
#include <iostream>

class List {
    int lenght;
    double value;
    double* pointer = new double[lenght];


public:
    List();
    explicit  List(int lenght);
    List(int lenght, double value);
    ~List();
    List(const List &list2){lenght=list2.lenght; value=list2.value;pointer=list2.pointer;};

   void add(double new_value);
   bool isEmpty() const;
   void changeElement(int element_id, double new_value);
   int getLenght() const;
   void printList() const;
   void removeElement(int element_id);


};


#endif //LIST_LIST_H
