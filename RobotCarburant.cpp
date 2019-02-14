#include <iostream>
#include "RobotCarburant.h"

RobotCarburant::RobotCarburant(char aspect,char trace,int carburant) //constructeur
             :RobotTraceur{aspect,trace}, m_carburant{carburant}
{}

void RobotCarburant::avancer(int vitesse)
{
    if(m_carburant!=0)
    {
        m_position+=vitesse;
        m_carburant--;
    }

}
