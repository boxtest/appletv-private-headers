/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIInputView;

__attribute__((visibility("hidden")))
@interface _UIInputViewContent : UIView {
	float _contentHeight;	// 84 = 0x54
	float _contentWidth;	// 88 = 0x58
	UIInputView *_inputView;	// 92 = 0x5c
	int _unclippableCorners;	// 96 = 0x60
}
@property(assign, nonatomic) int _unclippableCorners;	// G=0x30cf9179; S=0x30cf9189; @synthesize
- (id)initWithFrame:(CGRect)frame inputView:(id)view;	// 0x30cf8add
- (CGSize)_contentSize;	// 0x30cf8f9d
- (BOOL)_isToolbar;	// 0x30cf8b29
- (void)_setToolbarBackgroundImage:(id)image;	// 0x30cf8bb1
- (CGSize)_sizeFittingContentViews;	// 0x30cf8c95
// declared property getter: - (int)_unclippableCorners;	// 0x30cf9179
- (void)_updateCornerClipping;	// 0x30cf8fd1
- (void)addSubview:(id)subview;	// 0x30cf8ec5
// declared property setter: - (void)set_unclippableCorners:(int)corners;	// 0x30cf9189
@end
