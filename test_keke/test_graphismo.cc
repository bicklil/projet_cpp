#include<iostream>
#include"cng.h"
using namespace std;

void points(void){
    int table_points[8] = {25,28,200,502,120,300,321,450};
    cng_current_color(255, 0,0);

    for(int i=0; i<7; i+=2) cng_circle(table_points[i], table_points[i+1], 4);
    cng_swap_screen();

    }
    

int main(int argc, char* argv[]){
    cng_init_window(&argc, argv, "la fenetre de du le voyageur de commerce", 800, 600);
    cng_display_func(points);
    cng_clear_screen();
    cng_main_loop();

    return 1;
    }
