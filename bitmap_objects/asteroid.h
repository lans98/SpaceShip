//
// Created by kevin on 7/12/16.
//

#ifndef SPACESHIP2_ASTEROID_H
#define SPACESHIP2_ASTEROID_H

#include "bitmap.h"

extern int type_asters[];

class ASTEROID : public BITMAP
{
  private:
    int generate_random_type();
    int generate_random_X();
    int generate_random_Y();

  public:
    ASTEROID();

    bool check_colision_with(BITMAP *some) override;
    void draw_bitmap(const int flags) override;
    void reset_bitmap() override;
};


#endif //SPACESHIP2_ASTEROID_H
