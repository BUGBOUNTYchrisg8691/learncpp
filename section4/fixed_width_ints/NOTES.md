## Fixed-width integers

To help with cross-platform portability, C99 defined a set of fixed-width integers (in the stdint.h header) that are guaranteed to have the same size on any architecture.

**These are defined as follows:**

| Name	          | Type	              | Range	                                                  | Notes                                                          |
|:----------------|:-------------------:|:-------------------------------------------------------:|:---------------------------------------------------------------|
| *std::int8_t*	  | **1 byte signed**	  | -128 to 127	                                            | Treated like a signed char on many systems. See note below.    |
| *std::uint8_t*  | **1 byte unsigned** | 0 to 255                                                | Treated like an unsigned char on many systems. See note below. |
| *std::int16_t*  | **2 byte signed**   | -32,768 to 32,767                                       |                                                                |
| *std::uint16_t* | **2 byte unsigned** | 0 to 65,535	                                            |                                                                |
| *std::int32_t*  | **4 byte signed**   | -2,147,483,648 to 2,147,483,647                         |                                                                |
| *std::uint32_t*	| **4 byte unsigned**	| 0 to 4,294,967,295                                      |                                                                |
| *std::int64_t*  | **8 byte signed**   | -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 |                                                                |
| *std::uint64_t*	| **8 byte unsigned**	| 0 to 18,446,744,073,709,551,615	                        |                                                                |

C++ officially adopted these fixed-width integers as part of C++11. They can be accessed by including the cstdint header, where they are defined inside the std namespace. Here’s an example:

```
#include <cstdint>
#include <iostream>

int main() {
    std::int16_t i{5};
    std::cout << i;
    return 0;
}
```

The fixed-width integers have two downsides: First, they are optional and only exist if there are fundamental types matching their widths and following a certain binary representation. Using a fixed-width integer makes your code less portable, it might not compile on other systems.

Second, if you use a fixed-width integer, it may also be slower than a wider type on some architectures. If you need an integer to hold values from -10 to 20, you might be tempted to use std::int8_t. But your CPU might be better at processing 32 bit wide integers, so you just lost speed by making a restriction that wasn’t necessary.

#### Warning
*The above fixed-width integers should be avoided, as they may not be defined on all target architectures.*

## Fast and least integers

To help address the above downsides, C++ also defines two alternative sets of integers.

The fast type (std::int_fast#_t) provides the fastest signed integer type with a width of at least # bits (where # = 8, 16, 32, or 64). For example, std::int_fast32_t will give you the fastest signed integer type that’s at least 32 bits.

The least type (std::int_least#_t) provides the smallest signed integer type with a width of at least # bits (where # = 8, 16, 32, or 64). For example, std::int_least32_t will give you the smallest signed integer type that’s at least 32 bits.

Here’s an example from the author’s Visual Studio (32-bit console application):

```
#include <cstdint>
#include <iostream>

int main() {
	std::cout << "fast 8: " << sizeof(std::int_fast8_t) * 8 << " bits\n";
	std::cout << "fast 16: " << sizeof(std::int_fast16_t) * 8 << " bits\n";
	std::cout << "fast 32: " << sizeof(std::int_fast32_t) * 8 << " bits\n";

	std::cout << "least 8: " << sizeof(std::int_least8_t) * 8 << " bits\n";
	std::cout << "least 16: " << sizeof(std::int_least16_t) * 8 << " bits\n";
	std::cout << "least 32: " << sizeof(std::int_least32_t) * 8 << " bits\n";

	return 0;
}
```
