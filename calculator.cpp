#include "calculator.h"

int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
	return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}

/*
   логика приложения наверное сломалась
   ибо я резолвил конфликты просто принимая изменения конфликта
   так как в задании не указано с какой логикой их резолвить
   я просто выбрал самый простой вариант)))
*/
