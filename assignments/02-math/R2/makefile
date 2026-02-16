CXX = g++
CXXFLAGS = -c -g -Wall -std=c++17
program = R2.exe

SRC = $(wildcard src/*.cpp)
TEST_FILES = $(wildcard tests/*.cpp)


all: build run clean
build:
	$(CXX) $(CXXFLAGS) $(CPPFILES)
	$(CXX) -o $(PROGRAM) *.o

run: build
	./$(PROGRAM)build:
	
clean:
	find . -name "*.o" -delete
	find . -name "*.dSYM" -type d -exec rm -rf {} + 2>/dev/null || true
	find . -name "*.exe" -delete
	find . -name "*.out" -delete
	find . -name "*.pch" -delete

test: build
	./$(PROGRAM) test
	@echo "Assert tests passed!"