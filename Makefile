LINKER        = g++
LINKERFLAGS   =  -s
COMPILER      = g++
COMPILERFLAGS =  -std=gnu++14 -Wall -g
BIN           = desman-scanner
LIBS          = -lboost_filesystem -lboost_system -lquadmath
vpath %.cpp src
vpath %.o build
OBJ           = desman-scanner.o error_count.o char_trie.o char_conv.o desman_scaner_keyword_table.o fsize.o get_init_state.o keyword_init_table.o desman_scaner.o search_char.o file_contents.o get_processed_text.o usage.o print_char32.o idx_to_string.o test_desman_scaner.o digit_to_int.o float128_to_string.o desman_scaner_delimiter_table.o delimiter_init_table.o int128_to_str.o
LINKOBJ       = build/desman-scanner.o build/error_count.o build/char_trie.o build/char_conv.o build/desman_scaner_keyword_table.o build/fsize.o build/get_init_state.o build/keyword_init_table.o build/desman_scaner.o build/search_char.o build/file_contents.o build/get_processed_text.o build/usage.o build/print_char32.o build/idx_to_string.o build/test_desman_scaner.o build/digit_to_int.o build/float128_to_string.o build/desman_scaner_delimiter_table.o build/delimiter_init_table.o build/int128_to_str.o

.PHONY: all all-before all-after clean clean-custom

all: all-before $(BIN) all-after

clean: clean-custom 
	rm -f ./build/*.o
	rm -f ./build/$(BIN)

.cpp.o:
	$(COMPILER) -c $< -o $@ $(COMPILERFLAGS) 
	mv $@ ./build

$(BIN):$(OBJ)
	$(LINKER) -o $(BIN) $(LINKOBJ) $(LIBS) $(LINKERFLAGS)
	mv $(BIN) ./build
