# Array Generator Library

## Overview
The `array_generator` library is a lightweight C++ library designed for generating and manipulating arrays. It provides a variety of utility functions inspired by Python's list comprehensions and functional programming constructs. The library is implemented as a header-only library, making it easy to integrate into any C++ project.

## Features
The library includes the following functionalities:
- **`range`**: Generate a range of numbers.
- **`filter`**: Filter elements in an array based on a condition.
- **`map`**: Apply a function to all elements in an array.
- **`reduce`**: Reduce an array to a single value using a binary function.
- **`zip`**: Combine two arrays into a single array of pairs.
- **`enumerate`**: Add an index to each element in an array.
- **`all`**: Check if all elements in an array are true.
- **`any`**: Check if any element in an array is true.
- **`sorted`**: Sort an array.
- **`reversed`**: Reverse an array.
- **`sum`**: Sum all elements in an array.
- **`max`**: Find the maximum element in an array.
- **`min`**: Find the minimum element in an array.

## License
This library is distributed under the MIT License. See the `LICENSE` file for more details.

## Getting Started
To use the `array_generator` library, simply include the `array_generator.hpp` header file in your project. No additional dependencies are required.

### Example Usage
```cpp
#include "array_generator.hpp"
#include <iostream>

int main() {
    auto numbers = array_generator::range(1, 10);
    auto even_numbers = array_generator::filter(numbers, [](int x) { return x % 2 == 0; });
    auto squared_numbers = array_generator::map(even_numbers, [](int x) { return x * x; });

    for (const auto& num : squared_numbers) {
        std::cout << num << " ";
    }

    return 0;
}
```

## Contributing
Contributions are welcome! Feel free to submit issues or pull requests on the GitHub repository.

## Acknowledgments
This library was inspired by Python's powerful list comprehensions and functional programming utilities.
