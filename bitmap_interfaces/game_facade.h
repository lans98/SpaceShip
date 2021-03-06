//
// Created by kevin on 8/12/16.
//

#ifndef SPACESHIP2_GAME_OBJECTS_H
#define SPACESHIP2_GAME_OBJECTS_H


#include "../bitmap_objects/image.h"
#include "../bitmap_objects/nave.h"
#include "../bitmap_objects/power_up.h"
#include "asteroids_interface.h"
#include "bullet_interface.h"
#include "hearts_interface.h"
#include "power_up_interface.h"

class ObjectsInterface
{
  private:
    Image             *frame;
    std::string        score;

  private:
    AllegroFont       *title_font;
    AllegroFont       *options_font;
    AllegroFont       *score_font;

  public:
    ObjectsInterface();
    ~ObjectsInterface();

    void show_menu();

    void check_bullets_with_asteroids();
    void check_nave_with_asteroids();
    void check_nave_with_powerups();
    void receive_score();

    void update_objects();

    void draw_objects();
    void draw_information();

    bool no_hearts();

    void resetobjects();
};


#endif //SPACESHIP2_GAME_OBJECTS_H
