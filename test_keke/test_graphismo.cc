#include<iostream>
#include"cng.h"
#include"creation_aleatoire.h"
using namespace std;

bool la_bool = true;

void points(void){
    if(la_bool){
        int* table_points = init_ville(100);
        int chemin[4] = {1,3,2,0};
        int x1, y1, x2, y2;
        cng_current_color(255, 0, 0);

        for(int i=0; i<199; i+=2) cng_circle(table_points[i], table_points[i+1], 4);
        
        /*cng_current_color(255,255,255);
        
        for(int i=0; i<3; i++){
            x1 = table_points[2*chemin[i]];
            y1 = table_points[2*chemin[i]+1];
            x2 = table_points[2*chemin[i+1]];
            y2 = table_points[2*chemin[i+1]+1];
            cng_line(x1, y1, x2, y2);
            }*/
        cng_swap_screen();
        la_bool = false;
        delete [] table_points;
        }
    }
    

int main(int argc, char* argv[]){
    cng_init_window(&argc, argv, "la fenetre de du le voyageur de commerce", 800, 600);
    cng_display_func(points);
    cng_clear_screen();
    cng_main_loop();
    cng_destroy_window();
    return 1;
    }
