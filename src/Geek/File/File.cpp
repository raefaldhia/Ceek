/*
 * Copyright 2017 Raefaldhi Amartya Junior <raefaldhiamartya@gmail.com>
 * All rights reserved. Distributed under the terms of the MIT license.
 */

#include "File.h"
using namespace GEEK::FILE_;

#include <Geek.h>

File::File()
{
    this->clear();
}

File::~File()
{
    this->clear();
}

void File::clear()
{
    this->path = nullptr;
}
