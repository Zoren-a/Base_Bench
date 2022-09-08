#ifndef __SKIP_INTERNAL_FATBINARY_HEADERS
#include "fatbinary_section.h"
#endif
#define __CUDAFATBINSECTION  ".nvFatBinSegment"
#define __CUDAFATBINDATASECTION  ".nv_fatbin"
asm(
".section .nv_fatbin, \"a\"\n"
".align 8\n"
"fatbinData:\n"
".quad 0x00100001ba55ed50,0x0000000000001be0,0x0000004001010002,0x00000000000012c8\n"
".quad 0x0000000000000000,0x0000003400010007,0x0000000000000000,0x0000000000000011\n"
".quad 0x0000000000000000,0x0000000000000000,0x33010102464c457f,0x0000000000000007\n"
".quad 0x0000007200be0002,0x0000000000000000,0x0000000000001220,0x0000000000000fa0\n"
".quad 0x0038004000340534,0x0001000a00400003,0x7472747368732e00,0x747274732e006261\n"
".quad 0x746d79732e006261,0x746d79732e006261,0x78646e68735f6261,0x666e692e766e2e00\n"
".quad 0x2e747865742e006f,0x675f776e34315a5f,0x6e72656b5f327570,0x69505f5368506c65\n"
".quad 0x692e766e2e006a6a,0x34315a5f2e6f666e,0x5f327570675f776e,0x68506c656e72656b\n"
".quad 0x2e006a6a69505f53,0x65726168732e766e,0x776e34315a5f2e64,0x656b5f327570675f\n"
".quad 0x5f5368506c656e72,0x766e2e006a6a6950,0x6e6174736e6f632e,0x6e34315a5f2e3074\n"
".quad 0x6b5f327570675f77,0x5368506c656e7265,0x6e2e006a6a69505f,0x63612e6c65722e76\n"
".quad 0x732e00006e6f6974,0x0062617472747368,0x006261747274732e,0x006261746d79732e\n"
".quad 0x5f6261746d79732e,0x6e2e0078646e6873,0x5f006f666e692e76,0x70675f776e34315a\n"
".quad 0x656e72656b5f3275,0x6a69505f5368506c,0x2e747865742e006a,0x675f776e34315a5f\n"
".quad 0x6e72656b5f327570,0x69505f5368506c65,0x692e766e2e006a6a,0x34315a5f2e6f666e\n"
".quad 0x5f327570675f776e,0x68506c656e72656b,0x2e006a6a69505f53,0x65726168732e766e\n"
".quad 0x776e34315a5f2e64,0x656b5f327570675f,0x5f5368506c656e72,0x5f5f24006a6a6950\n"
".quad 0x5f776e34315a5a5f,0x72656b5f32757067,0x505f5368506c656e,0x6f5f7138456a6a69\n"
".quad 0x335f5f7465736666,0x5a5a5f5f5f240033,0x7570675f776e3431,0x6c656e72656b5f32\n"
".quad 0x6a6a69505f536850,0x7366666f5f723845,0x240035335f5f7465,0x6e34315a5a5f5f5f\n"
".quad 0x6b5f327570675f77,0x5368506c656e7265,0x3031456a6a69505f,0x6d696c5f706f6f6c\n"
".quad 0x240037335f5f7469,0x6e34315a5a5f5f5f,0x6b5f327570675f77,0x5368506c656e7265\n"
".quad 0x6239456a6a69505f,0x735f317265666675,0x5f5f240039335f5f,0x5f776e34315a5a5f\n"
".quad 0x72656b5f32757067,0x505f5368506c656e,0x66756239456a6a69,0x5f5f735f32726566\n"
".quad 0x632e766e2e003134,0x30746e6174736e6f,0x5f776e34315a5f2e,0x72656b5f32757067\n"
".quad 0x505f5368506c656e,0x7261705f006a6a69,0x722e766e2e006d61,0x6f697463612e6c65\n"
".quad 0x000000000000006e,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x000800030000004d,0x0000000000000000,0x0000000000000000,0x0009000300000092\n"
".quad 0x0000000000000000,0x0000000000000000,0x000700030000019e,0x0000000000000000\n"
".quad 0x0000000000000000,0x00060003000001ce,0x0000000000000000,0x0000000000000000\n"
".quad 0x0008101200000032,0x0000000000000000,0x0000000000000800,0x0000000500082f04\n"
".quad 0x0008230400000014,0x0000000000000005,0x0000000500081204,0x0008110400000000\n"
".quad 0x0000000000000005,0x0000007200043704,0x00002a0100003001,0x0000000300080a04\n"
".quad 0x0020190300200140,0x00000000000c1704,0x0011f000001c0004,0x00000000000c1704\n"
".quad 0x0011f00000180003,0x00000000000c1704,0x0021f00000100002,0x00000000000c1704\n"
".quad 0x0021f00000080001,0x00000000000c1704,0x0021f00000000000,0x00041d0400ff1b03\n"
".quad 0x00081c0400000048,0x000007f000000268,0x0000003001103404,0x0000000100000000\n"
".quad 0x0000021000000218,0x0000000100000000,0x0000035000000218,0x0000000100000000\n"
".quad 0x000003b0000006c0,0x0000000100000000,0x0000041000000430,0x0000000100000000\n"
".quad 0x0000042800000430,0x0000000100000000,0x0000047800000430,0x0000000100000000\n"
".quad 0x000004d8000004f8,0x0000000100000000,0x000004f0000004f8,0x0000000100000000\n"
".quad 0x00000568000004f8,0x0000000100000000,0x0000057800000618,0x0000000100000000\n"
".quad 0x000005e800000618,0x0000000100000000,0x000005f800000618,0x0000000100000000\n"
".quad 0x0000061000000618,0x0000000100000000,0x000006b800000618,0x0000000100000000\n"
".quad 0x000006e8000006c0,0x0000000100000000,0x0000074800000750,0x0000000100000000\n"
".quad 0x00041e0400000750,0x0000000000000040,0x000000000000004b,0x222f0a1008020200\n"
".quad 0x0000000008000000,0x0000000008080000,0x0000000008100000,0x0000000008180000\n"
".quad 0x0000000008200000,0x0000000008280000,0x0000000008300000,0x0000000008380000\n"
".quad 0x0000000008000001,0x0000000008080001,0x0000000008100001,0x0000000008180001\n"
".quad 0x0000000008200001,0x0000000008280001,0x0000000008300001,0x0000000008380001\n"
".quad 0x0000000008000002,0x0000000008080002,0x0000000008100002,0x0000000008180002\n"
".quad 0x0000000008200002,0x0000000008280002,0x0000000008300002,0x0000000008380002\n"
".quad 0x0000002c14000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x001ffc00e22007f6,0x4c98078000870001\n"
".quad 0xf0c8000002170000,0xe29000001f800000,0x001fc000ffa00fed,0x5b6b03800ff70007\n"
".quad 0xf0f800000000000f,0x4c98078005770003,0x003fc000fda00716,0xf0c8000002570004\n"
".quad 0x366b038000170307,0x04401ffffff70402,0x001ff400fda007fd,0xe24000000888000f\n"
".quad 0x366b038000270307,0xe24000000600000f,0x001fd800fea007f1,0x4c98078005670003\n"
".quad 0x4c11000000570404,0x1c00000007f70303,0x001f8400fea407f1,0x5c18038000370404\n"
".quad 0x5c18038000370202,0x040ffffff8070404,0x001ff4001e2007f4,0x040ffffff8070205\n"
".quad 0xef5d00000007ff04,0xe24000000407000f,0x001fc400ffa00711,0xef4c10000007ff04\n"
".quad 0xe24000000287000f,0x4c10000000570202,0x0003c800fe8007f5,0x3848000000770404\n"
".quad 0x3848000000770205,0xef5d00000007ff04,0x001fb400fea00ff1,0x4c12000005670404\n"
".quad 0x4c98078005670002,0x3668038008070407,0x001fb400ffa007f0,0x0400000007f70202\n"
".quad 0xe24000000400000f,0x5b6b03800ff70207,0x001c7c00ffa007f0,0x010000001007f005\n"
".quad 0xe24000000888000f,0xef4c10000047ff03,0x001fc000ffa00ff0,0x4c12000005670303\n"
".quad 0xe24000000407000f,0x010000001007f005,0x001fb401fec0071f,0xef4c10000047ff03\n"
".quad 0x4c12000005670303,0x3668038008070307,0x001fc400ffa007ed,0x5b6520000ff70207\n"
".quad 0xe24000000280000f,0x5c47020000470303,0x001fd800fda007f5,0x0420000008070205\n"
".quad 0x366c038008070307,0x3848000000180205,0x001fa000ffa000f1,0xef5c00000087ff05\n"
".quad 0xf0f800000007000f,0x50b0000000070f00,0x001cfc00fea007ff,0xf0a81b8000070000\n"
".quad 0xef98000000070000,0xef4c10000087ff02,0x001fa800fde017ed,0x366c038000270207\n"
".quad 0x50b0000000070f00,0x50b0000000070f00,0x081fc440fe2007fd,0xe30000000008000f\n"
".quad 0x1d00000007f70007,0x1c0ffffff8170006,0x001fc401fe2007f1,0x5c1200000ff70004\n"
".quad 0x0100000000c7f005,0x0100000020c7f00a,0x001fc000fec007e1,0x010000000017f003\n"
".quad 0x010000000ff7f002,0x366c038008170317,0x001fb000fe000711,0xef4d10000007ff0e\n"
".quad 0x5c9807800ff70011,0xe29000003e000000,0x001fd000fe2007f1,0x5ca005000067000c\n"
".quad 0x5ca0050000270309,0x5ca005000077040d,0x001fb400fc800ff2,0x5c10000000e70c08\n"
".quad 0x5c10000000f70d0b,0x4b6c038005670807,0x001fec80fe2207f1,0x5b62040000970007\n"
".quad 0x5c98078000a70009,0x5c18010000a7000a,0x001fc000ffa007ed,0x4b62000005670b07\n"
".quad 0xf0f800000008000f,0x5b6b03800ff7080f,0x001ff400fe0007ed,0xe2a000000c000000\n"
".quad 0x5c18010000570012,0xe24000000989000f,0x0000c400ffa007ed,0x5b6b03800ff70c1f\n"
".quad 0xe2400000020b000f,0xef4c100000021210,0x001fd800ffa00051,0xef4c1fffffca1210\n"
".quad 0xe34000000007000f,0x1c0ffffffff7080e,0x001fd840fec207f1,0x4e00058005670e0f\n"
".quad 0x4f107f8005670e10,0x5b30079801070e0e,0x001fc800fcc207f1,0x3828000001e70e0f\n"
".quad 0x4c18810005470e10,0x4c10080005570f11,0x001fc000fea000b1,0xeed4200000071010\n"
".quad 0xe34000000007000f,0x5c47070000b7ff10,0x001fb400fe0007fd,0xe34000000007000f\n"
".quad 0x5b6b03800ff70b27,0xe2a000000b800000,0x001ff400fda007fd,0xe2400000090c000f\n"
".quad 0x5b6b03800ff70d1f,0xe2400000020b000f,0x001ff40012200871,0xef4c100000421211\n"
".quad 0xef4c1000000a1211,0xe34000000007000f,0x001fd840fec207f1,0x4e0005800567080e\n"
".quad 0x4f107f800567080f,0x5b30071800f7080e,0x001f9840fe2007f6,0x1c0ffffffff70e0e\n"
".quad 0x3828000001e70e0f,0x4c18810005470e0e,0x001fd401162007f2,0x4c10080005570f0f\n"
".quad 0xeed4200000070e11,0xe34000000007000f,0x001fc400ffa00ff0,0x5c4707000087ff11\n"
".quad 0xe34000000007000f,0xe2a0000011800000,0x001fb400ffa007fd,0xe24000000f09000f\n"
".quad 0xe24000000d8c000f,0x5b6b03800ff70d0f,0x001ff400ffa007ed,0x5b6524800ff70c0f\n"
".quad 0xe24000000481000f,0xe2400000030a000f,0x0001c401122007ed,0x366b038007f7020f\n"
".quad 0xef4c100000410a12,0xef4c100000090a12,0x001ff401122007fd,0xe34000000007000f\n"
".quad 0xef4c1fffffc70a12,0xe34000000007000f,0x083fd840fe2007f6,0x1c0ffffffff7080c\n"
".quad 0x4e00058005670c0d,0x4f107f8005670c0e,0x001f8400fec007f6,0x5b30069800e70c0c\n"
".quad 0x1c0ffffffff70c0c,0x3828000001e70c0d,0x0002c400fe4007f6,0x4c18810005470c0c\n"
".quad 0x4c10080005570d0d,0xeed4200000070c12,0x001ff401fe0007f5,0xe34000000007000f\n"
".quad 0x5c1200000ff70812,0xe34000000007000f,0x083fc400ffa00ff0,0x5c1200000ff70b12\n"
".quad 0xe34000000007000f,0x3829000001f70b0d,0x001fc840fea007f1,0x4c10800005070b0c\n"
".quad 0x3829000001f7080f,0x4c10080005170d0d,0x001f8800fec007f0,0x4c1080000527080e\n"
".quad 0xeed0200000070c0c,0x4c10080005370f0f,0x031fc400fe6007b5,0xeed0200000070e0e\n"
".quad 0xf0f0000034170000,0x1c00000000171213,0x041fb406fe2007f1,0x1c0ffffffff71111\n"
".quad 0x1c0ffffffff71010,0x5b6b038000c70e0f,0x001ff400fe0007e6,0x1c0ffffffff11213\n"
".quad 0x3b7709e061171011,0xf0f800000007000f,0x001fc400fea007ff,0xf0a81b8000070000\n"
".quad 0xef98000000070000,0xe290000007000000,0x0003c440fe0007fd,0xf0f800000008000f\n"
".quad 0x4e0005800567080b,0xef5c000000070a11,0x081fc400fec207f6,0x4f107f800567080d\n"
".quad 0x5b30059800d7080d,0x3828000001e70d08,0x0003c400fc4007f6,0x4c18810005470d0c\n"
".quad 0x4c1008000557080d,0xeedc200000070c11,0x001fbc00fde007f5,0xf0f800000007000f\n"
".quad 0x50b0000000070f00,0x50b0000000070f00,0x001ffc00fe0007e7,0x50b0000000070f00\n"
".quad 0x1c00000000170303,0xf0a81b8000070000,0x001c4401fe0007f5,0xef98000000070000\n"
".quad 0x5c9807800057000a,0xef4c10000087ff08,0x001fc400fe2007f1,0x1c00000000170404\n"
".quad 0x1c0ffffffff70202,0x1c00000000170606,0x001ff401fda007ff,0x5c98078000970005\n"
".quad 0x5b6c038000870307,0xe2400fffad88000f,0x001ffc00ffe007e6,0x50b0000000070f00\n"
".quad 0xe30000000007000f,0xe2400fffff87000f,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000300000001,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000040,0x00000000000000d5,0x0000000000000000\n"
".quad 0x0000000000000001,0x0000000000000000,0x000000030000000b,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000115,0x00000000000001dd,0x0000000000000000\n"
".quad 0x0000000000000001,0x0000000000000000,0x0000000200000013,0x0000000000000000\n"
".quad 0x0000000000000000,0x00000000000002f8,0x0000000000000090,0x0000000500000002\n"
".quad 0x0000000000000008,0x0000000000000018,0x7000000000000029,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000388,0x0000000000000030,0x0000000000000003\n"
".quad 0x0000000000000004,0x0000000000000000,0x7000000000000053,0x0000000000000000\n"
".quad 0x0000000000000000,0x00000000000003b8,0x00000000000001a4,0x0000000800000003\n"
".quad 0x0000000000000004,0x0000000000000000,0x7000000b000000c6,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000560,0x00000000000000d8,0x0000000000000000\n"
".quad 0x0000000000000008,0x0000000000000008,0x000000010000009d,0x0000000000000002\n"
".quad 0x0000000000000000,0x0000000000000638,0x0000000000000160,0x0000000800000000\n"
".quad 0x0000000000000004,0x0000000000000000,0x0000000100000032,0x0000000000100006\n"
".quad 0x0000000000000000,0x00000000000007a0,0x0000000000000800,0x1400000500000003\n"
".quad 0x0000000000000020,0x0000000000000000,0x0000000800000077,0x0000000000000003\n"
".quad 0x0000000000000000,0x0000000000000fa0,0x000000000000040c,0x0000000800000000\n"
".quad 0x0000000000000004,0x0000000000000000,0x0000000500000006,0x0000000000001220\n"
".quad 0x0000000000000000,0x0000000000000000,0x00000000000000a8,0x00000000000000a8\n"
".quad 0x0000000000000008,0x0000000500000001,0x0000000000000638,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000968,0x0000000000000968,0x0000000000000008\n"
".quad 0x0000000600000001,0x0000000000000fa0,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x000000000000040c,0x0000000000000008,0x0000004801010001\n"
".quad 0x0000000000000890,0x000000400000088d,0x0000003400070004,0x0000000000000000\n"
".quad 0x0000000000002011,0x0000000000000000,0x00000000000018fc,0x0000000000000000\n"
".quad 0x762e1df600010a13,0x37206e6f69737265,0x677261742e0a342e,0x32355f6d73207465\n"
".quad 0x7365726464612e0a,0x3620657a69735f73,0x736926ff00340a34,0x6e652e20656c6269\n"
".quad 0x34315a5f20797274,0x5f327570675f776e,0x68506c656e72656b,0x0a286a6a69505f53\n"
".quad 0x2e206d617261702e,0x5f11080028343675,0x00302c305f3f0026,0x32171c0030311f1b\n"
".quad 0x0f003032332f0030,0x3409f31c0030331f,0x65722e0a7b0a290a,0x20646572702e2067\n"
".quad 0x133b3e34333c7025,0x7225203631629600,0x3233960012333c73,0x133131313c722520\n"
".quad 0x722520343603f000,0x0a0a3b3e39313c64,0x84004a6168732e09,0x34206e67696c612e\n"
".quad 0x45af06008b0f008a,0x657366666f5f7138,0x003f721f24003f74,0x706f6f6c3031bf2a\n"
".quad 0x040042696d696c5f,0x00ff0a004138622f,0x3172656666756239,0x445d3231355b735f\n"
".quad 0x6c22004432162900,0x015f752e2201c964,0x0e01cf5b202c344f,0x351f00393b5d303d\n"
".quad 0x000039311f110039,0x393219110039361f,0x00ab351f021d0100,0xab0f000039331f12\n"
".quad 0x0a3b5d3403f41200,0x2e6f742e61747663,0x00b16c61626f6c67,0x0a3b5300b72c3121\n"
".quad 0x0013000053766f6d,0x3b782e64697401f0,0x656e2e707465730a,0x2c3270320019732e\n"
".quad 0x400a3b3009f7001e,0x2061726220327025,0x5f3042425f5f4c24,0x2b0000440a3b3231\n"
".quad 0x00476174636e4200,0x25202c3345005c06,0x031c726f78330017,0x333383001c2c3422\n"
".quad 0x007a313334343535,0x2c3323007a716523,0x3319007b311100eb,0x00a90a3b343b007b\n"
".quad 0x002f3211002f3414,0x0a3b3572002f3419,0x7243002b6464610a,0x323184017f2c3635\n"
".quad 0x00196275730a3b37,0x3272258300943713,0x3300ab6c68730a3b,0x3b3728001e2c3835\n"
".quad 0x63001d2c39260048,0x0031646e610a3b36,0x2d8300202c383933,0xea74730a3b383231\n"
".quad 0x03e55b1f01130102,0x880800492c5d2112,0x0901392c30363200,0x00d52c3136350087\n"
".quad 0x3236330087303628,0x181f00870f00202c,0x0a3b3236b5008772,0x54696e752e617262\n"
".quad 0x000c0a0a3b364401,0x38392300a63a3427,0x072c00f9371f0146,0x99341d01940100e3\n"
".quad 0x6c361e0013361101,0xde341f1b00de0f00,0x0703823a35200b00,0x00ce0f00e402005c\n"
".quad 0x6d3a362700490714,0x00ed020285391402,0x006074672202fd01,0xb70100222c357032\n"
".quad 0xba30312901d10601,0x02e8357025404902,0x0080371700c9391e,0x2c372303643a392b\n"
".quad 0x3f00e33b302d0055,0x44081501452c3836,0xd8361d00d8391703,0x00d93914021b0100\n"
".quad 0x2c3923074d726f24,0x710497387029008e,0xeb363532202c3030,0x31312e00eb391900\n"
".quad 0x1c00ed30312700ec,0x0f00ed361700ed37,0x0e0063361d040063,0x082f0117361f0117\n"
".quad 0x140a3a303145025d,0x13002c2c39363505,0x00013c6c14013c39,0x013d0400230200bb\n"
".quad 0x00d9303724003502,0x313725042f323129,0x706c23004c000019,0x001f0400f3010018\n"
".quad 0x3f013a7019003e01,0x190819034d3a3131,0x4e0800602c5d2208,0x7261620a3a32bf00\n"
".quad 0x010268636e79732e,0x0d1800602c32373f,0xf8321400c5020115,0x342901c331312905\n"
".quad 0x05f437372d06a334,0x258400192c363133,0x1967656e0a3b3172,0x8806001433302300\n"
".quad 0x1107103130313304,0x010307600f00472d,0x05001f34642f0576,0x028535642a005701\n"
".quad 0x370a14093c2c362f,0x0a14092f2c352f00,0x00120a0441000037,0x01b7353528014100\n"
".quad 0x0c321200213a3427,0x3225018035302d01,0x026739322900522c,0x006203001b393725\n"
".quad 0x3223002309002f00,0x210d015b04014f35,0x3614018b2c362700,0x04be0f00ba070022\n"
".quad 0x061805a130382f04,0x003d2c37323301e1,0x1f0000570f009d00,0x230057071803fe31\n"
".quad 0x0d00d300003d2c38,0x371e010633150144,0x2200982c342503f6,0x10053503060d3435\n"
".quad 0x703d003e02013e31,0x7a2c362500393431,0x003e2c1600390c00,0x8a32382304323618\n"
".quad 0x2c392500be321900,0x6e0a3b3238750203,0x00453711004a746f,0x00037b371a037b02\n"
".quad 0x38312405820a053e,0x33340060301800cc,0x0000610203042c30,0x321f004d381903c8\n"
".quad 0x02422c392300004d,0x100620311a0a9c02,0xb40b001700048432,0x3831280007230f0a\n"
".quad 0x316007ee391e02f8,0x4e00a95b202c3730,0x322700415d342d2b,0x223a313231004132\n"
".quad 0x018700003b621601,0x123a30270d00360f,0xa82d1001f5381501,0x1b6f6c2e64615403\n"
".quad 0x352400212c352500,0x2e6c756d83005c34,0x643300b165646977,0x01693413002b2c37\n"
".quad 0x0c002c3826047b02,0x09049b0402de3711,0x0d00e538642f00e8,0xf40809012638312f\n"
".quad 0x3224078832322c08,0xb30a0c5503029931,0x323301eb38322d05,0x0a003203040c2c32\n"
".quad 0x0201eb37322f01d4,0xe3080000c536322f,0x160100c536322f04,0x391801030d00c538\n"
".quad 0xdc0301e8381a003e,0x3a372b0d00360f02,0xd00801eb361401d0,0x262c3723020b0701\n"
".quad 0x392301e8312d2e00,0x150001e80a00232c,0x01e9391f01e90505,0xe731642f00e60201\n"
".quad 0x2506000afe0f0f00,0x2f002c5d342b3801,0x4f33100003bc3a39,0x01e8331f01e80e00\n"
".quad 0x001b0b03d3361700,0x010a380602033717,0x32703200380204df,0x920f007e0b021d37\n"
".quad 0x332902cb33180001,0x07037a381f037a37,0x0501aa381f016d02,0xaa0f00262c303933\n"
".quad 0x00240008a9020101,0xab0302dc0101ab0b,0x130101ac31312f01,0x0001ac321f01ac39\n"
".quad 0x3a393339096b3418,0x360f00a5391408c1,0x1f010036381f0b00,0x743a322f0d003637\n"
".quad 0x28000374331f0003,0x0203740f00373333,0x055f39322e00e202,0x250450331c00780e\n"
".quad 0x0204311308613033,0x96351f009630332a,0x351f005534180000,0x1f0e00930f090096\n"
".quad 0x300323090a00d434,0x01fe000a173a3034,0x7133316434017103,0x2c2c342602170801\n"
".quad 0x1900353b33313d0a,0x3626003503028135,0x024c3531290a802c,0x0094311114a13810\n"
".quad 0x13001c5d3631644e,0x037c5d3427001c32,0x2c3133704314d800,0x09a0090043000021\n"
".quad 0x110b0e202c313941,0x1b02008e0300282c,0x0e0100212c322300,0x462c3324001b0901\n"
".quad 0x2c342400342d1a04,0x7861240344010649,0x28001f2c35250019,0x050a0101001a3339\n"
".quad 0x31342a05df08006e,0x9a000008a30f0c79,0x1201f1010cea0b02,0x392404010b00592c\n"
".quad 0xe90d040108041c36,0xe90b002c2c372303,0x0203e90404390103,0x00790201810410b0\n"
".quad 0xc706007a38316436,0x012e0600c7331a00,0x311a0b1e000b1704,0x1f00072c32240019\n"
".quad 0x33313021020cc12d,0x8c37392f02b60c00,0x2c34240059081b0d,0x33360a8b311c0007\n"
".quad 0xc337392d00232c33,0x02148f0a0007000c,0x0a03ce3332220a0c,0xd0011e34312813fc\n"
".quad 0x0a3b7465720a3a34, 0x000000000a0a7d0a\n"
".text\n");
#ifdef __cplusplus
extern "C" {
#endif
extern const unsigned long long fatbinData[894];
#ifdef __cplusplus
}
#endif
#ifdef __cplusplus
extern "C" {
#endif
static const __fatBinC_Wrapper_t __fatDeviceText __attribute__ ((aligned (8))) __attribute__ ((section (__CUDAFATBINSECTION)))= 
	{ 0x466243b1, 1, fatbinData, 0 };
#ifdef __cplusplus
}
#endif