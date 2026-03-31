CXX      = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -O2

all: rpg

rpg: main.cpp Character.cpp Character.hpp Weapon.cpp Weapon.hpp
	$(CXX) $(CXXFLAGS) main.cpp -o rpg

clean:
	rm -f rpg

.PHONY: all clean
