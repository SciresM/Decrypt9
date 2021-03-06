#pragma once

#include "common.h"

#define MAXENTRIES 1024
typedef struct {
	u32 commonKeyIndex;
	u8  reserved[4];
	u8  titleId[8];
	u8  encryptedTitleKey[16];
} __attribute__((packed)) TitleKeyEntry;

typedef struct {
	u32 n_entries;
	u8  reserved[12];
	TitleKeyEntry entries[MAXENTRIES];
} __attribute__((packed, aligned(16))) EncKeysInfo;

u32 DecryptTitlekeys(void);
