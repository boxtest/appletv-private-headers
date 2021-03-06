/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <NSObject.h> // Unknown library

@class NSTimer, UIScrollView;

@interface ABAdjusterRecord : NSObject {
@private
	UIScrollView *_scrollView;	// 4 = 0x4
	float _adjustment;	// 8 = 0x8
	BOOL _manuallyAdjusted;	// 12 = 0xc
	NSTimer *_delayedScrollTimer;	// 16 = 0x10
}
@property(assign, nonatomic) float adjustment;	// G=0x34cb64f5; S=0x34cb6505; @synthesize=_adjustment
@property(retain, nonatomic) NSTimer *delayedScrollTimer;	// G=0x34cb6535; S=0x34cb6545; @synthesize=_delayedScrollTimer
@property(assign, nonatomic) BOOL manuallyAdjusted;	// G=0x34cb6515; S=0x34cb6525; @synthesize=_manuallyAdjusted
@property(retain, nonatomic) UIScrollView *scrollView;	// G=0x34cb64d5; S=0x34cb64e5; @synthesize=_scrollView
+ (id)recordWithScrollView:(id)scrollView;	// 0x34cb6319
- (void)_adjustTableForKeyboardInfo:(id)keyboardInfo;	// 0x34cb6429
// declared property getter: - (float)adjustment;	// 0x34cb64f5
- (void)cancelDelayedAdjustments;	// 0x34cb6499
- (void)dealloc;	// 0x34cb6359
// declared property getter: - (id)delayedScrollTimer;	// 0x34cb6535
- (unsigned)hash;	// 0x34cb6409
- (BOOL)isEqual:(id)equal;	// 0x34cb63cd
// declared property getter: - (BOOL)manuallyAdjusted;	// 0x34cb6515
// declared property getter: - (id)scrollView;	// 0x34cb64d5
// declared property setter: - (void)setAdjustment:(float)adjustment;	// 0x34cb6505
// declared property setter: - (void)setDelayedScrollTimer:(id)timer;	// 0x34cb6545
// declared property setter: - (void)setManuallyAdjusted:(BOOL)adjusted;	// 0x34cb6525
// declared property setter: - (void)setScrollView:(id)view;	// 0x34cb64e5
@end

