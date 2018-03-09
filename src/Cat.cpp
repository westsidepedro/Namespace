/*
 * Cat.cpp
 *
 *  Created on: Mar 9, 2018
 *      Author: jpetterson
 */

#include "Cat.h"	/*includes the .h file which has '#include <iostream>' &
			  'using namespace std;' in it so we don't need it here!!! :)
			*/

namespace original //creating our own 'namespace' manually
    {

    Cat::Cat()
	{
	// TODO Auto-generated constructor stub

	}

    Cat::~Cat()
	{
	// TODO Auto-generated destructor stub
	}
    
    void Cat::speak()
	{
	cout << "mmmMMMMMMMmmmmeeeowwwwww!" << endl;

	}
    }
