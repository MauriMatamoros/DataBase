Proyecto.exe: 	main.o libro.o editorial.o header.o
	g++ main.o libro.o editorial.o header.o  -o proyecto
main.o: main.cpp libro.cpp editorial.cpp header.cpp
	g++ -c main.cpp
libro.o: libro.h libro.cpp
	g++ -c libro.cpp
editorial.o: editorial.h editorial.cpp
	g++ -c editorial.cpp
header.o: header.h header.cpp
	g++ -c header.cpp
clean:
	rm *.o proyecto 
