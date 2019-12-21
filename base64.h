#include <string>

#ifndef BASE64_KEDDAD_BASE64_H
#define BASE64_KEDDAD_BASE64_H

class Base64{
public:
    static std::string encode(const std::string &input);
    static std::string decode(const std::string &input);

private:
    static void encode_chunk(char *chunk);
    static void decode_chunk(char *chunk);
    static void nullify_chunk(char *chunk);
};

#endif //BASE64_KEDDAD_BASE64_H
