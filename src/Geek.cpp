/*
 * Copyright 2017 Raefaldhi Amartya Junior <raefaldhiamartya@gmail.com>
 * All rights reserved. Distributed under the terms of the MIT license.
 */

#include "Geek.h"

#include <stdlib.h>
#include <unistd.h>

Geek_CLASS Geek;

Geek_CLASS::Geek_CLASS()
{
    this->usage =
        "Usage: geekc [options] file...\n"
        "Options:\n"
        "  -h, --help               Display this information.\n"
        ;
}

void Geek_CLASS::terminate(int code)
{
    exit(code);
}
