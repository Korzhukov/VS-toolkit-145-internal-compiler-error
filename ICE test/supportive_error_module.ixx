module;

#include "supportive_error_module.ixx.h"

export module supportive_error_module;

import <chrono>;

namespace supportive_error_module
{
	std::chrono::time_point<std::chrono::system_clock> requiured_error_variable = std::chrono::system_clock::now();

	export void supportive_error_function(std::wstring eventText)
	{
		return;
	}

};