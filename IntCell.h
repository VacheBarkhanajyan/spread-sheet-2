#ifndef int_cell_H
#define int_cell_H

#include <string>
#include "Cell.h"

class IntCell : public Cell {
public:
    void set_value(int);
    int get_int() const;
    std::string get_string_value() const override;
private:
    int m_value;
};
#endif