#include "stdafx.h"
#include "Data.hpp"

namespace FreeScript
{
	TESDataHandler* TESDataHandler::GetInstance()
	{
		return *((TESDataHandler**)0x12e1eb8);
	}
}