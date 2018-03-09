//============================================================================
// Name        : Namespace.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Cat.h"	//need to include both files with the 'namespaces' in
#include "Animals.h"	//need to include both files with the 'namespaces' in

using namespace std;
using namespace nameAnything;
//this becomes the 'default' namespace

int main()
    {
    Cat cat1;		//uses the 'default' namespace from above
    cat1.speak();

    original::Cat cat2;	// tells it to use 'original namespace' doing it this way
    cat2.speak();

    nameAnything::Cat cat3;// tells it to use 'nameAnything namespace' doing it this way
    cat3.speak();

    cout << original::NAME << endl;
    cout << nameAnything::NAME << endl;

    return 0;
    }
