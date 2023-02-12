#include "SpreadSheet.h"
#include <iostream>

SpreadSheet::SpreadSheet(int rows, int cols)
:m_rows(rows),
 m_columns(cols)
{}

void SpreadSheet::set_cell_at(int row, int col, Cell* cl)
{
    m_cells[row][col] = cl;
}

Cell* SpreadSheet::get_cell_at(int row, int col) const
{
    if (m_cells.count(row) && m_cells.at(row).count(col)) 
    {
        return m_cells.at(row).at(col);
    }
    return nullptr;
}

void SpreadSheet::add_row(int row)
{
    for(int i = m_rows - 1; i >= row; --i) 
    {
        for(int j = 0; j < m_columns; ++j)
        {
            if(m_cells[i][j])
            {
                m_cells[i + 1][j] = m_cells[i][j];
                m_cells[i].erase(j);
            }
        }
    }
    m_rows++;
}

void SpreadSheet::remove_row(int row)
{
    m_cells[row].clear();
    for(int i = row +1; i < m_rows; ++i)
    {
        for(int j = 0; j < m_columns; ++j)
        {
            if(m_cells[i][j])
            {
                m_cells[i-1][j] = m_cells[i][j];
                m_cells[i].erase(j);
            }
        }
    }
    m_rows--;
}

void SpreadSheet::add_column(int col)
{
    for(int i = 0; i < m_rows; ++i)
    {
        for(int j = m_columns - 1; i >= col; --j)
        {
            if(m_cells[i][j])
            {
                m_cells[i][j+1] = m_cells[i][j];
                m_cells[i].erase(j);
            }
        }
    }
    m_columns++;
}

void SpreadSheet::remove_column(int col)
{
    m_columns--;
    for(int i = 0; i < m_rows; ++i)
    {
        m_cells[i].erase(col);
        for(int j = col; i < col; --j)
        {
            if(m_cells[i][j+1])
            {
                m_cells[i][j] = m_cells[i][j + 1];
                m_cells[i].erase(j + 1);
            }
        }
    }
    
}

void SpreadSheet::swap_raws(int row1, int row2)
{
    m_cells[row1].swap(m_cells[row2]);
}

void SpreadSheet::swap_columns(int col1, int col2)
{
    for (int i = 0; i < m_cells.size(); ++i) {
       std::swap(m_cells[i][col1],m_cells[i][col2]);
    }
}
