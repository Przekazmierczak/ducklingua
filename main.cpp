#include "lexer.h"
#include "parser.h"
#include "ir.h"
#include "vm.h"
#include "assert.h"
#include "value.h"

#include "tests.h"

// Ducklingua

int main() {
    Lexer lexer("code.duck");

    #ifdef DEBUG
        lexer.debugPrintTokens();
    #endif

    Parser parser(lexer.tokens);

    IR irgenerator(parser.ASTroot);

    #ifdef DEBUG
        irgenerator.print();
    #endif

    VM vm(irgenerator.instructions, irgenerator.functionsInstructions, irgenerator.functionsMetaMap);

    #ifdef DEBUG
        vm.print();

        return runTests();
    #endif
    
    return 0;
}