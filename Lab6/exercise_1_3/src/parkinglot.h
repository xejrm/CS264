#include <vector>

#include "vehicle.h"

class ParkingLot {

public:
	ParkingLot();
	virtual ~ParkingLot(){
		std::cout << "destroying parkinglot" << std::endl;
	}

	virtual void addVehicle( Vehicle * );
	virtual	 void printVehicles() const;
	virtual	 int getVehicleCount() const;

private:
	std::vector< Vehicle * > vehicles;
	int count;

}; 
