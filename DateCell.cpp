#include "DateCell.h"
#include "Cell.h"
#include "Date.h"
#include <string>
#include <sstream>

    void DateCell::set_value(Date d)
    {
        m_value = d;
    }
    Date DateCell::get_value() const
    {
        return m_value;
    }
    std::string DateCell::get_string_value() const 
    {
            std::string result = std::to_string(m_value.get_day());
            result += '.';
            result += std::to_string(m_value.get_month());
            result += '.';
            result += std::to_string(m_value.get_year());
            return result;
    }