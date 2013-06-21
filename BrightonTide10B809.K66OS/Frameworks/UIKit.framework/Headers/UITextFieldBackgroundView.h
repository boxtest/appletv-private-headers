/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIColor;

__attribute__((visibility("hidden")))
@interface UITextFieldBackgroundView : UIView {
	BOOL _active;	// 84 = 0x54
	float _progress;	// 88 = 0x58
	UIColor *_tintColor;	// 92 = 0x5c
}
@property(retain, nonatomic) UIColor *tintColor;	// G=0x32baeced; S=0x32b97d2d; @synthesize=_tintColor
- (id)initWithFrame:(CGRect)frame active:(BOOL)active;	// 0x32b9779d
- (void)_updateImages;	// 0x32d37c41
- (void)dealloc;	// 0x32baed81
- (void)setActive:(BOOL)active;	// 0x32b9fd6d
- (void)setBounds:(CGRect)bounds;	// 0x32d37c45
- (void)setFrame:(CGRect)frame;	// 0x32b97835
- (void)setProgress:(float)progress;	// 0x32d37d0d
// declared property setter: - (void)setTintColor:(id)color;	// 0x32b97d2d
// declared property getter: - (id)tintColor;	// 0x32baeced
@end
