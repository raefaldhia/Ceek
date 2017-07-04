/*
 * Copyright 2017 Raefaldhi Amartya Junior <raefaldhiamartya@gmail.com>
 * All rights reserved. Distributed under the terms of the MIT license.
 */

#include <Geek.h>
#include <cstring>

int main(int argc, char* argv[])
{
    Geek.option.parse(argc, argv);
    while (Geek.option.index < argc)
    {
        if (Geek.file.add(argv[Geek.option.index]) == false)
        {
            Geek.log.error << "no such file: '" << argv[Geek.option.index] << "'\n";
        }
        Geek.option.index++;
    }

    if (Geek.file.count == 0)
    {
        Geek.log.error << "no input files\n";
        Geek.terminate(1);
    }
    Geek.file.process();

    return 0;
}
