#include "MIDI.h"

HMIDIOUT g_hMidiout;		//宣告HMIDIOUT型態變數

BOOL Open_MCImidi(void) {
	if (midiOutOpen(&g_hMidiout, MIDIMAPPER, 0, 0, 0) != MMSYSERR_NOERROR) {
		fprintf(stderr, "MIDI OPEN FILED\n");
		return 1;
	}
	return 0;
}

void gm_reset(void) {
	unsigned char buf[6] = { 0xf0, 0x7e, 0x7f, 0x09, 0x01, 0xf7 };
	Write_MCImidi(6, buf);
}

void Write_MCImidi(int num, unsigned char *buf) {
	if (num > 4) {        //判斷是否為短消息
		MIDIHDR mhMidi;
		ZeroMemory(&mhMidi, sizeof(mhMidi)); //用0填充指定長度的內存區域 
		mhMidi.lpData = (LPSTR)buf;
		mhMidi.dwBufferLength = num;
		mhMidi.dwBytesRecorded = num;
		midiOutPrepareHeader(g_hMidiout, &mhMidi, sizeof(mhMidi));

		// 向輸出設備發送一條系統專用的MIDI消息
		if (midiOutLongMsg(g_hMidiout, &mhMidi, sizeof(mhMidi)) != MMSYSERR_NOERROR) {
			midiOutUnprepareHeader(g_hMidiout, &mhMidi, sizeof(mhMidi));
			fprintf(stderr, "Failed\n");
			return;
		}

		// 發送完成，待機
		while ((mhMidi.dwFlags & MHDR_DONE) == 0);
		midiOutUnprepareHeader(g_hMidiout, &mhMidi, sizeof(mhMidi));  //清除midioutprepareHeader
	}
	else {			// 短消息	// sends a short MIDI message to the specified MIDI output device
		union {
			DWORD dwData;
			BYTE bData[4];
		}u;

		// Construct the MIDI message
		u.bData[0] = buf[0];	// MIDI status byte
		u.bData[1] = buf[1];	// first MIDI data byte
		u.bData[2] = buf[2];	// second MIDI data byte
		u.bData[3] = buf[3];

		midiOutShortMsg(g_hMidiout, u.dwData);	//向音效卡發送命令，根據參數值發聲
	}
}

void change_Timbre(int number) {
	unsigned char buf[2];
	buf[0] = 0xc0;
	buf[1] = number;
	Write_MCImidi(2, buf);
}