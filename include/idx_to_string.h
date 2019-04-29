

#ifndef IDX_TO_STRING_H
#define IDX_TO_STRING_H

# include "../include/char_trie.h"
#include <string>
#include <memory>
/**
 *  \param [in] t    pointer to prefix tree
 *  \param [in] idx  index of string in the prefix tree t
 *
 *  \return          string corresponding to the index idx
 *  */
std::string idx_to_string(std::shared_ptr<Char_trie> t,
                          size_t                     idx,
                          std::string                default_value = std::string());
#endif