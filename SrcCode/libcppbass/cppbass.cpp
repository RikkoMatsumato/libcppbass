#include "cppbass.h"
#include <Windows.h>
using namespace cppbass;
bool cppbass::BASS_INIT() {
	auto BASS_Init = GetDLL().get_function<bool(int, int, int, int, int)>("BASS_Init");
	if (!BASS_Init(-1, 48000, 0, 0, 0)) {
		return false;
	}
	else {
		return true;
	}
}

bool cppbass::BASS_Start() 
{
	auto BASS_Start = GetDLL().get_function<bool()>("BASS_Start");
	if (BASS_Start())
	{
		return true;
	}
	else {
		return false;
	}
}

uint32_t cppbass::BASS_StreamCreateFile(LPCWSTR str, int flag) {
	auto BASS_StreamCreateFile = GetDLL().get_function<uint32_t(bool, LPCWSTR, int, int, int)>("BASS_StreamCreateFile");
	return BASS_StreamCreateFile(false, str, 0, 0, flag);
}

void cppbass::BASS_ChannelPlay(uint32_t handle)
{
	auto BASS_ChannelPlay = GetDLL().get_function<void(uint32_t, bool)>("BASS_ChannelPlay");
	BASS_ChannelPlay(handle, false);
}

bool cppbass::BASS_FREE() {
	auto BASS_Free = GetDLL().get_function<bool()>("BASS_Free");
	if (!BASS_Free()) 
	{
		return false;
	}
	else {
		return true;
	}
}

bool cppbass::BASS_STOP() {
	auto bass_stop = GetDLL().get_function<bool()>("BASS_Stop");
	if (!bass_stop()) {
		return false;
	}
	else {
		return true;
	}
}
