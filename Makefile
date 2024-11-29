CXX = g++
CXXFLAGS = -std=c++17 -Wall
SRC = main.cpp controllers/TaskController.cpp services/TaskService.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = todo-app

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(OBJ) $(TARGET)
