#include "fun.h"

Widget::Widget(int size) : d_size(size) {};

const int& Widget::size() const
{
    return d_size;
}

void Widget::addOne()
{
    ++d_size;
}