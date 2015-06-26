#include "sphere.hpp"
#include <glm/vec3.hpp>
#include <cmath>

Sphere::Sphere() :
Shape{"none"},
center_{0.0, 0.0, 0.0},
radius_{1.0} {}

Sphere::Sphere(glm::vec3 const& center, double radius) :
Shape{"sphere_radius"},
center_{center},
radius_{radius} {}

Sphere::Sphere(Sphere const& x) :
Shape{"sphere_copy"},
center_{x.center_},
radius_{x.radius_} {} 

double Sphere::getradius()
{
	return radius_;
}

glm::vec3 Sphere::getcenter()
{
	return center_;
}

double Sphere::area() const
{
	double a = 4*M_PI*radius_*radius_;
	return a;
}

double Sphere::volume() const
{
	double v = (4.0/3.0)*M_PI*radius_*radius_*radius_;
	return v;
}

/*std::string const& Sphere::name() const
{
  return name_;
}

Color const& Sphere::color() const
{
  return color_;
}*/

std::ostream& Sphere::print(std::ostream& os) const
{
  os << "Sphere";
  Shape::print(os);
  os << radius_;

  return os;
}
