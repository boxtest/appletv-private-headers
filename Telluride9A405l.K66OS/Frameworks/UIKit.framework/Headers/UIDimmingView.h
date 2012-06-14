/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView, UIColor, UIBarButtonItem, NSArray;

__attribute__((visibility("hidden")))
@interface UIDimmingView : UIView {
@private
	id _delegate;	// 48 = 0x30
	UIBarButtonItem *_highlightedBarButtonItem;	// 52 = 0x34
	UIImageView *_highlightedImageView;	// 56 = 0x38
	UIImageView *_backgroundGlow;	// 60 = 0x3c
	NSArray *_passthroughViews;	// 64 = 0x40
	BOOL _ignoresTouches;	// 68 = 0x44
	BOOL _displayed;	// 69 = 0x45
	BOOL _inPassthroughHitTest;	// 70 = 0x46
	UIColor *_dimmingColor;	// 72 = 0x48
}
@property(assign, nonatomic) id delegate;	// G=0x32f0f5b1; S=0x32f0f5c1; @synthesize=_delegate
@property(retain, nonatomic) UIColor *dimmingColor;	// G=0x32f0f645; S=0x32f0f655; @synthesize=_dimmingColor
@property(assign, nonatomic) BOOL displayed;	// G=0x32f0f625; S=0x32f0f635; @synthesize=_displayed
@property(retain, nonatomic) UIBarButtonItem *highlightedBarButtonItem;	// G=0x32f0efcd; S=0x32f0ec1d; 
@property(assign, nonatomic) BOOL ignoresTouches;	// G=0x32f0f605; S=0x32f0f615; @synthesize=_ignoresTouches
@property(retain, nonatomic) NSArray *passthroughViews;	// G=0x32f0f5d1; S=0x32f0f5e1; @synthesize=_passthroughViews
+ (id)defaultDimmingColor;	// 0x32f0ea65
- (id)initWithFrame:(CGRect)frame;	// 0x32f0eaad
- (void)dealloc;	// 0x32f0eb71
// declared property getter: - (id)delegate;	// 0x32f0f5b1
// declared property getter: - (id)dimmingColor;	// 0x32f0f645
- (void)dimmingRemovalAnimationDidStop;	// 0x32f0ec0d
- (void)display:(BOOL)display withAnimationDuration:(float)animationDuration afterDelay:(float)delay;	// 0x32f0f005
// declared property getter: - (BOOL)displayed;	// 0x32f0f625
// declared property getter: - (id)highlightedBarButtonItem;	// 0x32f0efcd
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x32f0f371
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x32f0f189
// declared property getter: - (BOOL)ignoresTouches;	// 0x32f0f605
- (void)mouseUp:(GSEventRef)up;	// 0x32f0f141
// declared property getter: - (id)passthroughViews;	// 0x32f0f5d1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32f0f5c1
// declared property setter: - (void)setDimmingColor:(id)color;	// 0x32f0f655
// declared property setter: - (void)setDisplayed:(BOOL)displayed;	// 0x32f0f635
// declared property setter: - (void)setHighlightedBarButtonItem:(id)item;	// 0x32f0ec1d
// declared property setter: - (void)setIgnoresTouches:(BOOL)touches;	// 0x32f0f615
// declared property setter: - (void)setPassthroughViews:(id)views;	// 0x32f0f5e1
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x32f0f559
@end
