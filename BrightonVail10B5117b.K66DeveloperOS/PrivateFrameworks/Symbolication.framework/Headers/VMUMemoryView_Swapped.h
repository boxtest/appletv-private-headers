/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "Symbolication-Structs.h"
#import "VMUMemoryView.h"


@interface VMUMemoryView_Swapped : NSObject <VMUMemoryView> {
	VMURange _addressRange;	// 4 = 0x4
	unsigned long _cursor;	// 20 = 0x14
	char *_data;	// 24 = 0x18
	id _gcKeepAlive;	// 28 = 0x1c
}
@property(readonly, assign) VMURange addressRange;	// G=0x3576c045; converted property
@property(assign) unsigned long long cursor;	// G=0x3576c069; S=0x3576c091; converted property
- (id)initWithAddressRange:(VMURange)addressRange data:(char *)data memory:(id)memory;	// 0x3576bfbd
- (long long)LEB128;	// 0x3576d6e9
- (unsigned long long)ULEB128;	// 0x3576d69d
// converted property getter: - (VMURange)addressRange;	// 0x3576c045
- (void)advanceCursor:(unsigned long long)cursor;	// 0x3576c16d
- (id)arrayOfInt16:(unsigned long)int16;	// 0x3576cced
- (id)arrayOfInt32:(unsigned long)int32;	// 0x3576ce6d
- (id)arrayOfInt64:(unsigned long)int64;	// 0x3576cfed
- (id)arrayOfInt8:(unsigned long)int8;	// 0x3576cc15
- (id)arrayOfUInt16:(unsigned long)uint16;	// 0x3576d231
- (id)arrayOfUInt32:(unsigned long)uint32;	// 0x3576d3b1
- (id)arrayOfUInt64:(unsigned long)uint64;	// 0x3576d531
- (id)arrayOfUInt8:(unsigned long)uint8;	// 0x3576d159
- (BOOL)charAtOffset:(unsigned long long)offset;	// 0x3576dc29
// converted property getter: - (unsigned long long)cursor;	// 0x3576c069
- (id)description;	// 0x3576e069
- (dyld_image_info_64)dyldImageInfo;	// 0x3576d9e1
- (dyld_image_info_64)dyldImageInfo64;	// 0x3576db05
- (short)int16;	// 0x3576c4a9
- (int)int32;	// 0x3576c5a1
- (long long)int64;	// 0x3576c699
- (BOOL)int8;	// 0x3576c3b5
- (BOOL)isCursorPointerAligned;	// 0x3576c32d
- (nlist_64)nlist;	// 0x3576d75d
- (nlist_64)nlist_64;	// 0x3576d89d
- (void)pointerAlignCursor;	// 0x3576c371
- (id)readBytes:(unsigned long)bytes;	// 0x3576cb75
- (void)rewindCursor:(unsigned long long)cursor;	// 0x3576c24d
// converted property setter: - (void)setCursor:(unsigned long long)cursor;	// 0x3576c091
- (id)stringWithEncoding:(unsigned)encoding;	// 0x3576decd
- (id)stringWithEncoding:(unsigned)encoding offset:(unsigned long long)offset;	// 0x3576dd05
- (id)stringWithEncoding:(unsigned)encoding size:(unsigned long)size;	// 0x3576dd25
- (unsigned short)uint16;	// 0x3576c889
- (unsigned)uint32;	// 0x3576c981
- (unsigned long long)uint64;	// 0x3576ca79
- (unsigned char)uint8;	// 0x3576c795
@end
