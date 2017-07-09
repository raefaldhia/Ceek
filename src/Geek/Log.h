/*
 * Copyright 2017 Raefaldhi Amartya Junior <raefaldhiamartya@gmail.com>
 * All rights reserved. Distributed under the terms of the MIT license.
 */

#ifndef GEEK_LOG_H
#define GEEK_LOG_H

#include <ostream>

namespace GEEK {
/*----------------------------------------------------------------------------*/
namespace LOG
{
    extern std::ostream& log;

    namespace ERROR
    {
        class Fatal
        {
        public:
            template<typename T> inline
            std::ostream& operator<<(T message) { return log << "Geek: fatal error: " << message; }
        };
    }
    class Error
    {
        typedef ERROR::Fatal Fatal;
    public:
        template<typename T> inline
        std::ostream& operator<<(T message) { return log << "Geek: error: " << message; }

        Fatal fatal;
    };
}
class Log
{
    typedef GEEK::LOG::Error Error;
public:
    template<typename T> inline
    std::ostream& operator<<(T message) { using namespace LOG; return log << message; }

    Error error;
};
/*----------------------------------------------------------------------------*/
}
#endif
