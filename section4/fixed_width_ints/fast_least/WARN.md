## Warning: std::int8_t and std::uint8_t may behave like chars instead of integers

*Note:* We talk more about chars in lesson (4.11 -- Chars).
Due to an oversight in the C++ specification, most compilers define and treat std::int8_t and std::uint8_t (and the corresponding fast and least fixed-width types) identically to types signed char and unsigned char respectively. Consequently, std::cin and std::cout may work differently than you’re expecting. Here’s a sample program showing this:

```
#include <cstdint>
#include <iostream>

int main() {
    std::int8_t myint{65};
    std::cout << myint;

    return 0;
}
```

On most systems, this program will print ‘A’ (treating myint as a char). However, on some systems, this may print 65 as expected.

For simplicity, it’s best to avoid std::int8_t and std::uint8_t (and the related fast and least types) altogether (use std::int16_t or std::uint16_t instead). However, if you do use std::int8_t or std::uint8_t, you should be careful of anything that would interpret std::int8_t or std::uint8_t as a char instead of an integer (this includes std::cout and std::cin).

Hopefully this will be clarified by a future draft of C++.

### Warning

*Avoid the 8-bit fixed-width integer types. If you do use them, note that they are often treated like chars.*
