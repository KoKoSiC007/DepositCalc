//
//  main.cpp
//  DepositCalc
//
//  Created by Grisha Okin on 31/03/2019.
//  Copyright © 2019 Grisha Okin. All rights reserved.
//

#include <iostream>

#include "Maths.hpp"


using namespace std;

int main(int argc, const char * argv[]) {
	time_t t = time(NULL);
	int test;
	string s{"2020-Februar-18 23:12:34"};
	Maths testDeposit = Maths(RU, t, s, 5, 365, 1000, true, false);
	return 0;
}
