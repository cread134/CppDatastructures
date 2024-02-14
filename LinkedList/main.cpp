#include<iostream>
#include "LinkedList.h"

int main(int argc, char const *argv[])
{
    LinkedList list;
    int currentInput;
    while (true)
    {
        std::cout << "Enter a number to insert or -1 to quit: ";
        std::cin >> currentInput;
        if (currentInput == -1)
        {
            break;
        }
        list.insert(currentInput);
    }
    
    list.print();
    return 0;
}
