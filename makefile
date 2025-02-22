# This file is now unnecessary but a good template to keep for the future
CXXFLAGS += -MMD  # Generate .d files (contain header dependencies)
-include $(SRC:.cpp=.d)  # Include generated .d files

CXX = g++
CXXFLAGS = -std=c++11 -Wall -MMD
LDFLAGS = 
SRC = main.cpp game.cpp character.cpp player.cpp stage.cpp item.cpp armor.cpp weapon.cpp
OBJ = $(SRC:.cpp=.o)
DEP = $(SRC:.cpp=.d) 
EXEC = main

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(LDFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

# Run "make" to compile and generate necessary files
# Run "./main" to run generated executable
# Run "make run" to do all of the above in one command
run: $(EXEC)
	./$(EXEC)

# Run "make clean" to clear all generated files
clean:
	rm -f $(OBJ) $(EXEC) $(DEP)