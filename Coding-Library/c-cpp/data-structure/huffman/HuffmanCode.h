#ifndef _HUFFMAN_CODE_
#define _HUFFMAN_CODE_

#include <map>
#include <string>
#include <utility>

/*-------------------------------------------------------------
Author:             Staler2019
Created Date:       2021/06/05
Last modified Date: 2021/06/05
Description:        Declare Timer at the beginning and this do effort
--------------------------------------------------------------*/
class Huffman {
    std::map<char, std::string> encodeArray;
    std::vector<std::pair<std::string, char>> decodeArray;

    void encode(std::string);
    bool stringCompare(std::pair<std::string, char>, std::pair<std::string, char>);

  public:
    std::string decode(std::string);
    void print();

    Huffman(std::string);
};

#endif // !_HUFFMAN_CODE