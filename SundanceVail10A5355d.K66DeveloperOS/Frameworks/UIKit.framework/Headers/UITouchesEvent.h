/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIInternalEvent.h"

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface UITouchesEvent : UIInternalEvent {
	NSMutableSet *_touches;	// 16 = 0x10
	CFDictionaryRef _keyedTouches;	// 20 = 0x14
	CFDictionaryRef _keyedTouchesByWindow;	// 24 = 0x18
	CFDictionaryRef _gestureRecognizersByWindow;	// 28 = 0x1c
}
- (BOOL)_addGestureRecognizersForView:(id)view toTouch:(id)touch currentTouchMap:(CFDictionaryRef)map newTouchMap:(CFDictionaryRef)map4;	// 0x33a073ed
- (void)_addTouch:(id)touch forDelayedDelivery:(BOOL)delayedDelivery;	// 0x33a07109
- (id)_allTouches;	// 0x33c1a8bd
- (void)_clearTouches;	// 0x33a0622d
- (void)_clearViewForTouch:(id)touch;	// 0x33a0af05
- (id)_cloneEvent;	// 0x33ae1be9
- (void)_dismissSharedCalloutBarIfNeeded;	// 0x33a07805
- (id)_firstTouchForView:(id)view;	// 0x33a09299
- (id)_gestureRecognizersForWindow:(id)window;	// 0x33a07f89
- (id)_init;	// 0x33a1cdb5
- (id)_initWithEvent:(GSEventRef)event touches:(id)touches;	// 0x33abf7e1
- (void)_invalidateGestureRecognizerForWindowCache;	// 0x33a174dd
- (void)_moveTouchesFromView:(id)view toView:(id)view2;	// 0x33c1a8e1
- (void)_removeTouch:(id)touch;	// 0x33a0ad09
- (void)_removeTouch:(id)touch fromGestureRecognizer:(id)gestureRecognizer;	// 0x33ae27e5
- (void)_removeTouchesForKey:(id)key;	// 0x33a0afb5
- (void)_removeTouchesForWindow:(id)window;	// 0x33a0b139
- (id)_touchesForGesture:(id)gesture withPhase:(int)phase;	// 0x33a7b9d9
- (void)_touchesForGesture:(id)gesture withPhase:(int)phase intoSet:(id)set;	// 0x33adf5c9
- (id)_touchesForGestureRecognizer:(id)gestureRecognizer;	// 0x33c1a8cd
- (id)_touchesForKey:(id)key;	// 0x33a07365
- (id)_touchesForView:(id)view withPhase:(int)phase;	// 0x33a084f1
- (id)_touchesForWindow:(id)window;	// 0x33a077a9
- (id)_viewsForWindow:(id)window;	// 0x33a083ed
- (id)_windows;	// 0x33a079a9
- (id)allTouches;	// 0x33a07aad
- (void)dealloc;	// 0x33ac0199
- (id)description;	// 0x33c1a949
- (id)touchesForGestureRecognizer:(id)gestureRecognizer;	// 0x33a7bae9
- (id)touchesForView:(id)view;	// 0x33a08641
- (id)touchesForWindow:(id)window;	// 0x33a080ed
- (int)type;	// 0x33b42b89
@end
