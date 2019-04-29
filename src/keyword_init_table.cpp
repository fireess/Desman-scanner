

#include "../include/keyword_init_table.h"
#include "../include/mysize.h"

namespace desman_scanner{
    const State_for_char keyword_init_table[] = {
        {0,   U'a'}, {7,  U'b'}, {10,  U'c'},
        {35,  U'd'}, {40,  U'e'}, {49,  U'f'},
        {65,  U'h'}, {69, U'i'}, {73, U'k'},
        {77, U'l'}, {90, U'm'}, {93, U'n'},
        {96, U'p'}, {108, U'r'}, {121, U's'},
        {141, U't'}, {151, U'u'}, {165, U'v'},
		{168, U'w'}, {174, U'z'}, {184, U'I'}
    };

    const std::size_t    keyword_init_table_size = size(keyword_init_table);
};