#include "Waffle.h"

#ifndef _WAFFLE_SHOP_H
#define _WAFFLE_SHOP_H

class WaffleShop {
    Waffle waffle;
    int waffleCount;
    int maxWaffleCount;
    double income;
    double expenses;

public:
    void InitWaffleShop(int MaxWaffleCount);

    void OrderWaffles(int count, Waffle waffle);
    void SellWaffle();
    void AllWaffleInfo();
    void FundsInfo();
};

#endif