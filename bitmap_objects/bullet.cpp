//
// Created by kevin on 7/12/16.
//

#include "bullet.h"

/* BULLET
 * Carga la imagen de la bala.
 * Configura sus valores de width / height */
BULLET::BULLET(): BITMAP("bullet2.png")
{
  width = 10;
  height = 10;
}

/* check_colision_with -> BITMAP
 * Verifica colisiones entre this y BITMAP
 * Si es que logran colisionar, cambia los valores de destroyed por true (para ambos objetos), y devuelve true.
 * Usado con asteroides.*/
bool BULLET::check_colision_with(BITMAP *some)
{
  if (this->posX + this->width >= some->getX() && this->posX <= some->getX() + some->getW())
    if (this->posY + this->height >= some->getY() && this->posY <= some->getY() + some->getH())
    {
      this->destroyed = true;
      some->setDestroyed(true);
      return true;
    }
  return false;
}

/* draw_bitmap
 * Dibuja el bitmap de manera normal, ya que no contiene varias imagenes dentro del bitmap */
void BULLET::draw_bitmap(const int flags)
{ al_draw_bitmap(bitmap,float (posX),float (posY),flags); }

/* reset_bitmap
 * Resetea las configuraciones de la bala por 0 */
void BULLET::reset_bitmap()
{
  posX = 0;
  posY = 0;
  destroyed = false;
}
