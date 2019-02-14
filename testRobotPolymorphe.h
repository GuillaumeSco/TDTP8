#ifndef TESTROBOTPOLYMORPHE_H_INCLUDED
#define TESTROBOTPOLYMORPHE_H_INCLUDED

#include <list>
#include <iostream>
#include <ostream>
#include "robot.h"

#include "RobotTeleporteur.h"
#include "RobotRapide.h"
#include "RobotTraceur.h"
#include "RobotCarburant.h"
#include "RobotEscargot.h"

void testRobotPolymorphe(Robot& r);
void testConteneurPolymorphe();

void remplirConteneurPolymorphe(std::list<Robot*> &bots);
void utiliserConteneurPolymorphe(std::list<Robot*> &bots);
void viderConteneurPolymorphe(std::list<Robot*> &bots);



#endif // TESTROBOTPOLYMORPHE_H_INCLUDED
