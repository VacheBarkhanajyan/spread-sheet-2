#include "Cell.h"
#include <iostream>
    Cell::Cell()
    :m_color(Color::white)
    {
        //std::cout << "base ctor" << std::endl;
    }

    void Cell::set_color(Color& cl)
    {
        m_color = cl;
    }

    Color Cell::get_color() const
    {
        return m_color;
    }





