mkfile_path := $(abspath $(lastword $(MAKEFILE_LIST)))
PWD := $(dir $(mkfile_path))

.PHONY: all test clean build

all: build

build:
	cmake --build build --config Release

ci: generate-vcpkg build test

test:
	cmake --build build --target build_and_test

clean:
	rm -rf build

generate-vcpkg:
	rm -rf build
	if [ ! -x "./ext/vcpkg/vcpkg" ]; then \
		git submodule update --init; \
		./ext/vcpkg/bootstrap-vcpkg.sh; \
	fi
	./ext/vcpkg/vcpkg install fmt
	./ext/vcpkg/vcpkg install gtest
	# install other dependcies here
	cmake -Bbuild -DCMAKE_EXPORT_COMPILE_COMMANDS=1 .
	cp $(PWD)build/compile_commands.json $(PWD)

generate:
	rm -rf build
	cmake -Bbuild -DCMAKE_EXPORT_COMPILE_COMMANDS=1 . -DCMAKE_TOOLCHAIN_FILE=../vcpkg/scripts/buildsystems/vcpkg.cmake
	cp $(PWD)build/compile_commands.json $(PWD)


