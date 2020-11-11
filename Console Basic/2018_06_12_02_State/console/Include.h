#ifndef _INCLUDE_H_
#define _INCLUDE_H_

#include <crtdbg.h>
#include "../ConsoleEx3/ConWrap.h"
#include "mmsystem.h"

#include <time.h>
#include <stdlib.h>

#define Max 30

#include "unit.h"

#include "player.h"
#include "monster.h"

#include "bullet.h"
#include "manager.h"

extern Hero hero;
extern Manager manager;
extern Monster monster[Max];

#endif