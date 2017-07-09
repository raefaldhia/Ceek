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
    typedef GEEK::File File;
    typedef GEEK::Option Option;
    typedef GEEK::Log Log;
public:
    Geek_CLASS();

    File file;
    Log log;
    Option option;

    const char* usage;

    void terminate(int code);
} extern Geek;

#endif
