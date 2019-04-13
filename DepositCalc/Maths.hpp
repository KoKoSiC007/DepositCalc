//
//  Maths.hpp
//  DepositCalc
//
//  Created by Grisha Okin on 14/04/2019.
//  Copyright © 2019 Grisha Okin. All rights reserved.
//

#ifndef Maths_hpp
#define Maths_hpp

#include <stdio.h>
#include <iomanip>
#include <ctime>
#include <chrono>
#include <sstream>
#include <locale>
// перечесление валюты (она у всех вкладов одинаковая(одна из трех))
enum currency{
	RU,
	EU,
	USD
};
/*
 
 Это базовый класс для рассчета всех вкладов так как у вкладов Сохраняй, Пополняй, Управляй есть одинаковые характиристики такие как проценты сумма в клада и т д.
 
 */
class Maths {
	
	typedef int term; // указывать в месяцах
	typedef double amount;
	
	currency depositCurrnecy; // валюта
	float interstRate; // процент
	time_t depositOpeningDate; // дата открытия
	tm openingTm;
	std::istringstream depositEndDate; // дата закрытия
	tm endTm;
	term termOfDeposit; // срок вклада
	amount depositAmount; // сумма вклада
	bool interestCapitalization = true; // капитализация процентов
	bool earlyClosingOfTheDeposit = false; // досрочное закрытие вклада
	double refillAmountForEachMonth = 0.0; // на сколько пополнять каждый месяц
public:
	// Тестовые конструкторы чтобы проверить что все работает
	Maths(){}
	Maths(currency, time_t, std::string, float, term, amount, bool, bool);
	
};

#endif /* Maths_hpp */
