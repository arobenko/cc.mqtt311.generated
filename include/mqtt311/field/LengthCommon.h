// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt311::field::Length field.

#pragma once

#include <cstdint>

namespace mqtt311
{

namespace field
{

/// @brief Common types and functions for
///     @ref mqtt311::field::Length field.
struct LengthCommon
{
    /// @brief Re-definition of the value type used by
    ///     mqtt311::field::Length field.
    using ValueType = std::uint16_t;

    /// @brief Name of the @ref mqtt311::field::Length field.
    static const char* name()
    {
        return "Length";
    }
    
};

} // namespace field

} // namespace mqtt311


