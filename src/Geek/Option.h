/*
 * Copyright 2017 Raefaldhi Amartya Junior <raefaldhiamartya@gmail.com>
 * All rights reserved. Distributed under the terms of the MIT license.
 */

#ifndef GEEK_option_H
#define GEEK_option_H

class Geek_option_CLASS
{
public:
    Geek_option_CLASS();
    ~Geek_option_CLASS();

    void clear();

    int index;

    void parse(int argc, char* argv[]);
};

#endif
