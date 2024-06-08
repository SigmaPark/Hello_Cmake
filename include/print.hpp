#pragma once

#ifdef BUILD_PRAC
#define PRAC_API __declspec(dllexport)
#else
#define PRAC_API __declspec(dllimport)
#endif


namespace prac
{
	extern "C"
	{

		void PRAC_API Print(char const* const msg);
		void PRAC_API Press_enter_to_exit();

	}
}

