#include "tests.h"

using TestFunct = void(*)();
TestFunct testsList[] = {
    test1, test2, test3, test4,
    test5, test6, test7, test8
};

int runTests() {
    for (auto test : testsList) {
        test();
    }
    std::cout << "All tests passed!" << std::endl;

    return 0;
}

std::string dictionaryName = "tests/";

void test1() {
    Lexer lexer(dictionaryName + "test1.duckbugger");
    Parser parser(lexer.tokens);
    IR irgenerator(parser.ASTroot);
    VM vm(irgenerator.instructions, irgenerator.functionsInstructions, irgenerator.functionsMetaMap);

    Value res[] = {
        Value(1),
        Value(23),
        Value(24),
        Value(45),
        Value(4),
        Value(41),
        Value(4),
        Value(5),
        Value(20),
        Value(7),
        Value(7),
        Value(1),
        Value(2),
        Value(-2),
        Value(3),
        Value(-3),
        Value(3)
    };

    for (int i = 0; i < vm.registers.size(); i++) {
        assert(vm.registers[i] == res[i]);
    }

    std::cout << "test1 passed." << std::endl;
}

void test2() {
    Lexer lexer(dictionaryName + "test2.duckbugger");
    Parser parser(lexer.tokens);
    IR irgenerator(parser.ASTroot);
    VM vm(irgenerator.instructions, irgenerator.functionsInstructions, irgenerator.functionsMetaMap);

    Value res[] = {
        Value(4),
        Value(5),
        Value(false),
        Value(),
        Value(),
        Value(),
        Value(3),
        Value(4),
        Value(true),
        Value(3),
        Value(3),
        Value(true),
        Value(4),
        Value(3),
        Value(true),
        Value(),
        Value(),
        Value(),
    };

    for (int i = 0; i < vm.registers.size(); i++) {
        assert(vm.registers[i] == res[i]);
    }

    std::cout << "test2 passed." << std::endl;
}

void test3() {
    Lexer lexer(dictionaryName + "test3.duckbugger");
    Parser parser(lexer.tokens);
    IR irgenerator(parser.ASTroot);
    VM vm(irgenerator.instructions, irgenerator.functionsInstructions, irgenerator.functionsMetaMap);

    Value res[] = {
        Value(1),
        Value(5),
        Value(5),
        Value(false),
        Value(4),
        Value(1),
        Value(5),
        Value(5)
    };

    for (int i = 0; i < vm.registers.size(); i++) {
        assert(vm.registers[i] == res[i]);
    }

    std::cout << "test3 passed." << std::endl;
}

void test4() {
    Lexer lexer(dictionaryName + "test4.duckbugger");
    Parser parser(lexer.tokens);
    IR irgenerator(parser.ASTroot);
    VM vm(irgenerator.instructions, irgenerator.functionsInstructions, irgenerator.functionsMetaMap);

    assert(vm.registers.back() == Value(4));

    std::cout << "test4 passed." << std::endl;
}

void test5() {
    Lexer lexer(dictionaryName + "test5.duckbugger");
    Parser parser(lexer.tokens);
    IR irgenerator(parser.ASTroot);
    VM vm(irgenerator.instructions, irgenerator.functionsInstructions, irgenerator.functionsMetaMap);

    assert(vm.registers[0] == Value(10));

    std::cout << "test5 passed." << std::endl;
}

void test6() {
    Lexer lexer(dictionaryName + "test6.duckbugger");
    Parser parser(lexer.tokens);
    IR irgenerator(parser.ASTroot);
    VM vm(irgenerator.instructions, irgenerator.functionsInstructions, irgenerator.functionsMetaMap);

    assert(vm.registers.back() == Value(6));

    std::cout << "test6 passed." << std::endl;
}

void test7() {
    Lexer lexer(dictionaryName + "test7.duckbugger");
    Parser parser(lexer.tokens);
    IR irgenerator(parser.ASTroot);
    VM vm(irgenerator.instructions, irgenerator.functionsInstructions, irgenerator.functionsMetaMap);

    assert(vm.registers[0] == Value(56));

    std::cout << "test7 passed." << std::endl;
}

void test8() {
    Lexer lexer(dictionaryName + "test8.duckbugger");
    Parser parser(lexer.tokens);
    IR irgenerator(parser.ASTroot);
    VM vm(irgenerator.instructions, irgenerator.functionsInstructions, irgenerator.functionsMetaMap);

    assert(vm.registers[0] == Value(55));

    std::cout << "test8 passed." << std::endl;
}