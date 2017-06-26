/*
 * Copyright 2017 Raefaldhi Amartya Junior <raefaldhiamartya@gmail.com>
 * All rights reserved. Distributed under the terms of the MIT license.
 */

#include "File.h"

#include <Geek.h>
#include <unistd.h>

Geek_file_CLASS::Geek_file_CLASS()
{
    this->clear();
}

Geek_file_CLASS::~Geek_file_CLASS()
{
    if (this->count)
    {
        free(this->path);
    }
    this->clear();
}

void Geek_file_CLASS::clear()
{
    this->path = nullptr;
    this->count = 0;
}

bool Geek_file_CLASS::add(const char* source)
{
    if (access(source, R_OK) == 0)
    {
        this->path = (const char**)realloc(this->path, sizeof(const char*) * (this->count + 1));
        *(this->path + this->count++) = source;

        return true;
    }
    return false;
}
