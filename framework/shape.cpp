#include <shape.hpp>

Shape::Shape():
name_{"none"},
color_{0, 0, 0} {}

Shape::Shape(std::string const& name):
name_{"name"},
color_{0, 0, 0} {}

Shape::~Shape()
{
  std::cout << "Shape gelöscht" << std::endl; 
}

std::string const& Shape::name() const
{
  return name_;
}

Color const& Shape::color() const
{
  return color_;
}

std::ostream& Shape::print(std::ostream& os) const
{
  os << "Sphere";
  os << name();

  return os;
}


std::ostream& operator <<(std::ostream& os, Shape const& s)
{
  return s.print(os);
}