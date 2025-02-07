#include "Header.hpp"

std::ostream& operator<<(std::ostream& out, const Harvest& obj)
{
    return out << obj.name_ << " Volume: " << obj.volume_ <<
        " Weigth: " << obj.weigth_;
}

double Harvest::Volume() const
{
    return volume_;
}
string Harvest::Name()const
{
    return name_;
}
