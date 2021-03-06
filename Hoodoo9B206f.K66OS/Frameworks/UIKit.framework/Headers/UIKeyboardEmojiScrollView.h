/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIScrollViewDelegate.h"
#import "UIView.h"

@class UIScrollView, UIPageControl, UIKeyboardEmojiCategory, NSMutableArray, UILabel;
@protocol UIKeyboardEmojiController;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiScrollView : UIView <UIScrollViewDelegate> {
@private
	UIKeyboardEmojiCategory *_category;	// 48 = 0x30
	UIPageControl *_pageControl;	// 52 = 0x34
	UIScrollView *_scrollView;	// 56 = 0x38
	UILabel *_categoryLabel;	// 60 = 0x3c
	NSMutableArray *_pages;	// 64 = 0x40
	int _currentPage;	// 68 = 0x44
	id<UIKeyboardEmojiController> _controller;	// 72 = 0x48
	BOOL _emojiInteractionEnabled;	// 76 = 0x4c
}
@property(assign) id<UIKeyboardEmojiController> controller;	// G=0x3559e04d; S=0x3559e05d; @synthesize=_controller
@property(readonly, assign) int currentPage;	// G=0x3559ded9; converted property
@property(assign, nonatomic) BOOL emojiInteractionEnabled;	// G=0x3559e06d; S=0x3559da51; @synthesize=_emojiInteractionEnabled
- (id)initWithFrame:(CGRect)frame;	// 0x3559c969
- (void)clearPages;	// 0x3559d8e1
// declared property getter: - (id)controller;	// 0x3559e04d
// converted property getter: - (int)currentPage;	// 0x3559ded9
- (void)dealloc;	// 0x3559cd59
- (void)delayLayout;	// 0x3559d391
- (void)doLayout;	// 0x3559cecd
// declared property getter: - (BOOL)emojiInteractionEnabled;	// 0x3559e06d
- (void)ensureSurrounded;	// 0x3559de2d
- (void)forceLayout;	// 0x3559cebd
- (void)goToFirstPage;	// 0x3559df09
- (void)interruptScrolling;	// 0x3559d871
- (void)layoutPages;	// 0x3559d3cd
- (void)layoutRecents;	// 0x3559d075
- (void)pageChanged;	// 0x3559dbd5
- (void)scrollViewDidEndScrollingAnimation:(id)scrollView;	// 0x3559dcdd
- (void)scrollViewWillBeginDecelerating:(id)scrollView;	// 0x3559dcfd
- (void)setCategory:(id)category;	// 0x3559dafd
// declared property setter: - (void)setController:(id)controller;	// 0x3559e05d
// declared property setter: - (void)setEmojiInteractionEnabled:(BOOL)enabled;	// 0x3559da51
- (void)setFrame:(CGRect)frame;	// 0x3559cdf5
- (void)setScrollDelay:(double)delay;	// 0x3559dee9
@end

