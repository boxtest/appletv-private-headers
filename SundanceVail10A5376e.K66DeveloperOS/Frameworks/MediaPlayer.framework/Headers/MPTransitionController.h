/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library

@class MPViewController, NSMutableSet, UIView, UIViewController;

@interface MPTransitionController : NSObject {
	CFDictionaryRef _observers;	// 4 = 0x4
	float _duration;	// 8 = 0x8
	UIView *_rootView;	// 12 = 0xc
	NSMutableSet *_persistentViewsToFadeOut;	// 16 = 0x10
	NSMutableSet *_viewsToFadeOut;	// 20 = 0x14
	NSMutableSet *_persistentViewsToFadeIn;	// 24 = 0x18
	NSMutableSet *_viewsToFadeIn;	// 28 = 0x1c
	MPViewController *_fromViewController;	// 32 = 0x20
	int _fromInterfaceOrientation;	// 36 = 0x24
	MPViewController *_toViewController;	// 40 = 0x28
	int _toInterfaceOrientation;	// 44 = 0x2c
	UIViewController *_toContainerViewController;	// 48 = 0x30
}
@property(assign, nonatomic) float duration;	// G=0x36cad2a1; S=0x36cad2b1; @synthesize=_duration
@property(assign, nonatomic) int fromInterfaceOrientation;	// G=0x36cad2c1; S=0x36cad2d1; @synthesize=_fromInterfaceOrientation
@property(retain, nonatomic) MPViewController *fromViewController;	// G=0x36cad2e1; S=0x36cad2f1; @synthesize=_fromViewController
@property(retain, nonatomic) UIView *rootView;	// G=0x36cad301; S=0x36cad311; @synthesize=_rootView
@property(retain, nonatomic) UIViewController *toContainerViewController;	// G=0x36cad361; S=0x36cad371; @synthesize=_toContainerViewController
@property(assign, nonatomic) int toInterfaceOrientation;	// G=0x36cad321; S=0x36cad331; @synthesize=_toInterfaceOrientation
@property(retain, nonatomic) MPViewController *toViewController;	// G=0x36cad341; S=0x36cad351; @synthesize=_toViewController
- (id)init;	// 0x36cac56d
- (void)addObserver:(id)observer didEndSelector:(SEL)selector;	// 0x36cac6f5
- (void)addViewToFadeIn:(id)anIn restoreOnPop:(BOOL)pop;	// 0x36cac761
- (void)addViewToFadeOut:(id)fadeOut restoreOnPop:(BOOL)pop;	// 0x36cac831
- (void)dealloc;	// 0x36cac5e5
- (void)didFinishTransition:(BOOL)transition;	// 0x36cacc9d
// declared property getter: - (float)duration;	// 0x36cad2a1
- (void)fadeViewsForRestore:(BOOL)restore;	// 0x36cac901
// declared property getter: - (int)fromInterfaceOrientation;	// 0x36cad2c1
// declared property getter: - (id)fromViewController;	// 0x36cad2e1
- (void)messageObserversWithSuccess:(BOOL)success;	// 0x36cad151
- (void)performTransition:(unsigned)transition;	// 0x36cacc89
- (void)removeObserver:(id)observer;	// 0x36cacb85
// declared property getter: - (id)rootView;	// 0x36cad301
// declared property setter: - (void)setDuration:(float)duration;	// 0x36cad2b1
// declared property setter: - (void)setFromInterfaceOrientation:(int)interfaceOrientation;	// 0x36cad2d1
// declared property setter: - (void)setFromViewController:(id)viewController;	// 0x36cad2f1
// declared property setter: - (void)setRootView:(id)view;	// 0x36cad311
// declared property setter: - (void)setToContainerViewController:(id)containerViewController;	// 0x36cad371
// declared property setter: - (void)setToInterfaceOrientation:(int)interfaceOrientation;	// 0x36cad331
// declared property setter: - (void)setToViewController:(id)viewController;	// 0x36cad351
// declared property getter: - (id)toContainerViewController;	// 0x36cad361
// declared property getter: - (int)toInterfaceOrientation;	// 0x36cad321
// declared property getter: - (id)toViewController;	// 0x36cad341
- (void)transition:(unsigned)transition;	// 0x36cad11d
- (void)willBeginTransition:(unsigned)transition;	// 0x36cacba1
@end

