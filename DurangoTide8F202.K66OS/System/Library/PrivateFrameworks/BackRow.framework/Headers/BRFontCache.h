/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRSingleton.h"
#import "BackRow-Structs.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface BRFontCache : BRSingleton {
@private
	CGSize _displaySize;	// 4 = 0x4
	NSDictionary *_cache;	// 12 = 0xc
}
+ (void)setSingleton:(id)singleton;	// 0x3289de21
+ (id)singleton;	// 0x3289de15
- (id)init;	// 0x329595ad
- (CTFontRef)_createFontForAttributes:(id)attributes;	// 0x32959655
- (id)addRealFontsToAttributedString:(id)attributedString;	// 0x328a6e71
- (CTFontRef)createFontForRowHeight:(float)rowHeight fontName:(id)name;	// 0x3295988d
- (void)dealloc;	// 0x3295960d
- (void)setDisplaySize:(CGSize)size;	// 0x3289de2d
@end
