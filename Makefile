main.exe : Main.cpp List.o UI.o
	g++ List.o UI.o -o  main.exe Main.cpp 
List.o : List.h List.cpp
	g++ -c List.cpp

UI.o : UI.h UI.cpp
	g++ -c UI.cpp

clean :
	rm UI.o List.o main.exe