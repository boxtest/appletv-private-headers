/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "BRReady.h"

@class NSString, BRTextControl, BRAsyncImageControl;

__attribute__((visibility("hidden")))
@interface ATVGameVersusPreview : BRControl <BRReady> {
	BRTextControl *_centerTextControl;	// 84 = 0x54
	BOOL _isReady;	// 88 = 0x58
	BRAsyncImageControl *_backgroundImageControl;	// 92 = 0x5c
	BRAsyncImageControl *_leftImageControl;	// 96 = 0x60
	BRAsyncImageControl *_rightImageControl;	// 100 = 0x64
}
@property(readonly, assign, nonatomic) BRAsyncImageControl *backgroundImageControl;	// G=0x11c5a5; @synthesize=_backgroundImageControl
@property(copy, nonatomic) NSString *centerText;	// G=0x11c325; S=0x11c35d; 
@property(readonly, assign) BOOL isReady;	// G=0x11c315; converted property
@property(readonly, assign, nonatomic) BRAsyncImageControl *leftImageControl;	// G=0x11c5b5; @synthesize=_leftImageControl
@property(readonly, assign, nonatomic) BRAsyncImageControl *rightImageControl;	// G=0x11c5c5; @synthesize=_rightImageControl
- (id)init;	// 0x11bfe1
- (id)_centerTextAttributes;	// 0x11c5d5
- (void)_imageLoadedNotification:(id)notification;	// 0x11c5f9
- (void)_setHiddenOnSubcontrols:(BOOL)subcontrols;	// 0x11c6f5
// declared property getter: - (id)backgroundImageControl;	// 0x11c5a5
// declared property getter: - (id)centerText;	// 0x11c325
- (void)dealloc;	// 0x11c1e5
- (void)getReady;	// 0x11c29d
// converted property getter: - (BOOL)isReady;	// 0x11c315
- (void)layoutSubcontrols;	// 0x11c3b1
// declared property getter: - (id)leftImageControl;	// 0x11c5b5
// declared property getter: - (id)rightImageControl;	// 0x11c5c5
// declared property setter: - (void)setCenterText:(id)text;	// 0x11c35d
@end
