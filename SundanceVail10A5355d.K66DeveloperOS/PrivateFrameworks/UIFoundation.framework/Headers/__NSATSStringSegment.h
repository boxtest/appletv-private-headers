/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <NSString.h> // Unknown library
#import "UIFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface __NSATSStringSegment : NSString {
	CFStringRef _originalString;	// 4 = 0x4
	long _originalStringLength;	// 8 = 0x8
	XXStruct_ny2fMB _range;	// 12 = 0xc
	const unsigned short *_characters;	// 20 = 0x14
	unsigned short _buffer[128];	// 24 = 0x18
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x3250344d
- (id)initWithOriginalString:(id)originalString range:(NSRange)range;	// 0x32503625
- (const unsigned short *)_fastCharacterContents;	// 0x325038dd
- (BOOL)_isDeallocating;	// 0x32503449
- (void)_setOriginalString:(id)string range:(NSRange)range;	// 0x32503551
- (BOOL)_tryRetain;	// 0x32503445
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x325036cd
- (void)dealloc;	// 0x32503675
- (void)getCharacters:(unsigned short *)characters range:(NSRange)range;	// 0x3250381d
- (unsigned)length;	// 0x325036b9
- (oneway void)release;	// 0x325034bd
@end

