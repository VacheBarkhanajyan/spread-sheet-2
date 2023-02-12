#ifndef spread_sheet_h
#define spread_sheet_h

#include <string>
#include <map>
#include "Cell.h"
#include "Date.h"

class SpreadSheet {
public:
    SpreadSheet(int, int);
    void set_cell_at(int, int, Cell*);
    Cell* get_cell_at(int, int) const;
    void add_row(int);
    void remove_row(int);
    void add_column(int);
    void remove_column(int);
    void swap_raws(int, int);
    void swap_columns(int, int);
    
private:
    std::map<int, std::map<int, Cell*>> m_cells;
    int m_rows;
    int m_columns;
};
#endif