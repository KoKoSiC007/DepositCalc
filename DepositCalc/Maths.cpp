//
//  Maths.cpp
//  DepositCalc
//
//  Created by Grisha Okin on 14/04/2019.
//  Copyright © 2019 Grisha Okin. All rights reserved.
//

#include "Maths.hpp"

Maths::Maths(currency value, time_t openingDate,std::string endDate, float Rate, term depositTerm, amount amount, bool isCapitilization = true, bool isEarlyClosing = false){
	depositCurrnecy = value;
	depositOpeningDate = openingDate;
	interstRate = Rate;
	termOfDeposit = depositTerm;
	depositAmount = amount;
	interestCapitalization = isCapitilization;
	earlyClosingOfTheDeposit = isEarlyClosing;
	depositEndDate = std::istringstream(endDate);
}
