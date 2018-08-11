#include <iostream>
#include <vector>
#include "fun.h"

int main(int argc, char** argv)
{
    Widget myWidget(5);
    std::cout << myWidget.size() << '\n';

    myWidget.addOne();
    myWidget.addOne();
    myWidget.addOne();

    std::cout << myWidget.size() << '\n';
}