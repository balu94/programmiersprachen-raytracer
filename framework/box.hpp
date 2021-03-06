#ifndef BUW_BOX_HPP
#define BUW_BOX_HPP
#include "shape.hpp"
#include <glm/vec3.hpp>

class Box : public Shape
{
public:
	Box();
	Box(glm::vec3 const& min, glm::vec3 const& max);
	Box(Box const& b);
	glm::vec3 getmin();
	glm::vec3 getmax();
	double area() const override;
	double volume() const override;
/*  std::string const& name() const override;
  Color const& color() const override;*/
  std::ostream& print(std::ostream& os) const override;
private:
	glm::vec3 min_;
	glm::vec3 max_;
};

#endif