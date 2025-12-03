module;

export module main_error_module;

import <string>;
import <algorithm>;

import supportive_error_module;

namespace main_error_module
{
	void main_error_module_function(std::wstring path)
	{
		std::transform(path.begin(), path.end(), path.begin(), ::towlower);
	}

}