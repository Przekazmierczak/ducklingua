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
    Lexer lexer1(dictionaryName + "test1.duckbugger");
    Parser parser1(lexer1.tokens);
    IR irgenerator1(parser1.ASTroot);
    VM vm1(irgenerator1.instructions, irgenerator1.functionsInstructions, irgenerator1.functionsMetaMap);

    Value res1[] = {
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

    std::cout << "test1 passed." << std::endl;
}

void test2() {
    Lexer lexer2(dictionaryName + "test2.duckbugger");
    Parser parser2(lexer2.tokens);
    IR irgenerator2(parser2.ASTroot);
    VM vm2(irgenerator2.instructions, irgenerator2.functionsInstructions, irgenerator2.functionsMetaMap);

    Value res2[] = {
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
        Value(true)
    };

    std::cout << "test2 passed." << std::endl;
}

void test3() {
    Lexer lexer3(dictionaryName + "test3.duckbugger");
    Parser parser3(lexer3.tokens);
    IR irgenerator3(parser3.ASTroot);
    VM vm3(irgenerator3.instructions, irgenerator3.functionsInstructions, irgenerator3.functionsMetaMap);

    Value res3[] = {
        Value(1),
        Value(5),
        Value(5),
        Value(false),
        Value(4),
        Value(1),
        Value(5),
        Value(5)
    };

    for (int i = 0; i < vm3.registers.size(); i++) {
        assert(vm3.registers[i] == res3[i]);
    }

    std::cout << "test3 passed." << std::endl;
}

void test4() {
    Lexer lexer4(dictionaryName + "test4.duckbugger");
    Parser parser4(lexer4.tokens);
    IR irgenerator4(parser4.ASTroot);
    VM vm4(irgenerator4.instructions, irgenerator4.functionsInstructions, irgenerator4.functionsMetaMap);

    assert(vm4.registers.back() == Value(4));

    std::cout << "test4 passed." << std::endl;
}

void test5() {
    Lexer lexer5(dictionaryName + "test5.duckbugger");
    Parser parser5(lexer5.tokens);
    IR irgenerator5(parser5.ASTroot);
    VM vm5(irgenerator5.instructions, irgenerator5.functionsInstructions, irgenerator5.functionsMetaMap);

    assert(vm5.registers[0] == Value(10));

    std::cout << "test5 passed." << std::endl;
}

void test6() {
    Lexer lexer6(dictionaryName + "test6.duckbugger");
    Parser parser6(lexer6.tokens);
    IR irgenerator6(parser6.ASTroot);
    VM vm6(irgenerator6.instructions, irgenerator6.functionsInstructions, irgenerator6.functionsMetaMap);

    assert(vm6.registers.back() == Value(6));

    std::cout << "test6 passed." << std::endl;
}

void test7() {
    Lexer lexer7(dictionaryName + "test7.duckbugger");
    Parser parser7(lexer7.tokens);
    IR irgenerator7(parser7.ASTroot);
    VM vm7(irgenerator7.instructions, irgenerator7.functionsInstructions, irgenerator7.functionsMetaMap);

    assert(vm7.registers[0] == Value(56));

    std::cout << "test7 passed." << std::endl;
}

void test8() {
    Lexer lexer8(dictionaryName + "test8.duckbugger");
    Parser parser8(lexer8.tokens);
    IR irgenerator8(parser8.ASTroot);
    VM vm8(irgenerator8.instructions, irgenerator8.functionsInstructions, irgenerator8.functionsMetaMap);

    assert(vm8.registers[0] == Value(55));

    std::cout << "test8 passed." << std::endl;
}