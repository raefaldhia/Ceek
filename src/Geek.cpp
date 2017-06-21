/*
 * Copyright 2017 Raefaldhi Amartya Junior <raefaldhiamartya@gmail.com>
 * All rights reserved. Distributed under the terms of the MIT license.
 */

#include "Geek.h"

#include <stdlib.h>

Geek_SCOPE Geek;

void Geek_SCOPE::terminate(int code)
{
    exit(code);
}
