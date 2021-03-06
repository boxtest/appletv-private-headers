/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"


__attribute__((visibility("hidden")))
@interface UIToolbarButtonBadge : UIView {
@private
	UIView *_value;	// 48 = 0x30
	UIView *_background;	// 52 = 0x34
	UIView *_alternate;	// 56 = 0x38
}
- (id)initWithValue:(id)value blinks:(BOOL)blinks;	// 0x30214599
- (void)dealloc;	// 0x302145f9
- (void)layoutSubviews;	// 0x30214b21
- (void)setBlinks:(BOOL)blinks;	// 0x30214c89
- (void)setValue:(id)value;	// 0x30214885
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3021466d
@end

