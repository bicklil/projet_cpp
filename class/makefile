CC= g++ -Wall
OBJ= cng.o Algo_genetique.o Chemin.o Chromosome.o Croisement.o Fitness.o Gene.o interface_graphique.o Mutation.o Population.o Selection.o Selection_par_rang.o Selection_par_tournoi.o Selection_uniforme.o Ville.o

main.exe: $(OBJ)
	$(CC) $(OBJ) -g -o main.exe -L. -L/usr/include/GL -L/usr/X11R6/lib -lcng -lglut -lGLU -lGL -lX11 -lm

Algo_genetique.o: Algo_genetique.h Algo_genetique.cpp Chemin.h cng.h libcng.a
	$(CC) -c Algo_genetique.cpp

libcng.a: cng.o
	ar cr libcng.a cng.o
	ranlib libcng.a

cng.o: cng.h cng.c
	gcc -c cng.c

Chemin.o: Chemin.h Chemin.cpp Fitness.h Chromosome.h
	$(CC) -std=c++0x -c Chemin.cpp

Chromosome.o: Chromosome.h Chromosome.cpp Croisement.h
	$(CC) -c Chromosome.cpp

Croisement.o: Croisement.h Croisement.cpp
	$(CC) -c Croisement.cpp

Fitness.o: Fitness.h Fitness.cpp Chromosome.h
	$(CC) -c Fitness.cpp

Gene.o: Gene.h Gene.cpp
	$(CC) -c Gene.cpp

interface_graphique.o: interface_graphique.h interface_graphique.cpp Chemin.h cng.h libcng.a
	$(CC) -std=c++0x -c interface_graphique.cpp

Mutation.o: Mutation.h Mutation.cpp
	$(CC) -c Mutation.cpp

Population.o: Population.h Population.cpp Chromosome.h
	$(CC) -std=c++0x -c Population.cpp

Selection.o: Selection.h Selection.cpp
	$(CC) -c Selection.cpp

Selection_par_rang.o: Selection_par_rang.h Selection_par_rang.cpp Selection.h
	$(CC) -c Selection_par_rang.cpp

Selection_par_tournoi.o: Selection_par_tournoi.h Selection_par_tournoi.cpp Selection.h
	$(CC) -c Selection_par_tournoi.cpp

Selection_roulette.o: Selection_roulette.h Selection_roulette.cpp Selection.h
	$(CC) -c Selection_roulette.cpp

Selection_uniforme.o: Selection_uniforme.h Selection_uniforme.cpp Selection.h
	$(CC) -c Selection_uniforme.cpp

Ville.o: Ville.h Ville.cpp
	$(CC) -c Ville.cpp

clean:
	rm -f *.o
	rm -f *~
	rm main.exe
	rm libcng.a
