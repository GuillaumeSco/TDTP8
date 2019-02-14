#ifndef ROBOTCARBURANT_H_INCLUDED
#define ROBOTCARBURANT_H_INCLUDED

#include <iostream>
#include "robot.h"
#include "RobotTraceur.h"

class RobotCarburant : public RobotTraceur
{
    public :
        RobotCarburant(char aspect,char trace,int carburant);
        virtual ~RobotCarburant() = default;
        virtual void avancer(int vitesse);

    protected :
        int m_carburant;

};


#endif // ROBOTCARBURANT_H_INCLUDED

