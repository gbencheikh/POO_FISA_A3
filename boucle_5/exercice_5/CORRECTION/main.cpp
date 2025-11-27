#include <iostream>

#include "physics_vector.h"
#include "geometry_vector.h"
#include "UI_test.h"

#include <cassert>


void test() {
	// To be completed. Use assertions to validate your implementation.
	
	geometry::Vector v1(3.0, 4.0);
	test::ASSERT_EQ(v1.getMagnitude(), 5.0, "Geometry: Magnitude test");
	test::ASSERT_EQ(v1.getPosition().x, 3.0, "Geometry: Get Position test x");
	test::ASSERT_EQ(v1.getPosition().y, 4.0, "Geometry: Get Position test y");
	
	physics::Vector v2(10., M_PI);
	
	test::ASSERT_EQ(v2.getMagnitude(),10.0, "Physics: Magniture test");
	test::ASSERT_EQ(v2.getPosition().x, -10.0, "Physics: Get Position test x");
}

int main() {
  test();

  return 0;
}
