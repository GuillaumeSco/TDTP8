#ifndef ROBOTRAPIDE_H_INCLUDED
#define ROBOTRAPIDE_H_INCLUDED

#include <iostream>
#include "robot.h"

class RobotRapide : public Robot
{
    public :
        RobotRapide(char aspect);
        ~RobotRapide() = default;
        inline void avancer(int vitesse);
};

void RobotRapide::avancer(int vitesse)
{
    m_position+=vitesse*2;
}

#endif // ROBOTRAPIDE_H_INCLUDED
