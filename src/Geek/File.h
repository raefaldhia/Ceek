/*
 * Copyright 2017 Raefaldhi Amartya Junior <raefaldhiamartya@gmail.com>
 * All rights reserved. Distributed under the terms of the MIT license.
 */

#ifndef GEEK_FILE_H
#define GEEK_FILE_H

#include "File/File.h"

namespace GEEK {
/*----------------------------------------------------------------------------*/
typedef GEEK::FILE_::File Geek_file_file_CLASS;
class File {
public:
    File();
    ~File();

    void clear();

    FILE_::File** files;
    unsigned int count;

    inline operator FILE_::File**&();
    inline void operator=(FILE_::File** source);
    FILE_::File& operator[](int i);

    bool add(char* source);
    void process();
};
/*
class Geek_file_CLASS
{
public:
    Geek_file_CLASS();
    ~Geek_file_CLASS();

    void clear();

    inline Geek_file_file_CLASS operator[](int i);

    unsigned int count;
    unsigned int selection;

    char** path;
    char*** content;
    unsigned int* content_count;

    bool add(char* source);
    void process();

    Geek_file_file_CLASS file;
};*/
/*----------------------------------------------------------------------------*/
}
#endif
