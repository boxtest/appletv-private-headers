/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "Symbolication-Structs.h"
#import </libobjc.A.h>
#import "VMUMemoryView.h"


@interface VMUMemoryView_Native : NSObject <VMUMemoryView> {
	VMURange _addressRange;	// 4 = 0x4
	unsigned long _cursor;	// 20 = 0x14
	char *_data;	// 24 = 0x18
	id _gcKeepAlive;	// 28 = 0x1c
}
@property(readonly, assign) VMURange addressRange;	// G=0x328ff7dd; converted property
@property(assign) unsigned long long cursor;	// G=0x328ff7f5; S=0x328ff81d; converted property
- (id)initWithAddressRange:(VMURange)addressRange data:(char *)data memory:(id)memory;	// 0x328ff755
- (long long)LEB128;	// 0x32900b89
- (unsigned long long)ULEB128;	// 0x32900a61
// converted property getter: - (VMURange)addressRange;	// 0x328ff7dd
- (void)advanceCursor:(unsigned long long)cursor;	// 0x328ff8f5
- (id)arrayOfInt16:(unsigned long)int16;	// 0x32900461
- (id)arrayOfInt32:(unsigned long)int32;	// 0x3290053d
- (id)arrayOfInt64:(unsigned long)int64;	// 0x32900619
- (id)arrayOfInt8:(unsigned long)int8;	// 0x32900389
- (id)arrayOfUInt16:(unsigned long)uint16;	// 0x329007cd
- (id)arrayOfUInt32:(unsigned long)uint32;	// 0x329008a9
- (id)arrayOfUInt64:(unsigned long)uint64;	// 0x32900985
- (id)arrayOfUInt8:(unsigned long)uint8;	// 0x329006f5
- (BOOL)charAtOffset:(unsigned long long)offset;	// 0x32901065
// converted property getter: - (unsigned long long)cursor;	// 0x328ff7f5
- (id)description;	// 0x32901469
- (dyld_image_info_64)dyldImageInfo;	// 0x32900e21
- (dyld_image_info_64)dyldImageInfo64;	// 0x32900f45
- (short)int16;	// 0x328ffc2d
- (int)int32;	// 0x328ffd21
- (long long)int64;	// 0x328ffe15
- (BOOL)int8;	// 0x328ffb39
- (BOOL)isCursorPointerAligned;	// 0x328ffab1
- (nlist_64)nlist;	// 0x32900bfd
- (nlist_64)nlist_64;	// 0x32900d1d
- (void)pointerAlignCursor;	// 0x328ffaf5
- (id)readBytes:(unsigned long)bytes;	// 0x329002e9
- (void)rewindCursor:(unsigned long long)cursor;	// 0x328ff9d9
// converted property setter: - (void)setCursor:(unsigned long long)cursor;	// 0x328ff81d
- (id)stringWithEncoding:(unsigned)encoding;	// 0x32901315
- (id)stringWithEncoding:(unsigned)encoding offset:(unsigned long long)offset;	// 0x32901145
- (id)stringWithEncoding:(unsigned)encoding size:(unsigned long)size;	// 0x32901165
- (unsigned short)uint16;	// 0x32900005
- (unsigned)uint32;	// 0x329000f9
- (unsigned long long)uint64;	// 0x329001ed
- (unsigned char)uint8;	// 0x328fff11
@end

