LDFLAGS = -L. -L/usr/include/GL -L/usr/X11R6/lib -lcng -lglut -lGLU -lGL -lX11 -lm


test.exe: cng.o test_graphismo.o creation_aleatoire.o
	g++ cng.o test_graphismo.o creation_aleatoire.o -o test.exe -L. -L/usr/include/GL -L/usr/X11R6/lib -lcng -lglut -lGLU -lGL -lX11 -lm


test_graphismo.o: test_graphismo.cc cng.h libcng.a
	g++ -c test_graphismo.cc

libcng.a: cng.o
	ar cr libcng.a cng.o
	ranlib libcng.a

cng.o: cng.h cng.c
	gcc -c cng.c

creation_aleatoire.o: ../class/creation_aleatoire.cpp ../class/creation_aleatoire.h
	g++ -c creation_aleatoire.cpp -lm

test: ../class/*
	make -f ../class/makefile
	touch test

clean:
	rm -f *.o
	rm -f *~
	rm test.exe
