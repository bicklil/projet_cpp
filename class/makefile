CC= g++
OBJ= cng.o Chemin.o Chromosome.o Croisement.o Elitisme.o Fitness.o Gene.o interface_graphique.o Individu.o Mutation.o Options.o Population.o Recreation.o Selection.o Selection_par_rang.o Selection_par_tournoi.o Selection_roulette.o Selection_uniforme.o Ville.o

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
	$(CC) -std=c++11 -c Chemin.cpp

Chromosome.o: Chromosome.h Chromosome.cpp Croisement.h
	$(CC) -c Chromosome.cpp

Croisement.o: Croisement.h Croisement.cpp
	$(CC) -c Croisement.cpp

Elitisme.o: Elitisme.h Elitisme.cpp Fitness.h Selection.h
	$(CC) -c Elitisme.cpp

Fitness.o: Fitness.h Fitness.cpp Chromosome.h
	$(CC) -c Fitness.cpp

Gene.o: Gene.h Gene.cpp
	$(CC) -c Gene.cpp

Individu.o: Individu.h Individu.cpp
	$(CC) -c Individu.cpp

interface_graphique.o: interface_graphique.h interface_graphique.cpp Chemin.h cng.h libcng.a
	$(CC) -c interface_graphique.cpp

Mutation.o: Mutation.h Mutation.cpp
	$(CC) -c Mutation.cpp

Options.o: Options.h Options.cpp
	$(CC) -c Options.cpp

Population.o: Population.h Population.cpp Chromosome.h
	$(CC) -std=c++11 -c Population.cpp

Recreation.o: Recreation.h Recreation.cpp Chromosome.h Selection.h Ville.h
	$(CC) -c Recreation.cpp

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
