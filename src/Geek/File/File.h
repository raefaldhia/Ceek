/*
 * Copyright 2017 Raefaldhi Amartya Junior <raefaldhiamartya@gmail.com>
 * All rights reserved. Distributed under the terms of the MIT license.
 */

#ifndef GEEK_FILE_FILE_H
#define GEEK_FILE_FILE_H

namespace GEEK {
/*----------------------------------------------------------------------------*/
// FILE_ insetead of FILE to prevent compiler error.
namespace FILE_ {
    class File
    {
    public:
        File();
        ~File();

        void clear();

        char* path;
    };
}
/*----------------------------------------------------------------------------*/
}
#endif
