#ifndef ROBOTDOLLARD_H_INCLUDED
#define ROBOTDOLLARD_H_INCLUDED

#include <iostream>
#include "robot.h"
#include "RobotTraceur.h"

class RobotDollard : public RobotTraceur
{
    public :
        RobotDollard(char aspect,char trace,int carburant);
        virtual ~RobotDollard() = default;
        virtual void avancer(int vitesse);

    protected :
        int m_carburant;

};


#endif // ROBOTDOLLARD_H_INCLUDED

