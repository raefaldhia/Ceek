/*
 * Copyright 2017 Raefaldhi Amartya Junior <raefaldhiamartya@gmail.com>
 * All rights reserved. Distributed under the terms of the MIT license.
 */

#ifndef GEEK_H
#define GEEK_H

#include "Geek/File.h"
#include "Geek/Log.h"
#include "Geek/Option.h"

class Geek_CLASS
{
public:
    Geek_CLASS();

    Geek_file_CLASS file;
    Geek_log_CLASS log;
    Geek_option_CLASS option;

    const char* usage;

    void terminate(int code);
} extern Geek;

#endif
