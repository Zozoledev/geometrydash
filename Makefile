all: affiche20
	@echo "Compilation terminée"
affiche20: main.cpp
	g++ -std=c++17 main.cpp -o geometrydash.exe -lsfml-graphics -lsfml-window -lsfml-system
