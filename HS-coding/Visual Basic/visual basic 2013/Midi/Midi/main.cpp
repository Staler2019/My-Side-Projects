#include "MIDI.h"

#include <stdio.h>
#include <stdlib.h>

int main() {
	unsigned char buf[10];
	char input = 0;
	char transform[7] = { 60, 62, 64, 65, 67, 69, 71 };
	
	Open_MCImidi();
	gm_reset();

	while (input != 27){
		input = _getche();
		if (input >= 1){
			if (input <= 7){
				buf[0] = 0x90;
				buf[1] = transform[input - 49];
				buf[2] = 127;
				Write_MCImidi(3, buf);
			}
		}
	}

	system("pause");
	return 0;
}