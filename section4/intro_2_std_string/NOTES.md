### Strings

#### Best practice

If using std::getline to read strings, use the std::ws input manipulator to ignore leading whitespace.

#### Key insight

Using the extraction operator (>>) with std::cin ignores leading whitespace.
std::getline does not ignore leading whitespace unless you use input manipulator std::ws.
