#include "Header.hpp"

std::ostream& operator<<(std::ostream& out, const Harvest& obj)
{
    return out << obj.name_ << " Color: " << obj.color_ <<
        " Weigth: " << obj.weigth_;
}

string Harvest::GetColor() const
{
    return color_;
}
string Harvest::GetName()const
{
    return name_;
}


