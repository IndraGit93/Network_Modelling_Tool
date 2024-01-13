#ifndef LOGGER_H
#define LOGGER_H

#include "spdlog/spdlog.h"
#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/sinks/basic_file_sink.h>
using std::shared_ptr;
extern shared_ptr<spdlog::logger> logger;
void initializeLogger();
#endif //END OF LOGGER_H