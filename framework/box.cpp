#include "box.hpp"
#include <glm/vec3.hpp>
#include <cmath>

Box::Box() :
Shape{"none"},
min_{0.0, 0.0, 0.0},
max_{1.0, 1.0, 1.0} {}

Box::Box(glm::vec3 const& min, glm::vec3 const& max) :
Shape{"box_mm"},
min_{min},
max_{max} {}

Box::Box(Box const& b) :
Shape{"box_copy"},
min_{b.min_},
max_{b.max_} {}

glm::vec3 Box::getmin()
{
	return min_;
}

glm::vec3 Box::getmax()
{
	return max_;
}

double Box::area() const
{
	return 2*(((max_.x - min_.x)*(max_.y - min_.y))
		+((max_.x - min_.x)*(max_.z - min_.z))+((max_.y - min_.y)*(max_.z - min_.z)));
}

double Box::volume() const
{
	return (max_.x - min_.x)*(max_.y - min_.y)*(max_.z - min_.z);

}

/*std::string const& Box::name() const
{
  return name_;
}

Color const& Box::color() const
{
  return color_;
}*/

std::ostream& Box::print(std::ostream& os) const
{
  os << "Box";
  Shape::print(os);

  return os;


}