#include <iostream>
#include "WaffleShop.h"

void WaffleShop::InitWaffleShop(int MaxWaffleCount) {  
    waffleCount = 0;
    income = 0;
    expenses = 0;
    maxWaffleCount = MaxWaffleCount;
}

void WaffleShop::OrderWaffles(int count, Waffle waffle) {
    if (maxWaffleCount - waffleCount - count < 0)
    {
        throw std::exception();
    }
    if (waffleCount != 0)
    {
        throw std::exception();
    }

    this->waffle = waffle;
    expenses += waffle.bulkPrice * count;
    waffleCount += count;
}

void WaffleShop::SellWaffle() {
    if (waffleCount == 0)
    {
        throw std::exception();
    }
    income += waffle.clientPrice;
    waffleCount--;
}

void WaffleShop::AllWaffleInfo() {
    int totalWaffleWeight = waffleCount * waffle.weight;
    std::cout << "Count: " << waffleCount;
    std::cout << "Brand: " << waffle.brand;
    std::cout << "Total weight: " << totalWaffleWeight;
}

void WaffleShop::FundsInfo() {
    std::cout << "Income: " << income - expenses;
}
