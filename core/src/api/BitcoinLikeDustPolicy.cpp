// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from addresses.djinni

#include "BitcoinLikeDustPolicy.hpp"  // my header
#include "enum_from_string.hpp"

namespace ledger { namespace core { namespace api {

std::string to_string(const BitcoinLikeDustPolicy& bitcoinLikeDustPolicy) {
    switch (bitcoinLikeDustPolicy) {
        case BitcoinLikeDustPolicy::FIXED: return "FIXED";
        case BitcoinLikeDustPolicy::PER_BYTE: return "PER_BYTE";
        case BitcoinLikeDustPolicy::PER_KBYTE: return "PER_KBYTE";
    };
};
template <>
BitcoinLikeDustPolicy from_string(const std::string& bitcoinLikeDustPolicy) {
    if (bitcoinLikeDustPolicy == "FIXED") return BitcoinLikeDustPolicy::FIXED;
    else if (bitcoinLikeDustPolicy == "PER_BYTE") return BitcoinLikeDustPolicy::PER_BYTE;
    else return BitcoinLikeDustPolicy::PER_KBYTE;
};

std::ostream &operator<<(std::ostream &os, const BitcoinLikeDustPolicy &o)
{
    switch (o) {
        case BitcoinLikeDustPolicy::FIXED:  return os << "FIXED";
        case BitcoinLikeDustPolicy::PER_BYTE:  return os << "PER_BYTE";
        case BitcoinLikeDustPolicy::PER_KBYTE:  return os << "PER_KBYTE";
    }
}

} } }  // namespace ledger::core::api
