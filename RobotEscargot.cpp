#include <iostream>
#include "RobotEscargot.h"

RobotEscargot::RobotEscargot(char aspect,char trace,int compteur) //constructeur
    :RobotTraceur{aspect,trace}, m_compteur{compteur}
{}

void RobotEscargot::avancer(int vitesse)
{

    if(vitesse==1 && m_compteur==1)
    {
        m_position+=vitesse;
        m_compteur=0;
    }
    else
        m_compteur=1;
}
