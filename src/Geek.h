/*
 * Copyright 2017 Raefaldhi Amartya Junior <raefaldhiamartya@gmail.com>
 * All rights reserved. Distributed under the terms of the MIT license.
 */

#ifndef GEEK_H
#define GEEK_H

#include "Geek/File.h"
#include "Geek/Log.h"

class Geek_SCOPE
{
public:
    Geek_log_SCOPE log;
    Geek_file_SCOPE file;

    void terminate(int code);
} extern Geek;

#endif
