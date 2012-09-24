/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface WMListLevelTextMapper : NSObject {
	NSMutableArray *m_tokens;	// 4 = 0x4
	int m_format;	// 8 = 0x8
	unsigned m_initNumber;	// 12 = 0xc
}
- (id)initWithText:(id)text;	// 0x3502fc69
- (id)initWithText:(id)text format:(int)format;	// 0x34f5dc61
- (id)initWithText:(id)text format:(int)format initNumber:(int)number;	// 0x34f5dc85
- (void)dealloc;	// 0x34f5e255
- (id)listLevelTextforOutline:(id)outline;	// 0x34f5df51
- (id)token:(unsigned)token;	// 0x3502fca9
- (unsigned)tokenCount;	// 0x3502fc89
@end
