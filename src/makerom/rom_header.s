#include "rom_header.h"

/* 0x00 */ ENDIAN_IDENTIFIER
/* 0x01 */ PI_DOMAIN_1_CFG(64, 18, 7, 3)
/* 0x04 */ SYSTEM_CLOCK_RATE_SETTING(0xF)
/* 0x08 */ ENTRYPOINT(0x80000400)
/* 0x0C */ LIBULTRA_VERSION(2, 0, L)
/* 0x10 */ CHECKSUM()
/* 0x18 */ PADDING(8)
/* 0x20 */ ROM_NAME("Zelda Master Luma")
/* 0x34 */ PADDING(7)
/* 0x3B */ MEDIUM(CARTRIDGE)
/* 0x3C */ GAME_ID("ZL")
/* 0x3E */ REGION(US)
#if OOT_DEBUG
/* 0x3F */ GAME_REVISION(222)
#else
/* 0x3F */ GAME_REVISION(0)
#endif
