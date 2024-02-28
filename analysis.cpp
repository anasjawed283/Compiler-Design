//Author - Anas Jawed
//Date - 28/02/2024
//21BRS1336 Anas Jawed
#include <iostream>
#include <fstream>
#include <string>
#include <regex>
// Function to classify tokens
void classifyTokens(const std::string &sourceCode)
{
    std::regex tokenRegex(R"(\b(void|int|main)\b|(\()|(\))|(\{)|(\})|([a-zA-Z_][a-zA-Z0-9_]*)|(;)|(\+|\-|\*|\/|\=))");
    std::sregex_iterator it(sourceCode.begin(), sourceCode.end(), tokenRegex);
    std::sregex_iterator end;
    while (it != end)
    {
        std::smatch match = *it;

        if (match[1].matched)
        {
            std::cout << match.str() << " (Keyword)" << std::endl;
        }
        else if (match[2].matched)
        {
            std::cout << match.str() << " (Left Parenthesis)" << std::endl;
        }
        else if (match[3].matched)
        {
            std::cout << match.str() << " (Right Parenthesis)" << std::endl;
        }
        else if (match[4].matched)
        {
            std::cout << match.str() << " (Left Brace)" << std::endl;
        }
        else if (match[5].matched)
        {
            std::cout << match.str() << " (Right Brace)" << std::endl;
        }
        else if (match[6].matched)
        {
            std::cout << match.str() << " (Identifier)" << std::endl;
        }
        else if (match[7].matched)
        {
            std::cout << match.str() << " (Semicolon)" << std::endl;
        }
        else if (match[8].matched)
        {
            std::cout << match.str() << " (Operator)" << std::endl;
        }
        ++it;
    }
}
int main()
{
    std::ifstream inputFile("source.cpp");
    std::string sourceCode((std::istreambuf_iterator<char>(inputFile)), std::istreambuf_iterator<char>());
    classifyTokens(sourceCode);
    return 0;
}
