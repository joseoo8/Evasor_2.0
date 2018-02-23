/*
 * Talos Electronics
 * Ing. Rafael Lozano Rolon 
 * Modificado por ultima vez 23 Febrero 2018
 */
  
#include "Evasor.h"
Evasor Robot_Evasor(13,12,11,10,9,8,7,6,5);
void setup()
{
  Robot_Evasor.Inicializar();
}
void loop()
{
  Robot_Evasor.Modo_Evasor(255,9);
}

