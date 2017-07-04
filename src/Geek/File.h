/*
 * Copyright 2017 Raefaldhi Amartya Junior <raefaldhiamartya@gmail.com>
 * All rights reserved. Distributed under the terms of the MIT license.
 */

#ifndef GEEK_FILE_H
#define GEEK_FILE_H

#include "File/Content.h"

class Geek_file__CLASS
{
public:
    Geek_file__CLASS();
    ~Geek_file__CLASS();

    void clear();

    char* path;
};

class Geek_file_CLASS
{
public:
    Geek_file_CLASS();
    ~Geek_file_CLASS();

    inline Geek_file__CLASS operator[](int i);

    void clear();

    unsigned int count;
    unsigned int selection;

    char** path;

    bool add(char* source);

    void process();

    Geek_file__CLASS file;
};

#endif
