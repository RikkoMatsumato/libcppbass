#pragma once
#include <dylib.hpp>
#define BASS_LOOP 4
namespace cppbass {
	dylib GetDLL() {
		dylib lib(".\\lib", "bass");
		return lib;
	}
	bool BASS_INIT();
	bool BASS_Start();
	uint32_t BASS_StreamCreateFile(LPCSTR str, int flag);
	void BASS_ChannelPlay(uint32_t handle);
	bool BASS_FREE();
	bool BASS_STOP();
}
