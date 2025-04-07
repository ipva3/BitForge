#pragma once

#include "defines.h"

// Returns the length of the given string.

BFAPI u64 string_length(const char* str);

BFAPI char* string_duplicate(const char* str);

// Case-sensetive string comparison. `true` if the same, otherwise `false`.
BFAPI b8 strings_equal(const char* str0, const char* str1);
