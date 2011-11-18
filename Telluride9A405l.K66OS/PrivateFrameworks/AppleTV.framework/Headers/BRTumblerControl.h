/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRImageControl;
@protocol BRTumblerDelegate, BRTumblerDataSource;

@interface BRTumblerControl : BRControl {
@private
	id<BRTumblerDataSource> _dataSource;	// 48 = 0x30
	id<BRTumblerDelegate> _delegate;	// 52 = 0x34
	unsigned _currentIndex;	// 56 = 0x38
	unsigned _itemCount;	// 60 = 0x3c
	BRControl *_currentItem;	// 64 = 0x40
	BRControl *_nextItem;	// 68 = 0x44
	BRControl *_prevItem;	// 72 = 0x48
	BRControl *_nextNextItem;	// 76 = 0x4c
	BRControl *_prevPrevItem;	// 80 = 0x50
	int _tumbleState;	// 84 = 0x54
	BRControl *_nextFade;	// 88 = 0x58
	BRControl *_prevFade;	// 92 = 0x5c
	BRControl *_nextBlackout;	// 96 = 0x60
	BRControl *_prevBlackout;	// 100 = 0x64
	BRImageControl *_nextArrow;	// 104 = 0x68
	BRImageControl *_prevArrow;	// 108 = 0x6c
	CGSize _sizeThatFits;	// 112 = 0x70
}
@property(readonly, assign, nonatomic) BRControl *currentItem;	// G=0x35e459e5; @synthesize=_currentItem
@property(assign, nonatomic) unsigned currentItemIndex;	// G=0x35e44919; S=0x35e44929; 
@property(assign, nonatomic) id<BRTumblerDataSource> dataSource;	// G=0x35e459b5; S=0x35e45065; @synthesize=_dataSource
@property(assign, nonatomic) id<BRTumblerDelegate> delegate;	// G=0x35e459c5; S=0x35e459d5; @synthesize=_delegate
@property(readonly, assign) float itemPadding;	// G=0x35e45365; @dynamic
- (id)init;	// 0x35e4434d
- (id)_arrowAnimations;	// 0x35e45e81
- (id)_controlFromDataSourceAtIndex:(unsigned)index;	// 0x35e45fb9
- (CGPoint)_currentPos;	// 0x35e45d19
- (id)_nextFadeFilters;	// 0x35e459f5
- (CGPoint)_nextNextPos;	// 0x35e45e05
- (CGPoint)_nextPos;	// 0x35e45d91
- (id)_prevFadeFilters;	// 0x35e45b09
- (CGPoint)_prevPos;	// 0x35e45c9d
- (CGPoint)_prevPrevPos;	// 0x35e45c1d
- (BOOL)_tumbleNextShouldAnimate:(BOOL)_tumbleNext;	// 0x35e46599
- (BOOL)_tumblePrevShouldAnimate:(BOOL)_tumblePrev;	// 0x35e46001
- (id)accessibilityLabel;	// 0x35e46b31
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x35e45901
- (BOOL)brEventAction:(id)action;	// 0x35e45415
// declared property getter: - (id)currentItem;	// 0x35e459e5
// declared property getter: - (unsigned)currentItemIndex;	// 0x35e44919
// declared property getter: - (id)dataSource;	// 0x35e459b5
- (void)dealloc;	// 0x35e44805
// declared property getter: - (id)delegate;	// 0x35e459c5
// declared property getter: - (float)itemPadding;	// 0x35e45365
- (void)layoutSubcontrols;	// 0x35e44a49
- (void)reload;	// 0x35e45085
// declared property setter: - (void)setCurrentItemIndex:(unsigned)index;	// 0x35e44929
// declared property setter: - (void)setDataSource:(id)source;	// 0x35e45065
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x35e459d5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x35e44955
@end

