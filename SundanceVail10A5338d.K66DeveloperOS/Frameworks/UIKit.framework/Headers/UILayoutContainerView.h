/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIView.h"


__attribute__((visibility("hidden")))
@interface UILayoutContainerView : UIView <NSCoding> {
	id _delegate;	// 84 = 0x54
	BOOL _usesRoundedCorners;	// 88 = 0x58
	float _cornerRadius;	// 92 = 0x5c
	BOOL _usesInnerShadow;	// 96 = 0x60
	BOOL _shadowViewsInstalled;	// 97 = 0x61
	UIView *_shadowView;	// 100 = 0x64
}
@property(assign, nonatomic) id delegate;	// G=0x30c5076d; S=0x30c44771; 
@property(assign, nonatomic) BOOL usesInnerShadow;	// G=0x30e570b1; S=0x30e5704d; @synthesize=_usesInnerShadow
@property(assign, nonatomic) BOOL usesRoundedCorners;	// G=0x30e570a1; S=0x30e56bcd; @synthesize=_usesRoundedCorners
- (id)initWithCoder:(id)coder;	// 0x30e56b11
- (void)_installShadowViews;	// 0x30e56cdd
- (void)_tearDownShadowViews;	// 0x30ccca71
- (void)addSubview:(id)subview;	// 0x30c497a9
- (void)dealloc;	// 0x30ccca31
// declared property getter: - (id)delegate;	// 0x30c5076d
- (void)encodeWithCoder:(id)coder;	// 0x30e56b71
- (void)layoutSubviews;	// 0x30c50691
- (void)setBounds:(CGRect)bounds;	// 0x30ce4b79
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x30c44771
- (void)setFrame:(CGRect)frame;	// 0x30c446dd
// declared property setter: - (void)setUsesInnerShadow:(BOOL)shadow;	// 0x30e5704d
// declared property setter: - (void)setUsesRoundedCorners:(BOOL)corners;	// 0x30e56bcd
// declared property getter: - (BOOL)usesInnerShadow;	// 0x30e570b1
// declared property getter: - (BOOL)usesRoundedCorners;	// 0x30e570a1
@end

