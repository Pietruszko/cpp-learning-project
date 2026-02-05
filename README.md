# Modern C++ playground

This is created as a personal workspace for learning and experimenting with modern c++

## Toolchain & Standards

- C+20
- Clang/ clang++
- CMake
- Ninja

## Tooling

- clangd (LSP)
- clang-format (code formatting)
- {fmt} libfmt-dev (modern formatting library)

## Build Requirements on Ubuntu (only)

```bash
sudo apt install \
  clang clangd clang-format \
  cmake ninja-build \
  libfmt-dev build-essential
```

## Build & Run

cmake --preset default
cmake --build --preset default
./build/hello



### Additional note

This may not be up to date as maintaining this repo is not my goal but rather to document my progress and keep track of my work
