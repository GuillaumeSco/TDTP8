#include <iostream>
#include "robot.h"

Robot::Robot(char aspect,int position)//constructeur
             :m_aspect{aspect},m_position{position}
{}

Robot::Robot()//constructeur par defaut avec initialisation
             :m_aspect{},m_position{0}
{}

//Robot::~Robot()//destructeur
//{}

void Robot::avancer(int vitesse)
{
    m_position+=vitesse;
}

void Robot::montrer()const
{
    for(int i=0;i<m_position;++i)
        std::cout << " ";
        std::cout << m_aspect << std::endl;
}
