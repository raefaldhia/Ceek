/*
 * Copyright 2017 Raefaldhi Amartya Junior <raefaldhiamartya@gmail.com>
 * All rights reserved. Distributed under the terms of the MIT license.
 */

#ifndef GEEK_FILE_H
#define GEEK_FILE_H

class Geek_file_SCOPE
{
public:
    Geek_file_SCOPE();
    ~Geek_file_SCOPE();

    void clear();

    bool add(const char* source);

    const char** path;
    unsigned int count;

    void parse();
};

#endif
