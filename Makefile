CXX = g++
CXXFLAGS = -Iinclude -Llib -lraylib -lopengl32 -lgdi32 -lwinmm

SRC = main.cpp movement.cpp orcTextures.cpp towerTextures.cpp wave.cpp game.cpp
OUT = game

all:
	$(CXX) $(CXXFLAGS) $(SRC) -o $(OUT)

clean:
	rm -f $(OUT)
