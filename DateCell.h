#ifndef date_cell_h
#define date_cell_h


#include <string>
#include "Cell.h"
#include "Date.h"

class DateCell : public Cell
{
public:
    void set_value(Date);
    Date get_value() const;
    std::string get_string_value() const override;
private:
    Date m_value;
};

#endif