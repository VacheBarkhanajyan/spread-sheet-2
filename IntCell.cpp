   #include "IntCell.h"
   #include "Cell.h"
   #include <string>
    
void IntCell::set_value(int value)
{
    m_value = value;
}

int IntCell::get_int() const
{
    return m_value;
}

std::string IntCell::get_string_value() const
{
    std::string result = "";
    int tmp = m_value;
    while (tmp != 0)
    {
        result.insert(0, 1, (char)(tmp % 10) + '0');
        tmp /= 10;
    }
    return result;
}

