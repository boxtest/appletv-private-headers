/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIViewController.h> // Unknown library

@class MPTransitionController, NSTimer, MPAVItem;

@interface MPViewController : UIViewController {
	id _delegate;	// 132 = 0x84
	MPAVItem *_item;	// 136 = 0x88
	int _interfaceOrientation;	// 140 = 0x8c
	MPViewController *_pushedViewController;	// 144 = 0x90
	MPTransitionController *_pushedTransitionController;	// 148 = 0x94
	NSTimer *_idleTimerDisablerTimer;	// 152 = 0x98
	unsigned _appearing : 1;	// 156 = 0x9c
	unsigned _observesApplicationSuspendResumeEventsOnly : 1;	// 156 = 0x9c
}
@property(assign, getter=isAppearing) BOOL appearing;	// G=0x31d93771; S=0x31d937c1; converted property
@property(assign, nonatomic) id delegate;	// G=0x31d937f5; S=0x31d937e5; 
@property(assign, nonatomic, getter=idleTimerDisabled, setter=setIdleTimerDisabled:) BOOL idleTimerDisabled;	// G=0x31d937ad; S=0x31d93bb5; 
@property(retain, nonatomic) MPAVItem *item;	// G=0x31d93819; S=0x31d94299; @synthesize=_item
@property(assign, nonatomic) BOOL observesApplicationSuspendResumeEventsOnly;	// G=0x31d9378d; S=0x31d93e81; 
@property(assign, nonatomic) int orientation;	// G=0x31d93809; S=0x31d93b9d; @synthesize=_interfaceOrientation
- (id)init;	// 0x31d941d1
- (BOOL)_canReloadView;	// 0x31d93805
- (void)_disableIdleTimer:(id)timer;	// 0x31d94231
- (void)_popTransitionEnded:(id)ended;	// 0x31d939c9
- (void)_pushTransitionEnded:(id)ended;	// 0x31d93965
- (void)applicationDidResumeEventsOnly;	// 0x31d93fb9
- (void)applicationDidSuspendEventsOnly;	// 0x31d93fcd
- (void)beginIgnoringChangeTypes:(unsigned)types;	// 0x31d9406d
- (BOOL)canDisplayItem:(id)item withInterfaceOrientation:(int)interfaceOrientation;	// 0x31d93761
- (void)clearWeakReferencesToObject:(id)object;	// 0x31d93b1d
- (id)copyOverlayViewForTransitionToItem:(id)item;	// 0x31d93765
- (void)dealloc;	// 0x31d940f9
// declared property getter: - (id)delegate;	// 0x31d937f5
- (void)didChangeToInterfaceOrientation:(int)interfaceOrientation;	// 0x31d93769
- (int)displayableInterfaceOrientationForInterfaceOrientation:(int)interfaceOrientation;	// 0x31d9376d
- (void)endIgnoringChangeTypes:(unsigned)types;	// 0x31d93fe1
// declared property getter: - (BOOL)idleTimerDisabled;	// 0x31d937ad
// converted property getter: - (BOOL)isAppearing;	// 0x31d93771
// declared property getter: - (id)item;	// 0x31d93819
- (void)noteIgnoredChangeTypes:(unsigned)types;	// 0x31d937a1
// declared property getter: - (BOOL)observesApplicationSuspendResumeEventsOnly;	// 0x31d9378d
// declared property getter: - (int)orientation;	// 0x31d93809
- (id)popViewControllerAnimated:(BOOL)animated;	// 0x31d93c6d
- (void)pushViewController:(id)controller withTransition:(id)transition;	// 0x31d93d55
- (void)restoreOverlayViewAfterTransition:(id)transition;	// 0x31d937a5
// converted property setter: - (void)setAppearing:(BOOL)appearing;	// 0x31d937c1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31d937e5
// declared property setter: - (void)setIdleTimerDisabled:(BOOL)disabled;	// 0x31d93bb5
// declared property setter: - (void)setItem:(id)item;	// 0x31d94299
// declared property setter: - (void)setObservesApplicationSuspendResumeEventsOnly:(BOOL)only;	// 0x31d93e81
// declared property setter: - (void)setOrientation:(int)orientation;	// 0x31d93b9d
- (void)setOrientation:(int)orientation animate:(BOOL)animate;	// 0x31d93b61
- (void)setView:(id)view;	// 0x31d9423d
- (void)startTicking;	// 0x31d93785
- (void)stopTicking;	// 0x31d93789
- (void)viewDidAppear:(BOOL)view;	// 0x31d938dd
- (void)viewDidDisappear:(BOOL)view;	// 0x31d93a8d
- (void)viewWillAppear:(BOOL)view;	// 0x31d9389d
- (void)viewWillDisappear:(BOOL)view;	// 0x31d93acd
- (void)willChangeToInterfaceOrientation:(int)interfaceOrientation;	// 0x31d937a9
@end

