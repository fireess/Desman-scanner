

#ifndef DESMAN_SCANER_DELIMITER_TABLE_H
#define DESMAN_SCANER_DELIMITER_TABLE_H
#   include "../include/elem.h"
#   include "../include/desman_lexeme.h"
namespace desman_scanner{
    extern const trans_table::Elem<Lexem_code> delimiters_jump_table[];
};
#endif