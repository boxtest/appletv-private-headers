/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

#import "AXHearingAidSupport-Structs.h"
#import <UIView.h> // Unknown library

@class NSString, UIFont, UIImage;

@interface AXGradientLabel : UIView {
	NSString *_text;	// 84 = 0x54
	UIFont *_font;	// 88 = 0x58
	UIImage *_gradient;	// 92 = 0x5c
	CGColorRef _patternColor;	// 96 = 0x60
}
@property(retain, nonatomic) UIFont *font;	// G=0x3335a491; S=0x3335a7e9; @synthesize=_font
@property(retain, nonatomic) UIImage *gradient;	// G=0x3335a7f9; S=0x3335a539; @synthesize=_gradient
@property(retain, nonatomic) NSString *text;	// G=0x3335a7c9; S=0x3335a7d9; @synthesize=_text
- (CGColorRef)_patternColor;	// 0x3335a695
- (void)dealloc;	// 0x3335a405
- (void)drawRect:(CGRect)rect;	// 0x3335a6a5
// declared property getter: - (id)font;	// 0x3335a491
// declared property getter: - (id)gradient;	// 0x3335a7f9
// declared property setter: - (void)setFont:(id)font;	// 0x3335a7e9
// declared property setter: - (void)setGradient:(id)gradient;	// 0x3335a539
// declared property setter: - (void)setText:(id)text;	// 0x3335a7d9
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3335a4c9
// declared property getter: - (id)text;	// 0x3335a7c9
@end
