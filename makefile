Proyecto.exe: 	main.o libro.o editorial.o header.o nodo.o indexfile.o
	g++ main.o libro.o editorial.o header.o nodo.o indexfile.o -o proyecto
main.o: main.cpp libro.cpp editorial.cpp header.cpp
	g++ -c main.cpp
libro.o: libro.h libro.cpp
	g++ -c libro.cpp
editorial.o: editorial.h editorial.cpp
	g++ -c editorial.cpp
header.o: header.h header.cpp
	g++ -c header.cpp
nodo.o: nodo.h nodo.cpp
	g++ -c nodo.cpp
indexfile.o: indexfile.h indexfile.cpp nodo.h
	g++ -c indexfile.cpp
clean:
	rm *.o proyecto 
