#ifndef __SKIP_INTERNAL_FATBINARY_HEADERS
#include "fatbinary_section.h"
#endif
#define __CUDAFATBINSECTION  ".nvFatBinSegment"
#define __CUDAFATBINDATASECTION  ".nv_fatbin"
asm(
".section .nv_fatbin, \"a\"\n"
".align 8\n"
"fatbinData:\n"
".quad 0x00100001ba55ed50,0x00000000000017c0,0x0000004001010002,0x0000000000001008\n"
".quad 0x0000000000000000,0x0000003400010007,0x0000000000000000,0x0000000000000011\n"
".quad 0x0000000000000000,0x0000000000000000,0x33010102464c457f,0x0000000000000007\n"
".quad 0x0000007200be0002,0x0000000000000000,0x0000000000000f60,0x0000000000000ce0\n"
".quad 0x0038004000340534,0x0001000a00400003,0x7472747368732e00,0x747274732e006261\n"
".quad 0x746d79732e006261,0x746d79732e006261,0x78646e68735f6261,0x666e692e766e2e00\n"
".quad 0x2e747865742e006f,0x675f776e34315a5f,0x6e72656b5f317570,0x69505f5368506c65\n"
".quad 0x692e766e2e006a6a,0x34315a5f2e6f666e,0x5f317570675f776e,0x68506c656e72656b\n"
".quad 0x2e006a6a69505f53,0x65726168732e766e,0x776e34315a5f2e64,0x656b5f317570675f\n"
".quad 0x5f5368506c656e72,0x766e2e006a6a6950,0x6e6174736e6f632e,0x6e34315a5f2e3074\n"
".quad 0x6b5f317570675f77,0x5368506c656e7265,0x6e2e006a6a69505f,0x63612e6c65722e76\n"
".quad 0x732e00006e6f6974,0x0062617472747368,0x006261747274732e,0x006261746d79732e\n"
".quad 0x5f6261746d79732e,0x6e2e0078646e6873,0x5f006f666e692e76,0x70675f776e34315a\n"
".quad 0x656e72656b5f3175,0x6a69505f5368506c,0x2e747865742e006a,0x675f776e34315a5f\n"
".quad 0x6e72656b5f317570,0x69505f5368506c65,0x692e766e2e006a6a,0x34315a5f2e6f666e\n"
".quad 0x5f317570675f776e,0x68506c656e72656b,0x2e006a6a69505f53,0x65726168732e766e\n"
".quad 0x776e34315a5f2e64,0x656b5f317570675f,0x5f5368506c656e72,0x5f5f24006a6a6950\n"
".quad 0x5f776e34315a5a5f,0x72656b5f31757067,0x505f5368506c656e,0x6f5f7138456a6a69\n"
".quad 0x335f5f7465736666,0x5a5a5f5f5f240031,0x7570675f776e3431,0x6c656e72656b5f31\n"
".quad 0x6a6a69505f536850,0x7366666f5f723845,0x240033335f5f7465,0x6e34315a5a5f5f5f\n"
".quad 0x6b5f317570675f77,0x5368506c656e7265,0x3031456a6a69505f,0x6d696c5f706f6f6c\n"
".quad 0x2e0035335f5f7469,0x74736e6f632e766e,0x315a5f2e30746e61,0x317570675f776e34\n"
".quad 0x506c656e72656b5f,0x006a6a69505f5368,0x2e006d617261705f,0x612e6c65722e766e\n"
".quad 0x0000006e6f697463,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x000800030000004d,0x0000000000000000,0x0000000000000000,0x0009000300000092\n"
".quad 0x0000000000000000,0x0000000000000000,0x0007000300000142,0x0000000000000000\n"
".quad 0x0000000000000000,0x0006000300000172,0x0000000000000000,0x0000000000000000\n"
".quad 0x0008101200000032,0x0000000000000000,0x0000000000000640,0x0000000500082f04\n"
".quad 0x0008230400000012,0x0000000000000005,0x0000000500081204,0x0008110400000000\n"
".quad 0x0000000000000005,0x0000007200043704,0x00002a0100003001,0x0000000300080a04\n"
".quad 0x0020190300200140,0x00000000000c1704,0x0011f000001c0004,0x00000000000c1704\n"
".quad 0x0011f00000180003,0x00000000000c1704,0x0021f00000100002,0x00000000000c1704\n"
".quad 0x0021f00000080001,0x00000000000c1704,0x0021f00000000000,0x00041d0400ff1b03\n"
".quad 0x00081c0400000048,0x000005f800000268,0x0000003000703404,0x0000000100000000\n"
".quad 0x0000021000000218,0x0000000100000000,0x0000031800000218,0x0000000100000000\n"
".quad 0x00000478000005a0,0x0000000100000000,0x00000490000004b0,0x0000000100000000\n"
".quad 0x000004a8000004b0,0x0000000100000000,0x00000598000004b0,0x0000000100000000\n"
".quad 0x00041e04000005a0,0x0000000000000040,0x000000000000004b,0x222f0a1008020200\n"
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
".quad 0x366b038000170307,0x04407ffffff70402,0x001ff400fda007fd,0xe24000000888000f\n"
".quad 0x366b038000270307,0xe24000000600000f,0x001fd800fea007f1,0x4c98078005670003\n"
".quad 0x4c11000000570404,0x1c00000001f70303,0x001f8400fea407f1,0x5c18028000370404\n"
".quad 0x5c18028000370202,0x040ffffffe070404,0x001ff4001e2007f4,0x040ffffffe070205\n"
".quad 0xef5d00000007ff04,0xe24000000407000f,0x001fc400ffa00711,0xef4c10000007ff04\n"
".quad 0xe24000000287000f,0x4c10000000570202,0x0003c800fe8007f5,0x3848000000570404\n"
".quad 0x3848000000570205,0xef5d00000007ff04,0x001fb400fea00ff1,0x4c12000005670404\n"
".quad 0x4c98078005670002,0x3668038002070407,0x001fb400ffa007f0,0x0400000001f70202\n"
".quad 0xe24000000400000f,0x5b6b03800ff70207,0x001c7c00ffa007f0,0x010000000407f005\n"
".quad 0xe24000000888000f,0xef4c10000047ff03,0x001fc000ffa00ff0,0x4c12000005670303\n"
".quad 0xe24000000407000f,0x010000000407f005,0x001fb401fec0071f,0xef4c10000047ff03\n"
".quad 0x4c12000005670303,0x3668038002070307,0x001fc400ffa007ed,0x5b6520000ff70207\n"
".quad 0xe24000000280000f,0x5c47020000470303,0x001fd800fda007f5,0x0420000002070205\n"
".quad 0x366c038002070307,0x3848000000180205,0x001fa000ffa000f1,0xef5c00000087ff05\n"
".quad 0xf0f800000007000f,0x50b0000000070f00,0x001cfc00fea007ff,0xf0a81b8000070000\n"
".quad 0xef98000000070000,0xef4c10000087ff02,0x001fa800fde017ed,0x366c038000270207\n"
".quad 0x50b0000000070f00,0x50b0000000070f00,0x081fc400fe2007fd,0xe30000000008000f\n"
".quad 0x5c4707000007ff02,0x1c00000002070003,0x001fd801fe2007f1,0x1d00000001f70004\n"
".quad 0x010000000017f005,0x0100000003f7f006,0x001fb000e22007f0,0x366c03800217050f\n"
".quad 0xef4d10000007ff0a,0xe29000002e000000,0x001fc441fe2007fd,0x5ca0048000670509\n"
".quad 0x5cc2048000310a07,0x5c10000000090a07,0x001fb400fe8007f1,0x5c10000000b10408\n"
".quad 0x5cc0010000990b08,0x4b6c038005670707,0x001ff400fda007ed,0x5b6c200000970007\n"
".quad 0x4b6c200005670807,0xf0f800000000000f,0x001fb000fe2007f0,0x5b6b03800ff70707\n"
".quad 0xe2a0000017800000,0x5b6b03800ff7080f,0x001fd140fe2207f1,0x1c0ffffffff00709\n"
".quad 0x4e0004000561070c,0x4f107f800561070d,0x001fc400fcc207f1,0x4e0004000560090a\n"
".quad 0x4f107f800560090b,0x5b30051800b00909,0x001fc440fe2007f5,0x5b30061800d1070a\n"
".quad 0x3828000001e0090b,0x1c0ffffffff10a0a,0x001fc400fc2007f5,0x4c1881000540090c\n"
".quad 0x3828000001e10a09,0x4c10080005500b0d,0x0002c800fe0007f6,0x4c18810005410a0e\n"
".quad 0x4c1008000551090f,0xeed4200000000c09,0x001fc000162007f0,0x5c4707000088ff09\n"
".quad 0xeed4200000010e0a,0x5c4707000079ff0a,0x001fd800ffa007f6,0xe24000000888000f\n"
".quad 0xe24000000689000f,0x1c0ffffffff7070b,0x001fd840fec20ff1,0x4e00040005670b0c\n"
".quad 0x4f107f8005670b0d,0x5b30061800d70b0c,0x001fd800fc2007f6,0x1c0ffffffff70c0c\n"
".quad 0x3828000001e70c0b,0x4c18810005470c0c,0x001fd400162007f2,0x4c10080005570b0d\n"
".quad 0xeed4200000070c0b,0xe34000000007000f,0x001fc000ffa007f0,0x5c1200000ff7070b\n"
".quad 0xe34000000007000f,0x5c1200000ff7080b,0x001fc441fe2007fd,0xe34000000007000f\n"
".quad 0x3829000001f7080d,0x4c1080000507080c,0x001fc000fe4207f5,0x3829000001f7070f\n"
".quad 0x4c10080005170d0d,0x4c1080000527070e,0x001ec400fc4007f6,0xeed0200000070c0c\n"
".quad 0x4c10080005370f0f,0xeed0200000070e0e,0x001fc040fec207f1,0x4e00040005670708\n"
".quad 0x4f107f8005670711,0x5b30041801170711,0x001f8400fe2007f3,0xf0f0000034170000\n"
".quad 0x1c00000000170b07,0x1c0ffffffff70a0a,0x001fd840fe2007f1,0x1c0ffffffff70909\n"
".quad 0x3828000001e71108,0x4c18810005471110,0x001fd820fda007f7,0x4c10080005570811\n"
".quad 0x5b6b038000c70e07,0x1c0ffffffff00b07,0x001ff4001e2007e2,0x3b7703e060a70907\n"
".quad 0xeedc200000071007,0xf0f800000007000f,0x001fd400ffe007f0,0x1c00000000170505\n"
".quad 0xf0a81b8000070000,0xef98000000070000,0x003fb401e3e007f0,0x1c0ffffffff70606\n"
".quad 0xef4c10000087ff07,0x5b6c038000770507,0x001ffc00fd4007fd,0xe2400fffcb08000f\n"
".quad 0x50b0000000070f00,0xe30000000007000f,0x001f8000fc0007ff,0xe2400fffff07000f\n"
".quad 0x50b0000000070f00,0x50b0000000070f00,0x001f8000fc0007e0,0x50b0000000070f00\n"
".quad 0x50b0000000070f00,0x50b0000000070f00,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000300000001,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000040,0x00000000000000d5,0x0000000000000000\n"
".quad 0x0000000000000001,0x0000000000000000,0x000000030000000b,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000115,0x0000000000000181,0x0000000000000000\n"
".quad 0x0000000000000001,0x0000000000000000,0x0000000200000013,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000298,0x0000000000000090,0x0000000500000002\n"
".quad 0x0000000000000008,0x0000000000000018,0x7000000000000029,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000328,0x0000000000000030,0x0000000000000003\n"
".quad 0x0000000000000004,0x0000000000000000,0x7000000000000053,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000358,0x0000000000000104,0x0000000800000003\n"
".quad 0x0000000000000004,0x0000000000000000,0x7000000b000000c6,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000460,0x00000000000000d8,0x0000000000000000\n"
".quad 0x0000000000000008,0x0000000000000008,0x000000010000009d,0x0000000000000002\n"
".quad 0x0000000000000000,0x0000000000000538,0x0000000000000160,0x0000000800000000\n"
".quad 0x0000000000000004,0x0000000000000000,0x0000000100000032,0x0000000000100006\n"
".quad 0x0000000000000000,0x00000000000006a0,0x0000000000000640,0x1200000500000003\n"
".quad 0x0000000000000020,0x0000000000000000,0x0000000800000077,0x0000000000000003\n"
".quad 0x0000000000000000,0x0000000000000ce0,0x000000000000000c,0x0000000800000000\n"
".quad 0x0000000000000004,0x0000000000000000,0x0000000500000006,0x0000000000000f60\n"
".quad 0x0000000000000000,0x0000000000000000,0x00000000000000a8,0x00000000000000a8\n"
".quad 0x0000000000000008,0x0000000500000001,0x0000000000000538,0x0000000000000000\n"
".quad 0x0000000000000000,0x00000000000007a8,0x00000000000007a8,0x0000000000000008\n"
".quad 0x0000000600000001,0x0000000000000ce0,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x000000000000000c,0x0000000000000008,0x0000004801010001\n"
".quad 0x0000000000000730,0x000000400000072c,0x0000003400070004,0x0000000000000000\n"
".quad 0x0000000000002011,0x0000000000000000,0x00000000000013cb,0x0000000000000000\n"
".quad 0x762e1df400010a13,0x37206e6f69737265,0x677261742e0a342e,0x32355f6d73207465\n"
".quad 0x7365726464612e0a,0x3620657a69735f73,0x736926ff00320a34,0x6e652e20656c6269\n"
".quad 0x34315a5f20797274,0x5f317570675f776e,0x68506c656e72656b,0x0a286a6a69505f53\n"
".quad 0x2e206d617261702e,0x5f11080028343675,0x00302c305f3f0026,0x32171c0030311f1b\n"
".quad 0x0f003032332f0030,0x3409f31c0030331f,0x65722e0a7b0a290a,0x20646572702e2067\n"
".quad 0x133b3e33323c7025,0x7225203631628700,0x2032338600123c73,0xf0001232393c7225\n"
".quad 0x3c64722520343603,0x2e090a0a3b3e3931,0x612e840049616873,0x008934206e67696c\n"
".quad 0x713845af06008a0f,0x3f74657366666f5f,0xb02a003f721f2400,0x6c5f706f6f6c3031\n"
".quad 0x646c220042696d69,0x4f00d7752e220140,0x3d0e01465b202c34,0x39351f00393b5d30\n"
".quad 0x1f000039311f1100,0x0039321911003936,0x003931342f019401,0x321f000039331f11\n"
".quad 0x3b5d3403f4110039,0x6f742e617476630a,0xb16c61626f6c672e,0x3b5300b72c312100\n"
".quad 0x13000053766f6d0a,0x782e64697401f000,0x6e2e707465730a3b,0x3170320019732e65\n"
".quad 0x0a3b3009f7001e2c,0x6172622031702540,0x3042425f5f4c2420,0x8200440a3b32315f\n"
".quad 0x6174636e25202c32,0x2c3345005c060047,0x726f783300172520,0x93001c2c34220293\n"
".quad 0x3237373132343331,0x007b716523007b37,0x7c311100ec2c3223,0x3b343b007c321900\n"
".quad 0x11002f331400aa0a,0x72002f3319002f32,0x2b6464610a0a3b35,0x01802c3334724300\n"
".quad 0x6275730a3b313374,0x7225840094040018,0x00ab6c68730a3b32,0x3b3528001e2c3523\n"
".quad 0x63001d2c36260047,0x0031646e610a3b33,0x2d2000202c323833,0x0102e77413004a33\n"
".quad 0x2112035c5b1f0112,0x1100870900482c5d,0x382600860c005637,0x330086371800d32c\n"
".quad 0x00860f00202c3934,0x3934b5008672181e,0x6e752e6172620a3b,0x0a0a3b3644015169\n"
".quad 0x2300a53a3427000c,0x00f8351f01443238,0x2c30353400e2062c,0x3135330197090230\n"
".quad 0x2800de351f001e2c,0x35200b00de31352f,0xe402005c0703803a,0x0049071400ce0f00\n"
".quad 0x823914026b3a3627,0x2202fa0100ed0202,0x2c34703200607467,0x2801cf3233280022\n"
".quad 0x7025404902b63031,0x170001a50f02e334,0x035f3a392b007e37,0x3b302d00542c3623\n"
".quad 0x01432c35353f00e1,0xd633382603400815,0x372300d635352c00,0x6f2400d70000232c\n"
".quad 0x008d2c382306bf72,0x3438610436377028,0x381900e83436202c,0x270001b0311f00e8\n"
".quad 0x00ea371c00ea3031,0x0200610f00ea3517,0x1f01120e0061351d,0x00a533172f011233\n"
".quad 0x35050b0a3a303145,0x373913002c2c3635,0x2c392301376c1401,0x0033030137030022\n"
".quad 0x0314331a00d53714,0x5504da0000183814,0x0400ee622e706c65,0x397028003c01001e\n"
".quad 0x1903413a312f008e,0x341803b002078308,0x61620a3a32bf004d,0x025d636e79732e72\n"
".quad 0x0c18005f2c392f02,0x00440200db00010f,0x01bd30312905e802,0x746f6e0a43031b00\n"
".quad 0x3118015a311100f7,0x2806d3373123044e,0x0e32362c020f3233,0x0100182c38313306\n"
".quad 0x1e0103074c0f0042,0x0105001f34642f00,0x11027835642901d3,0x3549001107019c36\n"
".quad 0x3a342c021c36202c,0x29003a2c312300f5,0x0019321501d73333,0x720e002b00004802\n"
".quad 0x54001904b0321f01,0x0372361f07e80b01,0x3a362700b1351800,0x00742c3738330161\n"
".quad 0x361f00008d72252f,0x363500560619045c,0x1a36312800f02c36,0x2f00202c38383500\n"
".quad 0x0507080000ab3536,0x3336350586353128,0xc53b31323d02122c,0xc632322f00200200\n"
".quad 0x022200c6341f0000,0x033509025a0300ac,0x01f465672404b604,0x31343c00882c3225\n"
".quad 0x0202c63313001e3b,0x343134054f0600b9,0x373231703d001f2c,0x341a00862c352500\n"
".quad 0x003e040140000038,0x035b361a02073512,0x3124055a0a056500,0x37190a200300a437\n"
".quad 0x1509773032290032,0x5403012d10002e36,0x25001b6f6c2e6461,0xb3052e0200212c38\n"
".quad 0x2e6c756d0a3b3838,0x64724300bd646977,0x01543413002b2c37,0x0ad62c3826036502\n"
".quad 0x0103850401ab3711,0x2700047038100037,0x313227021c5d1e00,0x043b3a3032370184\n"
".quad 0x2106008702003700,0x381401013a312c00,0x06ac0a0101030150,0x1400e90a03d73210\n"
".quad 0x240600e908010439,0x2e00262c30373301,0x232c39230101312d,0x0230312701010a00\n"
".quad 0x3039220102391e01,0x01010330312f0102,0x0103333228028708,0x00210800ad303922\n"
".quad 0x26000101e93a342f,0x0037190000ff0f01,0x3506020031372f02,0x01170f00212c3237\n"
".quad 0x170f00262c332302,0x002400051f020101,0x180300560101180b,0x1300011931312f01\n"
".quad 0x010119321f011931,0x0a3a383295072208,0x020038732e67656e,0x371f0b00350f00a3\n"
".quad 0x3920014e09000035,0x250300b00006393a,0x0800263331643400,0x064e0403970000c9\n"
".quad 0xd70300353b33313d,0xa22c362600350a03,0x381000fe35312906,0x5d362e00fd041026\n"
".quad 0x4600001c3213001c,0x12105d0002f3050e,0x1a00577311058370,0x202c343750086573\n"
".quad 0x0300282c1101a331,0x2c3523001b02008e,0x001a090109000021,0x182d1a026b2c3623\n"
".quad 0xf30103862c372300,0x3825001878612401,0x001a363729001e2c,0x62381b006a2c3926\n"
".quad 0x0d01037930382f02,0x62381e002001024a,0x11024a0400750103,0x2b01024a070c6f37\n"
".quad 0x013718090b381101,0xde06090b30332a02,0x2e00060107ad0100,0x2331382f065e312d\n"
".quad 0x2c36260058071b09,0x07920208450a0864,0x550a0f5403002103,0x3133e0040b31180f\n"
".quad 0x0a0a3b7465720a3a, 0x00000000000a0a7d\n"
".text\n");
#ifdef __cplusplus
extern "C" {
#endif
extern const unsigned long long fatbinData[762];
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