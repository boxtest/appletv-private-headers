/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "QuickLook-Structs.h"
#import "NSMutableCopying.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface RTFNSParagraphStyle : NSObject <NSCopying, NSMutableCopying> {
	unsigned _alignment;	// 4 = 0x4
	float _headIndent;	// 8 = 0x8
	float _tailIndent;	// 12 = 0xc
	float _firstLineHeadIndent;	// 16 = 0x10
	NSArray *_textBocks;	// 20 = 0x14
	int _baseWritingDirection;	// 24 = 0x18
}
@property(readonly, assign) unsigned alignment;	// G=0x30e0c79d; converted property
@property(readonly, assign) int baseWritingDirection;	// G=0x30e0c7dd; converted property
@property(readonly, assign) float firstLineHeadIndent;	// G=0x30e0c7cd; converted property
@property(readonly, assign) float headIndent;	// G=0x30e0c7ad; converted property
@property(readonly, assign) float tailIndent;	// G=0x30e0c7bd; converted property
- (id)init;	// 0x30e0c60d
- (id)_initWithParagraphStyle:(id)paragraphStyle;	// 0x30e0c639
// converted property getter: - (unsigned)alignment;	// 0x30e0c79d
// converted property getter: - (int)baseWritingDirection;	// 0x30e0c7dd
- (id)copyWithZone:(NSZone *)zone;	// 0x30e0c6f1
- (void)dealloc;	// 0x30e0c751
// converted property getter: - (float)firstLineHeadIndent;	// 0x30e0c7cd
// converted property getter: - (float)headIndent;	// 0x30e0c7ad
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x30e0c701
// converted property getter: - (float)tailIndent;	// 0x30e0c7bd
@end

