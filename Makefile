mkfile_path := $(abspath $(lastword $(MAKEFILE_LIST)))
PWD := $(dir $(mkfile_path))

compile:
	cmake --build build --config Release

test:


setup:
	rm -rf build
	cmake -Bbuild -DCMAKE_EXPORT_COMPILE_COMMANDS=1 .
	cp $(PWD)build/compile_commands.json $(PWD)


