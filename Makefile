CXX      = clang++
CXXFLAGS = -std=c++17 -Wall -g3

.PHONY : all
all : clean build

.PHONY : build
build : build/example-99.exe

build/example-99.exe :
	$(CXX) ./example/example-99.c++ -o ./build/example-99.exe $(CXXFLAGS)

.PHONY : clean
clean :
	$(RM) ./build/*.exe
