CXX = g++
CXXFLAGS = -c -g -Wall -std=c++17

PROGRAM = apaxiaaans.exe

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

assert_test: build
	./$(PROGRAM) test
	@echo "Assert tests passed!"

kattistest:
	cat ./data/apaxiaaans-001.in | ./$(PROGRAM) | diff - ./data/apaxiaaans-001.ans
	cat ./data/apaxiaaans-002.in | ./$(PROGRAM) | diff - ./data/apaxiaaans-002.ans
	cat ./data/apaxiaaans-003.in | ./$(PROGRAM) | diff - ./data/apaxiaaans-003.ans
	@echo "All Test Cases Passed!"