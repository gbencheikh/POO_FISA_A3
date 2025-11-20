#include <gtest/gtest.h>
#include "CORRECTION/rectangle.h"
#include "CORRECTION/carre.h"

// ========================
// Tests Rectangle
// ========================

TEST(RectangleTest, AireEtPerimetre) {
    Rectangle r(4.0, 6.0);

    EXPECT_DOUBLE_EQ(r.aire(), 24.0);
    EXPECT_DOUBLE_EQ(r.perimetre(), 20.0);
}

TEST(RectangleTest, Getters) {
    Rectangle r(3.5, 7.2);

    EXPECT_DOUBLE_EQ(r.getLargeur(), 3.5);
    EXPECT_DOUBLE_EQ(r.getLongueur(), 7.2);
}

// ========================
// Tests Carre
// ========================

TEST(CarreTest, AireEtPerimetre) {
    Carre c(5.0);

    EXPECT_DOUBLE_EQ(c.aire(), 25.0);
    EXPECT_DOUBLE_EQ(c.perimetre(), 20.0);
}

TEST(CarreTest, Getter) {
    Carre c(4.3);

    EXPECT_DOUBLE_EQ(c.getCote(), 4.3);
}
