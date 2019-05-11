#include <stdio.h>
#include "../sbox-forward.h"
#include "../pack.h"

int main() {

        /* Pack up the first few entries */
	uint16_t inputs[8];
	uint8_t rawBytes[16] = {
		0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
		0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F
	};
	pack(inputs, rawBytes);

	uint16_t outputs[8];

        sbox_forward(inputs, outputs);
	uint8_t rawOutputs[16];
	unpack(rawOutputs, outputs);

	for(uint8_t i = 0; i < 16; i++) {
		printf("%02x\n", rawOutputs[i]);
	}

}
