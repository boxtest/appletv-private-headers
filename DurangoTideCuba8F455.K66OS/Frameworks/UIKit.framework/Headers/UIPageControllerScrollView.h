/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIScrollView.h"

@class UIPageController;

@interface UIPageControllerScrollView : UIScrollView {
	UIPageController *_pageController;	// 388 = 0x184
}
@property(assign, nonatomic) UIPageController *pageController;	// G=0x30307e15; S=0x30307e25; @synthesize=_pageController
- (void)_scrollViewAnimationEnded;	// 0x303091e5
- (void)_scrollViewDidEndDecelerating;	// 0x30309241
- (void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)_scrollView;	// 0x3030929d
- (void)_scrollViewWillBeginDragging;	// 0x30309301
- (void)layoutSubviews;	// 0x30309349
// declared property getter: - (id)pageController;	// 0x30307e15
- (void)setBounds:(CGRect)bounds;	// 0x30309bfd
- (void)setFrame:(CGRect)frame;	// 0x303093b1
// declared property setter: - (void)setPageController:(id)controller;	// 0x30307e25
@end
