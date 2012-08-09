/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView, UIColor;

__attribute__((visibility("hidden")))
@interface UIWebDragDotView : UIView {
	UIColor *m_insertionPointColor;	// 84 = 0x54
	UIColor *m_selectionBarColor;	// 88 = 0x58
	UIImageView *m_dot;	// 92 = 0x5c
	int m_orientation;	// 96 = 0x60
}
@property(assign, nonatomic) BOOL showsBall;	// G=0x33cbe5cd; S=0x33cbe5f9; 
- (id)initWithFrame:(CGRect)frame container:(id)container orientation:(int)orientation;	// 0x33cbdd69
- (void)dealloc;	// 0x33cbdf41
- (void)drawRect:(CGRect)rect;	// 0x33cbe355
- (BOOL)isPointedDown;	// 0x33cbdfd9
- (BOOL)isPointedLeft;	// 0x33cbe021
- (BOOL)isPointedRight;	// 0x33cbe009
- (BOOL)isPointedUp;	// 0x33cbdff1
- (BOOL)isVertical;	// 0x33cbdfb9
- (void)setFrame:(CGRect)frame;	// 0x33cbe039
// declared property setter: - (void)setShowsBall:(BOOL)ball;	// 0x33cbe5f9
// declared property getter: - (BOOL)showsBall;	// 0x33cbe5cd
@end
