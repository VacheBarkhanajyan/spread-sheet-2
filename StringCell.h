#ifndef string_cell_h
#define string_cell_h

#include <string>
#include "Cell.h"
class StringCell : public Cell
{
public:
    void set_value(const std::string&);
    std::string get_value() const;
    std::string get_string_value() const override;
private:
    std::string m_value;
};

#endif