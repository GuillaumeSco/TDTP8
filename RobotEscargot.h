#ifndef ROBOTESCARGOT_H_INCLUDED
#define ROBOTESCARGOT_H_INCLUDED

#include <iostream>
#include "robot.h"
#include "RobotTraceur.h"

class RobotEscargot : public RobotTraceur
{
    public :
        RobotEscargot(char aspect='@',char trace='_',int compteur=0);
        virtual ~RobotEscargot() = default;
        virtual void avancer(int vitesse);
    protected :
        int m_compteur;
};


#endif // ROBOTCARBURANT_H_INCLUDED
