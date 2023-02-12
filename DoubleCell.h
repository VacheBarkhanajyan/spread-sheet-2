#ifndef double_cell_h
#define double_cell_h

#include "Cell.h"

class DoubleCell : public Cell
{
public:
    void set_value(double);
    double get_value() const;
    std::string get_string_value() const override;
private:
    double m_value;
};

#endif