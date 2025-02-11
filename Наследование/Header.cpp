#include "Header.hpp"

std::ostream& operator<<(std::ostream& out, const Harvest& obj)
{
    return out << obj.name_ << " Volume: " << obj.volume_ <<
        " Weigth: " << obj.weigth_;
}

double Harvest::GetVolume() const
{
    return volume_;
}
string Harvest::GetName()const
{
    return name_;
}
