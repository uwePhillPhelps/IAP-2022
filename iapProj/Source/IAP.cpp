//
//  IAP.cpp
//  IAPProjectDevelopmentTest1
//
//  Created by Samuel Hunt on 16/07/2018.
//  Copyright (c) 2018 SJHDevelopment. All rights reserved.
//

#include "IAP.h"
#include <iostream>

float IAP::mtof (int note)
{
    return 440.0 * pow(2.0, (note - 69) / 12.0);
}


void IAP::run ()
{
    for (int i = 0; i < 100; i++) {
        aserveOscillator(i % 24, arc4random() % 500 + 100, 0.1, 1);
        aserveSleep(100);
    }
}

