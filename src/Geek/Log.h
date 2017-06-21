/*
 * Copyright 2017 Raefaldhi Amartya Junior <raefaldhiamartya@gmail.com>
 * All rights reserved. Distributed under the terms of the MIT license.
 */

#ifndef GEEK_LOG_H
#define GEEK_LOG_H

#include <iostream>

class Geek_log_SCOPE
{
public:
    template<typename T>
    inline Geek_log_SCOPE& operator<<(const T obj) { std::cout << obj; return *this; }

    Geek_log_SCOPE& error();
};

#endif
