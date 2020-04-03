#include <iostream>
#include "List.cpp"
int main() {
    List list(5,10.5);
    list.add(7);
   list.printList();
    list.changeElement(2,16);
    list.printList();
    std::cout << list.getLenght();
    std::cout<<list.isEmpty();
list.removeElement(5);
list.printList();
    return 0;
}
