CXX      = clang++
CXXFLAGS = -std=c++17 -Wall -g3 -I ./include/

.PHONY : all
all : clean build

.PHONY : build
build : build/example-00.exe \
        build/example-99.exe

build/example-00.exe :
	$(CXX) ./example/example-00.c++ -o ./build/example-00.exe $(CXXFLAGS)

build/example-99.exe : ./example/example-99.c++
	$(CXX) ./example/example-99.c++ -o ./build/example-99.exe $(CXXFLAGS)

.PHONY : clean
clean :
	$(RM) ./build/*.exe
