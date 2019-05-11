#include "pack.h"

void pack_64_bytes_to_8_x_uint64_t(uint64_t *out, const uint8_t *in) {

        memset(out, 0x00, 8 * sizeof(uint64_t));

	for(int64_t i = 0; i < 8; i++) {
	    for(int64_t j = 0; j < 64; j++) {
		if((i - j) < 0) {
			out[i] |= (uint64_t)((((uint64_t)(in[j]) & ((uint64_t)1 << i)) << (j - i)));
		} else {
		        out[i] |= (uint64_t)((((uint64_t)(in[j]) & ((uint64_t)1 << i)) >> (i - j)));
		}
	    }
	}

}

void pack_32_bytes_to_8_x_uint32_t(uint32_t *out, const uint8_t *in) {

        memset(out, 0x00, 8 * sizeof(uint32_t));

        for(int64_t i = 0; i < 8; i++) {
            for(int64_t j = 0; j < 32; j++) {
                if((i - j) < 0) {
                        out[i] |= (uint32_t)(((in[j] & (0x00000001 << i)) << (j - i)));
                } else {
                        out[i] |= (uint32_t)(((in[j] & (0x00000001 << i)) >> (i - j)));
                }
            }
        }

}


void unpack_8_x_uint64_t_to_64_bytes(uint8_t *out, const uint64_t *in) {
	memset(out, 0x00, 64 * sizeof(uint8_t));

        for(int64_t i = 0; i < 64; i++) {
            for(int64_t j = 0; j < 8; j++) {
		if((i - j) < 0) {
		    out[i] |= (uint64_t)(((in[j] & ((uint64_t)1 << i)) << (j - i)));
		} else {
                    out[i] |= (uint64_t)(((in[j] & ((uint64_t)1 << i)) >> (i - j)));
		}
            }
        }


}

void unpack_8_x_uint32_t_to_32_bytes(uint8_t *out, const uint32_t *in) {
        memset(out, 0x00, 32 * sizeof(uint8_t));

        for(int64_t i = 0; i < 32; i++) {
            for(int64_t j = 0; j < 8; j++) {
                if((i - j) < 0) {
                    out[i] |= (uint32_t)(((in[j] & (0x00000001 << i)) << (j - i)));
                } else {
                    out[i] |= (uint32_t)(((in[j] & (0x00000001 << i)) >> (i - j)));
                }
            }
        }


}


