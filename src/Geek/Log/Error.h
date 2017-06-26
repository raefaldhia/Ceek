/*
 * Copyright 2017 Raefaldhi Amartya Junior <raefaldhiamartya@gmail.com>
 * All rights reserved. Distributed under the terms of the MIT license.
 */

#ifndef GEEK_LOG_ERROR_H
#define GEEK_LOG_ERROR_H

#include <iostream>

class Geek_log_error_log_CLASS
{
public:
    template<typename T> inline Geek_log_error_log_CLASS operator<<(T obj) { std::cout << obj; return *this; }
};

class Geek_log_error_fatal_CLASS
{
public:
    Geek_log_error_log_CLASS log;
    template<typename T> inline Geek_log_error_log_CLASS operator<<(T obj) { log << "Geek: fatal error: " << obj; return log; }
};

class Geek_log_error_CLASS
{
public:
    Geek_log_error_log_CLASS log;
    template<typename T> inline Geek_log_error_log_CLASS operator<<(T obj) { log << "Geek: error: " << obj; return log; }

    Geek_log_error_fatal_CLASS fatal;

};

#endif
