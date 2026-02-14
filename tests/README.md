Note:
For LeetCode-style solutions where logic is encapsulated inside a `Solution` class, test files directly include
the `.cpp` implementation to keep the setup simple and dependency-free.

basic commands to scan all cpp files:

cmake -S . -B build
This scans directories for new .cpp files and generates build files.
And registers new test targets.

cmake --build build
This comiles already known files.

ctest --test-dir build
Runs all test that cmake is registered.