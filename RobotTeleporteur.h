#ifndef ROBOTTELEPORTEUR_H_INCLUDED
#define ROBOTTELEPORTEUR_H_INCLUDED

#include <iostream>
#include "robot.h"

class RobotTeleporteur : public Robot
{
    public :
        RobotTeleporteur(char aspect,int position=0);
        virtual ~RobotTeleporteur() = default;
        virtual void teleporter(int pos);
};




#endif // ROBOTTELEPORTEUR_H_INCLUDED
