mkfile_path := $(abspath $(lastword $(MAKEFILE_LIST)))
PWD := $(dir $(mkfile_path))

.PHONY: all test clean build

all: build

build:
	cmake --build build --config Release

test:
	cmake --build build --target build_and_test --clean-first
	# cmake --build build --target test

clean:
	rm -rf build

setup:
	rm -rf build
	cmake -Bbuild -DCMAKE_EXPORT_COMPILE_COMMANDS=1 . -DCMAKE_TOOLCHAIN_FILE=../vcpkg/scripts/buildsystems/vcpkg.cmake
	cp $(PWD)build/compile_commands.json $(PWD)


