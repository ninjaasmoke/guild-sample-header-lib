// StringUtils.h
#ifndef STRING_UTILS_H
#define STRING_UTILS_H

#include <algorithm>
#include <cctype>
#include <string>

namespace StringUtils {

// Trim leading and trailing whitespace
inline std::string trim(const std::string& str) {
    auto start = str.find_first_not_of(" \t\n\r");
    auto end = str.find_last_not_of(" \t\n\r");
    return (start == std::string::npos) ? "" : str.substr(start, end - start + 1);
}

// Convert string to uppercase
inline std::string toUpper(const std::string& str) {
    std::string result = str;
    std::transform(result.begin(), result.end(), result.begin(),
                   [](unsigned char c) { return std::toupper(c); });
    return result;
}

// Check if string starts with a given substring
inline bool startsWith(const std::string& str, const std::string& prefix) {
    return str.compare(0, prefix.size(), prefix) == 0;
}

} // namespace StringUtils

#endif // STRING_UTILS_H
