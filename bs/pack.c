#include "pack.h"

void pack(uint32_t *out, const uint8_t *in) {

        memset(out, 0x00, 8 * sizeof(uint32_t));

	for(uint8_t i = 0; i < 8; i++) {
	    for(uint8_t j = 0; j < 32; j++) {
		if((i - j) < 0) {
			out[i] |= ((in[j] & (0x01 << i)) << (j - i));
		} else {
		        out[i] |= ((in[j] & (0x01 << i)) >> (i - j));
		}
	    }
	}

}

void unpack(uint8_t *out, const uint32_t *in) {
	memset(out, 0x00, 32 * sizeof(uint8_t));

        for(uint8_t i = 0; i < 32; i++) {
            for(uint8_t j = 0; j < 8; j++) {
		if((i - j) < 0) {
		    out[i] |= ((in[j] & (0x01 << i)) << (j - i));
		} else {
                    out[i] |= ((in[j] & (0x01 << i)) >> (i - j));
		}
            }
        }


}
