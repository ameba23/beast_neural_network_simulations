#include "beast.h"

#include "braitenberg.cc"
#include "shrew.cc"
#include "chase.cc"
#include "mouse.cc"
#include "signal.cc"
#include "pacman.cc"

BEGIN_SIMULATION_TABLE
	ADD_SIMULATION("Braitenberg", BraitenbergSimulation)
	ADD_SIMULATION("Shrews", ShrewSimulation)
	ADD_SIMULATION("Mice", MouseSimulation)
	ADD_SIMULATION("Chase", ChaseSimulation)
	ADD_SIMULATION("Signal", SignalSimulation)
	ADD_SIMULATION("Pacman", PacmanSimulation)
END_SIMULATION_TABLE
