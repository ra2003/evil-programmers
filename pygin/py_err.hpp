#pragma once
#include "py_object.hpp"

namespace py
{
	namespace err
	{
		object occurred();
		void clear();
		void print();
	}
}