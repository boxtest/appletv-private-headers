/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSTimer, BRBoxListControl;

__attribute__((visibility("hidden")))
@interface BRContextMenuControl : BRControl {
	BRControl *_endPositionControl;	// 84 = 0x54
	BRControl *_startPositionControl;	// 88 = 0x58
	BRControl *_dimControl;	// 92 = 0x5c
	BRControl *_dimPanel;	// 96 = 0x60
	CGRect _endPositionControlFrame;	// 100 = 0x64
	CGRect _startPositionControlFrame;	// 116 = 0x74
	CGRect _dimControlFrame;	// 132 = 0x84
	BRControl *_container;	// 148 = 0x94
	BRBoxListControl *_contextBox;	// 152 = 0x98
	BRBoxListControl *_detailContextBox;	// 156 = 0x9c
	BOOL showingDetailContextBox;	// 160 = 0xa0
	int _dimOption;	// 164 = 0xa4
	NSTimer *_autoDismissTimer;	// 168 = 0xa8
}
@property(retain) BRControl *dimControl;	// G=0x2b0afd; S=0x2b0ac1; converted property
@property(assign) int dimOption;	// G=0x2b0b2d; S=0x2b0b0d; converted property
@property(retain) BRControl *endPositionControl;	// G=0x2b0ab1; S=0x2b0a75; converted property
@property(assign) BOOL isVisible;	// G=0x2b1051; S=0x2b0f21; converted property
@property(retain) id providers;	// G=0x2b0979; S=0x2b093d; converted property
@property(retain) BRControl *startPositionControl;	// G=0x2b0a65; S=0x2b0a29; converted property
- (id)init;	// 0x2b05a9
- (void)_addAnimationsForDisplayState:(BOOL)displayState;	// 0x2b10a1
- (void)_autoDismissTimerFired:(id)fired;	// 0x2b107d
- (CGRect)_dimControlFrame;	// 0x2b1971
- (void)_dissmissAnimationComplete;	// 0x2b16b1
- (CGRect)_endPositionControlFrame;	// 0x2b16d9
- (void)_flipToContextMenu;	// 0x2b1b81
- (void)_flipToDetailContextMenu;	// 0x2b1abd
- (CGRect)_startPositionControlFrame;	// 0x2b1825
- (BOOL)brEventAction:(id)action;	// 0x2b0821
- (void)controlWasDeactivated;	// 0x2b07cd
- (void)dealloc;	// 0x2b0705
- (void)didMoveToSuperview;	// 0x2b1019
// converted property getter: - (id)dimControl;	// 0x2b0afd
// converted property getter: - (int)dimOption;	// 0x2b0b2d
// converted property getter: - (id)endPositionControl;	// 0x2b0ab1
// converted property getter: - (BOOL)isVisible;	// 0x2b1051
- (void)layoutSubcontrols;	// 0x2b0b3d
// converted property getter: - (id)providers;	// 0x2b0979
- (void)setDetailProviders:(id)providers;	// 0x2b0999
// converted property setter: - (void)setDimControl:(id)control;	// 0x2b0ac1
// converted property setter: - (void)setDimOption:(int)option;	// 0x2b0b0d
// converted property setter: - (void)setEndPositionControl:(id)control;	// 0x2b0a75
// converted property setter: - (void)setIsVisible:(BOOL)visible;	// 0x2b0f21
- (void)setProvider:(id)provider;	// 0x2b08fd
// converted property setter: - (void)setProviders:(id)providers;	// 0x2b093d
// converted property setter: - (void)setStartPositionControl:(id)control;	// 0x2b0a29
// converted property getter: - (id)startPositionControl;	// 0x2b0a65
@end
