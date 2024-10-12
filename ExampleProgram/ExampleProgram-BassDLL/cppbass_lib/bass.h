#pragma once
#include <dylib.hpp>
#define BASS_LOOP 4
inline dylib exlib(".\\lib", "bass");
namespace bass {
	bool BASS_INIT();
	bool BASS_Start();
	uint32_t BASS_StreamCreateFile(LPCSTR str, int flag);
	void BASS_ChannelPlay(uint32_t handle);
	bool BASS_FREE();
	bool BASS_STOP();
}
