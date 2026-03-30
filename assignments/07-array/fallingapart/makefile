CXX = g++
CXXFLAGS = -c -g -Wall -std=c++17

PROGRAM = fallingapart.exe

SRC = $(wildcard src/*.cpp)
TEST_FILES = $(wildcard tests/*.cpp)
all: build run

build:
	$(CXX) $(CXXFLAGS) $(SRC)
	$(CXX) -o $(PROGRAM) *.o

run:
	./$(PROGRAM)

clean:
	find . -name "*.o" -delete
	find . -name "*.dSYM" -type d -exec rm -rf {} + 2>/dev/null || true
	find . -name "*.exe" -delete
	find . -name "*.out" -delete

unit_test: build
	./$(PROGRAM) test
	@echo "Assert tests passed!"

kattis_test:
	cat ./data/sample1.in | ./$(PROGRAM) | diff - ./data/sample1.ans
	cat ./data/sample2.in | ./$(PROGRAM) | diff - ./data/sample2.ans
	@echo "All Test Cases Passed!"