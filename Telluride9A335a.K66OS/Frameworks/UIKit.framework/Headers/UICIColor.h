/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIColor.h"
#import "UIKit-Structs.h"

@class CIColor;

__attribute__((visibility("hidden")))
@interface UICIColor : UIColor {
@private
	CIColor *_ciColor;	// 8 = 0x8
	UIColor *_rgbColor;	// 12 = 0xc
}
- (id)initWithCIColor:(id)cicolor;	// 0x33ba9899
- (CGColorRef)CGColor;	// 0x33ba9c19
- (id)CIColor;	// 0x33ba9c41
- (id)_rgbColor;	// 0x33ba9a45
- (id)colorWithAlphaComponent:(float)alphaComponent;	// 0x33ba9b91
- (void)dealloc;	// 0x33ba9905
- (id)description;	// 0x33ba9965
- (BOOL)getRed:(float *)red green:(float *)green blue:(float *)blue alpha:(float *)alpha;	// 0x33ba9cd9
- (unsigned)hash;	// 0x33ba9cb9
- (BOOL)isEqual:(id)equal;	// 0x33ba9c51
- (void)set;	// 0x33ba9b19
- (void)setFill;	// 0x33ba9b41
- (void)setStroke;	// 0x33ba9b69
@end

