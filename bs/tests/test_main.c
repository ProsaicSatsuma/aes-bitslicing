#include <stdio.h>
#include "../sbox-forward.h"
#include "../pack.h"

int main() {

        /* Pack up the first few entries */
	uint8_t inputs[8];
	uint8_t rawBytes[8] = {0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07};
	pack(inputs, rawBytes);

	uint8_t outputs[8];

        sbox_forward(inputs, outputs);
	uint8_t rawOutputs[8];
	unpack(rawOutputs, outputs);

	for(uint8_t i = 0; i < 8; i++) {
		printf("%02x\n", rawOutputs[i]);
	}

}
