#ifndef __FIELDRUNNERS__
#define __FIELDRUNNERS__
#include <ctime>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#include "../Ball/Ball.hpp"
#include "../Player/Player.hpp"
#include "../main/define.hpp"

using namespace std;

class SoccerStars {
   public:
    SoccerStars();
    void run();
    void run_the_game();
    void get_rounds_number();
    void get_goals_number();
    void read_initial_players_position();
    void initialize_game();
    void set_up_background();
    Rectangle get_field_box();
    void show_scores();
    void release_all_alloc_memory();
    void release_players(vector<Player*> players);
    void draw();
    void draw_players();
    void handle_events();

   private:
    Window* win;
    std::vector<Player*> blue_players;
    int blue_player_score;
    std::vector<Player*> red_players;
    int red_player_score;
    Ball* ball;
    int rounds_number;
    int goals_number;
};

#endif