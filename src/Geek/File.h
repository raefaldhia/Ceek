/*
 * Copyright 2017 Raefaldhi Amartya Junior <raefaldhiamartya@gmail.com>
 * All rights reserved. Distributed under the terms of the MIT license.
 */

#ifndef GEEK_FILE_H
#define GEEK_FILE_H

class Geek_file_CLASS
{
public:
    Geek_file_CLASS();
    ~Geek_file_CLASS();

    void clear();

    bool add(const char* source);

    const char** path;
    unsigned int count;

    void parse();
};

#endif
