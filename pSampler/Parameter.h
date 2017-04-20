/*
*/
#pragma once
#include "Header.h"

namespace SIM {

	template <typename R, unsigned D>
	class Parameter {
	public:
		Parameter() {}
		~Parameter() {}

	public:
		R k;		//radius k*dp
	};

}