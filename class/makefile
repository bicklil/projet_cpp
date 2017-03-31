CC= g++
OBJ= Algo_genetique.o Chemin.o Chromosome.o Croisement.o Elitisme.o Fitness.o Gene.o Individu.o Mutation.o Options.o Population.o Recreation.o Selection.o Selection_par_rang.o Selection_par_tournoi.o Selection_roulette.o Selection_uniforme.o Ville.o

Algo_genetique.o: Algo_genetique.h Algo_genetique.cpp
	$(CC) -c Algo_genetique.cpp

Chemin.o: Chemin.h Chemin.cpp Fitness.h Chromosome.h
	$(CC) -c Chemin.cpp

Chromosome.o: Chromosome.h Chromosome.cpp Croisement.h
	$(CC) -c Chromosome.cpp

Croisement.o: Croisement.h Croisement.cpp
	$(cc) -c Croisement.cpp

Elitisme.o: Elitisme.h Elitisme.cpp Fitness.h Selection.h
	$(CC) -c Elitisme.cpp

Fitness.o: Fitness.h Fitness.cpp Chromosome.h
	$(CC) -c Fitness.cpp

Gene.o: Gene.h Gene.cpp
	$(CC) -c Gene.cpp

Individu.o: Individu.h Individu.cpp
	$(CC) -c Individu.cpp

Mutation.o: Mutation.h Mutation.cpp
	$(CC) -c Mutation.cpp

Options.o: Options.h Options.cpp
	$(CC) -c Options.cpp

Population.o: Population.h Population.cpp Chromosome.h
	$(CC) -c Population.cpp

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














	
