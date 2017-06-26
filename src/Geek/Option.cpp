/*
 * Copyright 2017 Raefaldhi Amartya Junior <raefaldhiamartya@gmail.com>
 * All rights reserved. Distributed under the terms of the MIT license.
 */

#include "Option.h"

#include <Geek.h>
#include <getopt.h>

#include <cstddef>
#include <iostream>
#include <ostream>

Geek_option_CLASS::Geek_option_CLASS()
{
    this->clear();
}

Geek_option_CLASS::~Geek_option_CLASS()
{
    this->clear();
}

void Geek_option_CLASS::clear()
{
    this->index = 1;

    opterr = 0;
}

void Geek_option_CLASS::parse(int argc, char* argv[])
{
    int option_index = 0;
    const option long_options[] =
    {
        {"help", 0, NULL, 'h'},
        {0, 0, 0, 0}
    };

    int character = -1;
    while ((character = getopt_long(argc, argv, "h", long_options, &option_index)) != -1)
    {
        switch (character)
        {
        case 'h':
            Geek.log << Geek.usage;
            Geek.terminate(0);
            break;
        case '?':
           Geek.log.error << "unrecognized command line option ‘" << argv[1] << "‘\n";
           Geek.terminate(1);
           break;
        }
    }
    this->index = optind;
    if (Geek.option.index == argc)
    {
        Geek.log << Geek.usage;
        Geek.terminate(1);
    }
}
