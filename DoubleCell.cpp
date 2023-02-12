#include "Cell.h"
#include "DoubleCell.h"
#include <sstream>
#include <string>

void DoubleCell::set_value(double value)
{
 m_value = value;
}
double DoubleCell::get_value() const
{
    return m_value;
}
std::string DoubleCell::get_string_value() const 
{
    std::stringstream ss;
    ss << m_value;
    std::string s = ss.str();
    return s;
}