#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "box.hpp"
#include "sphere.hpp"

TEST_CASE("aufgabe2_min_max_box", "[a2_min_max_box]")
{
  Box b{{0.0, 2.0, 4.0}, {4.0, 5.0, 8.0}};
  glm::vec3 minimum{0.0, 2.0, 4.0};
  glm::vec3 maximum{4.0, 5.0, 8.0};
  REQUIRE(b.getmin() == minimum);
  REQUIRE(b.getmax() == maximum);
}

TEST_CASE("aufgabe2_area_volume_box_default", "[a2_area_volume_box_default]")
{
  Box b{};
  REQUIRE(b.area() == Approx(6.0));
  REQUIRE(b.volume() == Approx(1.0));
}

TEST_CASE("aufgabe2_area_volume_box", "[a2_area_volume_box]")
{
  Box b{{0.0, 2.0, 4.0}, {4.0, 1.0, 0.0}};
  REQUIRE(b.area() == Approx(-32.0));
  REQUIRE(b.volume() == Approx(16.0));
}

TEST_CASE("aufgabe2_center_radius", "[a2_center_radius_sphere]")
{
  Sphere s{{0.0, 1.0, 2.0}, {3.0}};
  glm::vec3 v3{0.0, 1.0, 2.0};
  REQUIRE(s.getcenter() == v3);
  REQUIRE(s.getradius() == 3.0);
}

TEST_CASE("aufgabe2", "[a2_area_volume_sphere]")
{
  Sphere s{};
  REQUIRE(s.area() == Approx(12.566370));
  REQUIRE(s.volume() == Approx(4.18879));
}

TEST_CASE("aufgabe5", "[5_Sphere area_volume]")
{
  Sphere s{{0.0, 1.0, 2.0}, {3.0}};
  std::cout << s << std::endl;
}

int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
