Proyecto.exe: 	main.o libro.o editorial.o header.o nodo.o indexfile.o
	g++ main.o libro.o editorial.o header.o nodo.o indexfile.o -o proyecto

libro.o: libro.h libro.cpp
	g++ -c libro.cpp

editorial.o: editorial.h editorial.cpp
	g++ -c editorial.cpp

header.o: header.h header.cpp
	g++ -c header.cpp

nodo.o: nodo.h nodo.cpp
	g++ -c nodo.cpp

indexfile.o: nodo.h libro.h editorial.h header.h indexfile.h indexfile.cpp
	g++ -c indexfile.cpp

main.o: main.cpp libro.h editorial.h header.h nodo.h indexfile.h
	g++ -c main.cpp

clean:
	rm *.o proyecto 
