// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt311::field::Topic field.

#pragma once

#include "mqtt311/field/StringCommon.h"

namespace mqtt311
{

namespace field
{

/// @brief Common types and functions for
///     @ref mqtt311::field::Topic field.
struct TopicCommon : public mqtt311::field::StringCommon
{
    /// @brief Name of the @ref mqtt311::field::Topic field.
    static const char* name()
    {
        return "Topic";
    }
    
};

} // namespace field

} // namespace mqtt311


