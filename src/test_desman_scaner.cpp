

#include <cstdio>
#include "../include/test_desman_scaner.h"
#include "../include/desman_lexeme.h"

void test_desman_scaner(const std::shared_ptr<desman_scanner::Scanner>& desmansc)
{
    desman_scanner::Lynx_token lti;
    desman_scanner::Lexem_code llc;
    do{
        lti    = desmansc->current_lexeme();
        llc   = lti.lexeme_.code_;
        auto s = desmansc->token_to_string(lti);
        puts(s.c_str());
    }while(llc != desman_scanner::Lexem_code::Nothing);
}