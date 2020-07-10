#pragma once

// This isn't defined by `windows.h` - it's custom
#define RGBA(r,g,b,a) ((r) | ((g) << 8) | ((b) << 16) | ((a) << 24))

#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#undef FindResource
#else

#include <stdio.h>

#define RGB(r,g,b) ((r) | ((g) << 8) | ((b) << 16))

typedef bool BOOL;

#define FALSE false
#define TRUE true

struct RECT
{
	long left;
	long top;
	long right;
	long bottom;
};

#define MAX_PATH FILENAME_MAX

#endif
