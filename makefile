Proyecto.exe: 	main.o libro.o editorial.o header.o nodo.o indexfile.o
	g++ -std=c++11 main.o libro.o editorial.o header.o nodo.o indexfile.o -o proyecto

libro.o: libro.h libro.cpp
	g++ -std=c++11 -c libro.cpp

editorial.o: editorial.h editorial.cpp
	g++ -std=c++11 -c editorial.cpp

header.o: header.h header.cpp
	g++ -std=c++11 -c header.cpp

nodo.o: nodo.h nodo.cpp
	g++ -std=c++11 -c nodo.cpp

indexfile.o: nodo.h libro.h editorial.h header.h indexfile.h indexfile.cpp
	g++ -std=c++11 -c indexfile.cpp

main.o: main.cpp libro.h editorial.h header.h nodo.h indexfile.h
	g++ -std=c++11 -c main.cpp

clean:
	rm *.o proyecto 
