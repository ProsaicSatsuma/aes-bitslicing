#include "pack.h"

void pack(uint64_t *out, const uint8_t *in) {

        memset(out, 0x00, 8 * sizeof(uint64_t));

	for(uint8_t i = 0; i < 8; i++) {
	    for(uint8_t j = 0; j < 64; j++) {
		if((i - j) < 0) {
			out[i] |= (uint64_t)(((in[j] & (0x0000000000000001 << i)) << (j - i)));
		} else {
		        out[i] |= (uint64_t)(((in[j] & (0x0000000000000001 << i)) >> (i - j)));
		}
	    }
	}

}

void unpack(uint8_t *out, const uint64_t *in) {
	memset(out, 0x00, 64 * sizeof(uint8_t));

        for(uint8_t i = 0; i < 64; i++) {
            for(uint8_t j = 0; j < 8; j++) {
		if((i - j) < 0) {
		    out[i] |= (uint64_t)(((in[j] & (0x0000000000000001 << i)) << (j - i)));
		} else {
                    out[i] |= (uint64_t)(((in[j] & (0x0000000000000001 << i)) >> (i - j)));
		}
            }
        }


}
