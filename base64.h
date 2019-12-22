#include <string>

#ifndef BASE64_KEDDAD_BASE64_H
#define BASE64_KEDDAD_BASE64_H

namespace Base64 {
    std::string encode(const std::string &input);

    std::string decode(const std::string &input);
};

#endif //BASE64_KEDDAD_BASE64_H
