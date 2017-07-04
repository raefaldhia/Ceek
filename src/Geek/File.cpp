/*
 * Copyright 2017 Raefaldhi Amartya Junior <raefaldhiamartya@gmail.com>
 * All rights reserved. Distributed under the terms of the MIT license.
 */

#include "File.h"

#include <Geek.h>
#include <unistd.h>

#include <fstream>

Geek_file__CLASS::Geek_file__CLASS()
{
    Geek.file.file.clear();
}

Geek_file__CLASS::~Geek_file__CLASS()
{
    Geek.file.file.clear();
}

void Geek_file__CLASS::clear()
{
    Geek.file.file.path = nullptr;
}

Geek_file_CLASS::Geek_file_CLASS()
{
    Geek.file.clear();
}

Geek_file_CLASS::~Geek_file_CLASS()
{
    Geek.file.clear();
}

void Geek_file_CLASS::clear()
{
    if (Geek.file.count)
    {
        free(Geek.file.path);
    }
    Geek.file.count = 0;
    Geek.file.path = nullptr;

    Geek.file.selection = 0;
}

inline Geek_file__CLASS Geek_file_CLASS::operator[](int i)
{
    Geek.file.file.path = Geek.file.path[i];

    return Geek.file.file;
}


bool Geek_file_CLASS::add(char* source)
{
    if (access(source, R_OK) == 0)
    {
        Geek.file.count++;
        Geek.file.path = (char**)realloc(Geek.file.path, Geek.file.count * sizeof(char*));
        Geek.file.path[Geek.file.count - 1] = source;

        return true;
    }
    return false;
}

void Geek_file_CLASS::process()
{
    int id = Geek.file.count;
    while (id)
    {
        id--;

        std::ifstream file;
        file.open(Geek.file[id].path);
        if (file.is_open() == false)
        {
            Geek.log.error << "no such file: '" << this->path[id] << "'\n";
            Geek.terminate(1);
        }

        // TODO: Lexical Analysis

        file.close();
    }
}
