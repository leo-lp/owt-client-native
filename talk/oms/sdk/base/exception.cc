/*
 * Intel License
 */

#include "talk/oms/sdk/include/cpp/oms/base/exception.h"

namespace oms {
namespace base {

Exception::Exception()
    : Exception(ExceptionType::kUnknown, "Unknown exception.") {}

Exception::Exception(const ExceptionType& type, const std::string& message)
    : type_(type), message_(message) {}

ExceptionType Exception::Type() const {
  return type_;
}

std::string Exception::Message() const {
  return message_;
}

}
}