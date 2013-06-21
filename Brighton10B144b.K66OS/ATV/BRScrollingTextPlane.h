/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface BRScrollingTextPlane : BRControl {
	NSAttributedString *_string;	// 84 = 0x54
	float _pursuitGap;	// 88 = 0x58
	CGSize _cachedNaturalTextSize;	// 92 = 0x5c
}
@property(retain) id attributedString;	// G=0x2f4199; S=0x2f4109; converted property
+ (Class)layerClass;	// 0x2f40a1
// converted property getter: - (id)attributedString;	// 0x2f4199
- (void)dealloc;	// 0x2f40bd
- (void)drawRect:(CGRect)rect;	// 0x2f42bd
- (CGSize)naturalTextSize;	// 0x2f4211
// converted property setter: - (void)setAttributedString:(id)string;	// 0x2f4109
- (void)setPursuitGap:(float)gap;	// 0x2f41a9
- (void)setTileSize:(CGSize)size;	// 0x2f41e1
@end
