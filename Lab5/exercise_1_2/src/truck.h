// Chapter 9 of C++ How to Program
// truck.h

#include<iostream>

#include "vehicle.h"

class Truck : public Vehicle{
	friend ostream &operator<<( ostream &output, const Truck &t );
public:
	Truck(double);

	bool hasCargo() const;
	void setCargo( bool c );

private:
	bool cargo;
};


/**************************************************************************
 * (C) Copyright 1992-2003 by Deitel & Associates, Inc. and Prentice      *
 * Hall. All Rights Reserved.                                             *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
