
#include <cstdio>
#include "../include/usage.h"

static const char* usage_str =
    R"~(desman-scanner
Copyright (c) Gavrilov V.S., 2019
desman-scanner is a program for a testing of lexical analysis of the educational
programming language Lynx.

This program is free sofwtware, and it is licensed under the GPLv3 license.
There is NO warranty, not even MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

Usage: %s test_file
)~";

void usage(const char* program_name)
{
    printf(usage_str, program_name);
}