#ifndef BUW_SHAPE_HPP
#define BUW_SHAPE_HPP
#include <string>
#include "color.hpp"


class Shape
{
	public:
    Shape();
    Shape(std::string const& name);
    virtual ~Shape();
		virtual double area() const = 0;
		virtual double volume() const = 0;
   std::string const& name() const;
   Color const& color() const;
    virtual std::ostream& print(std::ostream& os) const;

  private:
    std::string name_;
    Color color_;

};

std::ostream& operator <<(std::ostream& os, Shape const& s);
#endif