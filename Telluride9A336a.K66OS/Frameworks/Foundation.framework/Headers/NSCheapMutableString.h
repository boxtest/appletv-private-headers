/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSMutableString.h"
#import "Foundation-Structs.h"


@interface NSCheapMutableString : NSMutableString {
@private
	union {
		unsigned short *fat;
		char *thin;
	} contents;	// 4 = 0x4
	fields flags;	// 8 = 0x8
	unsigned numCharacters;	// 12 = 0xc
	void *_reserved;	// 16 = 0x10
}
- (const char *)cString;	// 0x336d5a01
- (unsigned)cStringLength;	// 0x336d5aa1
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x336d5881
- (void)dealloc;	// 0x3364e051
- (unsigned)fastestEncoding;	// 0x336d59bd
- (void)finalize;	// 0x336d582d
- (BOOL)getBytes:(void *)bytes maxLength:(unsigned)length usedLength:(unsigned *)length3 encoding:(unsigned)encoding options:(unsigned)options range:(NSRange)range remainingRange:(NSRange *)range7;	// 0x336d58b1
- (void)getCharacters:(unsigned short *)characters range:(NSRange)range;	// 0x336513cd
- (unsigned)length;	// 0x3364df29
- (const char *)lossyCString;	// 0x336d5a51
- (void)setContentsNoCopy:(void *)copy length:(unsigned)length freeWhenDone:(BOOL)done isUnicode:(BOOL)unicode;	// 0x3364dde1
@end
