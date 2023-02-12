#ifndef cell_H
#define cell_H

#include <string>
enum class Color {green, red, black, yellow, white};

    class Cell {
public:
    Cell();
    virtual ~Cell() = default;
    void set_color(Color&);
    Color get_color() const;
    virtual std::string get_string_value() const = 0;
private:
    Color m_color;

};

#endif