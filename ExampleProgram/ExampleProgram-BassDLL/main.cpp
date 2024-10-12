#include "includes.h"

int main() {
	int one_num = 1;
	if (m::BASS_INIT())
	{
		cout << "BASS Is Initializated Successfully" << endl;
		if (m::BASS_Start())
		{
			cout << "Bass Module Is Founded And Started Successfully!!!" << endl;
			uint32_t x_musicex = m::BASS_StreamCreateFile((LPCSTR)"Example.mp3", BASS_LOOP);
			m::BASS_ChannelPlay(x_musicex);
		}
		else {
			cout << "Failed to Starting BASS Module!!!" << endl;
		}
	}
	cout << "Press One To Stop Music: ";
	cin >> one_num;
	if (m::BASS_FREE()) {
		m::BASS_STOP();
		exit(3342);
	}
	return 0;
}