# My modern C++ template
![CI](https://github.com/merlinvn/my-modern-cpp-template/actions/workflows/ci.yml/badge.svg)

## How to work with this template

1. Edit CMakeLists.txt
  * Change project name
  * Change the C++ standard (if needed)
2. Bootstrap vcpkg
3. Install dependent libraries
4. Build

## vcpkg

### Setup vcpkg

To use vcpkg as submodule for new project

```bash
git submodule update --init
```

Then we can bootstrap vcpkg by

```bash
./ext/vcpkg/bootstrap-vcpkg.sh
```
### Install dependency libraries

To install `fmt`, just simply call the following command from the root
directory of the project

```bash
./ext/vcpkg/vcpkg install fmt
```

### Build

To create a build folder
```bash
make generate
```

To compile
```bash
make build
```

### Other commands


## References:
1. [NeoVim]()
1. [Telescope]()
1. [Morden Cmake](https://cliutils.gitlab.io/modern-cmake/)
