#include "pack.h"

void pack(uint16_t *out, const uint8_t *in) {

        memset(out, 0x00, 16 * sizeof(uint16_t));

	for(uint8_t i = 0; i < 8; i++) {
	    for(uint8_t j = 0; j < 16; j++) {
		if((i - j) < 0) {
			out[i] |= ((in[j] & (0x01 << i)) << (j - i));
		} else {
		        out[i] |= ((in[j] & (0x01 << i)) >> (i - j));
		}
	    }
	}

}

void unpack(uint8_t *out, const uint16_t *in) {
	memset(out, 0x00, 16 * sizeof(uint8_t));

        for(uint8_t i = 0; i < 16; i++) {
            for(uint8_t j = 0; j < 8; j++) {
		if((i - j) < 0) {
		    out[i] |= ((in[j] & (0x01 << i)) << (j - i));
		} else {
                    out[i] |= ((in[j] & (0x01 << i)) >> (i - j));
		}
            }
        }


}
