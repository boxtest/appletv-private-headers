/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSTimer, UIHighlightView, UILabel;

__attribute__((visibility("hidden")))
@interface UIWebPDFLabelView : UIView {
@private
	UILabel *_label;	// 48 = 0x30
	UIHighlightView *_highlight;	// 52 = 0x34
	NSTimer *_timer;	// 56 = 0x38
	unsigned currentPageIndex;	// 60 = 0x3c
}
@property(assign, nonatomic) unsigned currentPageIndex;	// G=0x303e186d; S=0x303e187d; @synthesize
@property(readonly, assign, nonatomic, getter=isTimerInstalled) BOOL timerInstalled;	// G=0x303e1549; 
- (id)initWithFrame:(CGRect)frame;	// 0x303e111d
- (void)_fadeOutAnimationDidStop:(id)_fadeOutAnimation finished:(id)finished;	// 0x303e1755
- (double)_fadeOutDelay;	// 0x303e1561
- (double)_fadeOutDuration;	// 0x303e156d
- (void)clearTimer;	// 0x303e1349
// declared property getter: - (unsigned)currentPageIndex;	// 0x303e186d
- (void)dealloc;	// 0x303e1389
- (void)fadeOut;	// 0x303e1785
// declared property getter: - (BOOL)isTimerInstalled;	// 0x303e1549
// declared property setter: - (void)setCurrentPageIndex:(unsigned)index;	// 0x303e187d
- (void)setText:(id)text;	// 0x303e150d
- (void)showNowInSuperView:(id)superView atOrigin:(CGPoint)origin withText:(id)text animated:(BOOL)animated;	// 0x303e1579
- (void)sizeToFit;	// 0x303e13fd
@end
