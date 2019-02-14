#include <iostream>
#include "RobotTeleporteur.h"

RobotTeleporteur::RobotTeleporteur(char aspect,int position) //constructeur
             :Robot{aspect}
{}


void RobotTeleporteur::teleporter(int pos)
{
    m_position=pos;
}
