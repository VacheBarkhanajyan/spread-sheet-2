    #include "StringCell.h"
    #include "Cell.h"
    
    void StringCell::set_value(const std::string& str)
    {
        m_value = str;
    }
    std::string StringCell::get_value() const
    {
        return m_value;
    }
    std::string StringCell::get_string_value() const 
    {
        return m_value;
    }