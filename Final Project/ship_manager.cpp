#include "ship_manager.h"
#include "ship.h"
#include "widget.h"

ship_manager::ship_manager() {

}

void ship_manager::generateShips() {
    player1Ships <<  ship(battleship) << ship(cruiser) << ship(cruiser) << ship(destroyer) <<
                     ship(destroyer) << ship(destroyer) <<  ship(submarine) <<  ship(submarine) <<
                     ship(submarine) << ship(submarine);

    player2Ships <<  ship(battleship) << ship(cruiser) << ship(cruiser) << ship(destroyer) <<
                     ship(destroyer) << ship(destroyer) << ship(submarine) << ship(submarine) <<
                     ship(submarine) << ship(submarine);
}

void ship_manager::placeShips() {

}

ship ship_manager::getCurrentShip() {
    ship currentShip = player1Ships.at(currentShipIndex);

    if(currentShip.getCurrentShipSize() == currentShip.getFinalShipSize()) {
        currentShipIndex++;
        return getCurrentShip();
    }

    else {
        return currentShip;
    }
}




