#include <iostream>
#include "RobotTraceur.h"

RobotTraceur::RobotTraceur(char aspect, char trace) //constructeur
             :Robot{aspect}, m_trace{trace}
{}


void RobotTraceur::montrer()const
{
    for(int i=0;i<m_position;++i)
        std::cout << m_trace;
        std::cout << m_aspect << std::endl;
}


