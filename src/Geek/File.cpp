/*
 * Copyright 2017 Raefaldhi Amartya Junior <raefaldhiamartya@gmail.com>
 * All rights reserved. Distributed under the terms of the MIT license.
 */

#include "File.h"
using namespace GEEK;

#include <Geek.h>
#include <unistd.h>

#include <fstream>

File::File()
{
    Geek.file.clear();
}

File::~File()
{
    while (Geek.file.count)
    {
        Geek.file.count--;
        free(Geek.file.files[Geek.file.count]);
    }

    Geek.file.clear();
}

void File::clear()
{
    Geek.file.files = nullptr;
    Geek.file.count = 0;
}

File::operator FILE_::File**&()
{
    return Geek.file.files;
}

void File::operator=(FILE_::File** source)
{
    Geek.file.files = source;
}

FILE_::File& File::operator[](int i)
{
    return *Geek.file.files[i];
}

bool File::add(char* source)
{
    if (access(source, R_OK) == 0)
    {
        Geek.file.count++;
        Geek.file = (FILE_::File**)realloc(Geek.file, Geek.file.count * sizeof(FILE_::File*));
        Geek.file.files[Geek.file.count - 1] = new FILE_::File();

        Geek.file[Geek.file.count - 1].path = source;
        return true;
    }
    return false;
}

void File::process()
{
    int index = Geek.file.count;
    while (index)
    {
        index--;

        std::ifstream fHandler;

        fHandler.open(Geek.file[index].path);
        if (fHandler.is_open() == false)
        {
            Geek.log.error << "no such file: '" << Geek.file[index].path << "'\n";
        }

        // TODO: Lexical Analysis.

        fHandler.close();
    }
}
