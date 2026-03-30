CXX = g++
CXXFLAGS = -c -g -Wall -std=c++17

PROGRAM = lineup.exe

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
	cat ./data/1.in | ./$(PROGRAM) | diff - ./data/1.ans
	cat ./data/2.in | ./$(PROGRAM) | diff - ./data/2.ans
	cat ./data/3.in | ./$(PROGRAM) | diff - ./data/3.ans
	cat ./data/4.in | ./$(PROGRAM) | diff - ./data/4.ans
	cat ./data/5.in | ./$(PROGRAM) | diff - ./data/5.ans
	cat ./data/6.in | ./$(PROGRAM) | diff - ./data/6.ans
	@echo "All Test Cases Passed!"