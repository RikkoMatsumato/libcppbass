#include "bass.h"
#include <Windows.h>
using namespace bass;
bool bass::BASS_INIT() {
	auto BASS_Init = exlib.get_function<bool(int, int, int, int, int)>("BASS_Init");
	if (!BASS_Init(-1, 48000, 0, 0, 0)) {
		return false;
	}
	else {
		return true;
	}
}

bool bass::BASS_Start()
{
	auto BASS_Start = exlib.get_function<bool()>("BASS_Start");
	if (BASS_Start())
	{
		return true;
	}
	else {
		return false;
	}
}

uint32_t bass::BASS_StreamCreateFile(LPCSTR str, int flag) {
	auto BASS_StreamCreateFile = exlib.get_function<uint32_t(bool, LPCSTR, int, int, int)>("BASS_StreamCreateFile");
	return BASS_StreamCreateFile(false, str, 0, 0, flag);
}

void bass::BASS_ChannelPlay(uint32_t handle)
{
	auto BASS_ChannelPlay = exlib.get_function<void(uint32_t, bool)>("BASS_ChannelPlay");
	BASS_ChannelPlay(handle, false);
}

bool bass::BASS_FREE() {
	auto BASS_Free = exlib.get_function<bool()>("BASS_Free");
	if (!BASS_Free()) 
	{
		return false;
	}
	else {
		return true;
	}
}

bool bass::BASS_STOP() {
	auto bass_stop = exlib.get_function<bool()>("BASS_Stop");
	if (!bass_stop()) {
		return false;
	}
	else {
		return true;
	}
}