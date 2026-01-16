CXX = g++
CXXFLAGS = -Iincludes -Llibs -lraylib -lopengl32 -lgdi32 -lwinmm

SRC = main.cpp movement.cpp orcTextures.cpp towerTextures.cpp menuTextures.cpp
OUT = game

all:
	$(CXX) $(CXXFLAGS) $(SRC) -o $(OUT)

clean:
	rm -f $(OUT)
