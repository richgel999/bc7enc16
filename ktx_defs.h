// File: ktx_defs.h
// .KTX file header definitions.
// -> https://www.khronos.org/opengles/sdk/tools/KTX/file_format_spec/
#pragma once


// OpenGL constants
#define GL_RGB 0x1907
#define GL_RGBA 0x1908
#define GL_COMPRESSED_RGBA_BPTC_UNORM 0x8E8C
#define GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM 0x8E8D


constexpr char const * ktxFileNameExt = ".ktx";

static constexpr uint8_t ktxFileIdentifier[12] =
{
   0xAB, 0x4B, 0x54, 0x58, 0x20, 0x31, 0x31, 0xBB, 0x0D, 0x0A, 0x1A, 0x0A
};

static constexpr uint32_t ktxEndianess = 0x04030201;

static constexpr uint8_t ktxOrientation[] =
{
    'K','T','X','o','r','i','e','n','t','a','t','i','o','n',0,
    'S','=','r',',','T','=','d',0
};


struct KTX_HEADER
{
	uint8_t identifier[12];            // 0x00
	uint32_t endianness;               // 0x0c
	uint32_t glType;                   // 0x10
	uint32_t glTypeSize;
	uint32_t glFormat;                 // 0x18
	uint32_t glInternalFormat;
	uint32_t glBaseInternalFormat;     // 0x20
	uint32_t pixelWidth;
	uint32_t pixelHeight;              // 0x28
	uint32_t pixelDepth;
	uint32_t numberOfArrayElements;    // 0x30
	uint32_t numberOfFaces;
	uint32_t numberOfMipmapLevels;     // 0x38
	uint32_t bytesOfKeyValueData;      // 0x3c
};
