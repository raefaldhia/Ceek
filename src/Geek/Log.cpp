/*
 * Copyright 2017 Raefaldhi Amartya Junior <raefaldhiamartya@gmail.com>
 * All rights reserved. Distributed under the terms of the MIT license.
 */

#include "Log.h"

Geek_log_SCOPE& Geek_log_SCOPE::error()
{
    std::cout << "\033[1;37mGeek\033[0m: \033[1;31merror\033[0m: ";
    return *this;
}
