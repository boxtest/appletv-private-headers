/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView, UILabel, NSString;

@interface _UIAccessDeniedView : UIView {
	UIImageView *_lockView;	// 84 = 0x54
	UILabel *_titleLabel;	// 88 = 0x58
	UILabel *_messageLabel;	// 92 = 0x5c
	NSString *_title;	// 96 = 0x60
	NSString *_message;	// 100 = 0x64
}
@property(copy, nonatomic) NSString *message;	// G=0x330f1f09; S=0x330f18e9; @synthesize=_message
@property(copy, nonatomic) NSString *title;	// G=0x330f1ef5; S=0x330f185d; @synthesize=_title
- (id)initWithFrame:(CGRect)frame;	// 0x330f16f1
- (id)_textColor;	// 0x330f1975
- (void)dealloc;	// 0x330f17bd
- (void)layoutSubviews;	// 0x330f19b9
// declared property getter: - (id)message;	// 0x330f1f09
// declared property setter: - (void)setMessage:(id)message;	// 0x330f18e9
// declared property setter: - (void)setTitle:(id)title;	// 0x330f185d
// declared property getter: - (id)title;	// 0x330f1ef5
@end
