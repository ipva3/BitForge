#pragma once

#include "defines.h"

#define LOG_WARN_ENABLED 1
#define LOG_INFO_ENABLED 1
#define LOG_DEBUG_ENABLED 1
#define LOG_TRACE_ENABLED 1

#if BFRELEASE == 1
#  define LOG_DEBUG_ENABLED 0
#  define LOG_TRACE_ENABLED 0
#endif

typedef enum log_level {
  LOG_LEVEL_FATAL = 0,
  LOG_LEVEL_ERROR = 1,
  LOG_LEVEL_WARN = 2,
  LOG_LEVEL_INFO = 3,
  LOG_LEVEL_DEBUG = 4,
  LOG_LEVEL_TRACE = 5
} log_level;

b8 initialize_logging();
void shutdown_logging();

BFAPI void log_ouput(log_level level, const char* message, ...);

#define BFFATAL(message, ...) log_ouput(LOG_LEVEL_FATAL, message, ##__VA_ARGS__);

#ifndef BFERROR
#  define BFERROR(message, ...) log_ouput(LOG_LEVEL_ERROR, message, ##__VA_ARGS__);
#endif

#if LOG_WARN_ENABLED == 1
#  define BFWARN(message, ...) log_ouput(LOG_LEVEL_WARN, message, ##__VA_ARGS__);
#else
#  define BFWARN(message, ...)
#endif

#if LOG_INFO_ENABLED == 1
#  define BFINFO(message, ...) log_ouput(LOG_LEVEL_INFO, message, ##__VA_ARGS__);
#else
#  define BFINFO(message, ...)
#endif

#if LOG_DEBUG_ENABLED == 1
#  define BFDEBUG(message, ...) log_ouput(LOG_LEVEL_DEBUG, message, ##__VA_ARGS__);
#else
#  define BFDEBUG(message, ...)
#endif

#if LOG_TRACE_ENABLED == 1
#  define BFTRACE(message, ...) log_ouput(LOG_LEVEL_TRACE, message, ##__VA_ARGS__);
#else
#  define BFTRACE(message, ...)
#endif
