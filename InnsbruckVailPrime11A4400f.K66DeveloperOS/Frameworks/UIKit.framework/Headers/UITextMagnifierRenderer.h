/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"


__attribute__((visibility("hidden")))
@interface UITextMagnifierRenderer : UIView {
	int m_autoscrollDirections;	// 96 = 0x60
	int m_magnifierMethod;	// 100 = 0x64
}
@property(assign, nonatomic) int autoscrollDirections;	// G=0x2f74e8ad; S=0x2f74e8bd; @synthesize=m_autoscrollDirections
@property(assign, nonatomic) int magnifierMethod;	// G=0x2f74e8cd; S=0x2f74e8dd; @synthesize=m_magnifierMethod
- (id)initWithFrame:(CGRect)frame;	// 0x2f505b21
// declared property getter: - (int)autoscrollDirections;	// 0x2f74e8ad
- (void)drawAutoscroller:(CGRect)autoscroller;	// 0x2f74e629
- (void)drawMagnifier:(CGRect)magnifier;	// 0x2f74e859
- (void)drawRect:(CGRect)rect;	// 0x2f74e85d
// declared property getter: - (int)magnifierMethod;	// 0x2f74e8cd
// declared property setter: - (void)setAutoscrollDirections:(int)directions;	// 0x2f74e8bd
// declared property setter: - (void)setMagnifierMethod:(int)method;	// 0x2f74e8dd
@end

