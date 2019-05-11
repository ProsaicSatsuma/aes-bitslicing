#include <stdint.h>
#include <string.h>

void pack_64_bytes_to_8_x_uint64_t(uint64_t *out, const uint8_t *in);
void pack_32_bytes_to_8_x_uint32_t(uint32_t *out, const uint8_t *in);

void unpack_8_x_uint64_t_to_64_bytes(uint8_t *out, const uint64_t *in);
void unpack_8_x_uint32_t_to_32_bytes(uint8_t *out, const uint32_t *in);
