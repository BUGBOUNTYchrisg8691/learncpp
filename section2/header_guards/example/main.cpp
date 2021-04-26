#include "geometry.h"
#include "square.h"

int main() { return 0; }

// after preprocessing
/*
 * #ifndef SQUARE_H // square.h included from main.cpp,
 * #define SQUARE_H // SQUARE_H gets defined here
 *
 * // and all this content gets included
 * int getSquareSides()
 * {
 *     return 4;
 * }
 *
 * #endif // SQUARE_H
 *
 * #ifndef GEOMETRY_H // geometry.h included from main.cpp
 * #define GEOMETRY_H
 * #ifndef SQUARE_H // square.h included from geometry.h, SQUARE_H is already defined from above
 * #define SQUARE_H // so none of this content gets included
 *
 * int getSquareSides()
 * {
 *     return 4;
 * }
 *
 * #endif // SQUARE_H
 * #endif // GEOMETRY_H
 *
 * int main()
 * {
 *     return 0;
 * }
 */
