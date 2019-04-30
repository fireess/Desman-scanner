
#ifndef DESMAN_LEXEME_H
#define DESMAN_LEXEME_H
#include <cstddef>
#include <quadmath.h>
namespace desman_scanner{
    enum class Lexem_code : uint16_t{
        Nothing,                     UnknownLexem,
        Id,                          Integer,
        Float32,                     Float64,
        Float80,                     Float128,
        Complex32,                   Complex64,
        Complex80,                   Complex128,
        String,                      Char,
        Sq_br_opened,                Sq_br_closed,
        Round_br_opened,             Round_br_closed,
        Set_field,                   Component_is,
        Logical_not,                 Bitwise_not,
        Bitwise_xor,                 At,
        Point,                       Colon,
        Semicolon,                   Equals,
        Sharp,                       Plus,
        Minus,                       Mul,
        Div,                         Remainder,
        Bitwise_or,                  Bitwise_and,
        Less_than,                   Greater_than,
        Cond_op,                     Sq_br_colon_opened,
        Sq_br_colon_closed,          Tuple_begin,
        Tuple_end,                   Resolution,
        Curly_brace_opened,          Curly_brace_closed,
        Cycle_name_prefix,           Next,
        Prev,                        Float_add,
        Float_sub,                   Float_mul,
        Float_div,                   Float_remainder,
        Range,                       Cond_op_full,
        Less_or_equals_than,         Greater_or_equals_than,
        Not_equals,                  Power,
        Logical_xor,                 Logical_or,
        Logical_and,                 Left_shift,
        Right_shift,                 Size_of,
        Assignment,                  Data_address,
        Bitwise_or_not,              Bitwise_and_not,
        Logical_or_not,              Logical_and_not,
        Float_power,                 Data_size,
        Next_with_wrapping,          Prev_with_wrapping,
        Plus_assign,                 Minus_assign,
        Mul_assign,                  Div_assign,
        Remainder_assign,            Copy,
        Bitwise_or_assign,           Bitwise_and_assign,
        Bitwise_xor_assign,          Logical_or_full,
        Logical_and_full,            Float_plus_assign,
        Float_minus_assign,          Float_mul_assign,
        Float_div_assign,            Float_remainder_assign,
        Logical_or_assign,           Logical_and_assign,
        Logical_xor_assign,          Power_assign,
        Left_shift_assign,           Right_shift_assign,
        Bitwise_or_not_assign,       Bitwise_and_not_assign,
        Logical_or_not_full,         Logical_and_not_full,
        Logical_or_full_assign,      Logical_and_full_assign,
        Float_power_assign,          Logical_or_not_assign,
        Logical_and_not_assign,      Logical_or_not_full_assign,
        Logical_and_not_full_assign, Component,
        Comment_begin,               Comment_end,
        Maybe_logical_or_not,        Maybe_logical_and_not,
        Maybe_component,             Component_or,
        Maybe_component_or,          Comma,
		Kw_anl,
Kw_arrray,
Kw_big,
Kw_c,
Kw_c128,
Kw_c32,
Kw_c64,
Kw_c80,
Kw_cho,
Kw_clean,
Kw_continue,
Kw_const,
Kw_deliv,
Kw_else,
Kw_empt,
Kw_ext,
Kw_false,
Kw_for,
Kw_frv,
Kw_function,
Kw_head,
Kw_if,
Kw_ins,
Kw_kill,
Kw_link,
Kw_log,
Kw_log16,
Kw_log32,
Kw_log64,
Kw_log8,
Kw_mod,
Kw_num,
Kw_propaganda10,
Kw_r,
Kw_r128,
Kw_r32,
Kw_r64,
Kw_r80,
Kw_rep,
Kw_ret,
Kw_sel,
Kw_small,
Kw_string,
Kw_structure,
Kw_sym,
Kw_that,
Kw_true,
Kw_type,
Kw_unval,
Kw_unval128,
Kw_unval16,
Kw_unval32,
Kw_unval64,
Kw_unval8,
Kw_var,
Kw_while,
Kw_whilet,
Kw_z,
Kw_z128,
Kw_z16,
Kw_z32,
Kw_z64,
Kw_z8,
Kw_Iam
		
    };

    struct Lexeme_info{
        Lexem_code code_;
        union{
            unsigned __int128 int_val_;
            __float128        float_val_;
            __complex128      complex_val_;
            char32_t          char_val_;
            std::size_t       str_index_;
            std::size_t       id_index_;
        };
    };
};
#endif
