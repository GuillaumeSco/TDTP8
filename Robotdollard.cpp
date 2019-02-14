#include <iostream>
#include "RobotDollard.h"

RobotDollard::RobotDollard(char aspect,char trace,int carburant) //constructeur
             :RobotTraceur{aspect,trace}, m_carburant{carburant}
{}

void RobotDollard::avancer(int vitesse)
{
    if(m_carburant!=0)
    {
        m_position+=vitesse;
        m_carburant--;
    }

}
