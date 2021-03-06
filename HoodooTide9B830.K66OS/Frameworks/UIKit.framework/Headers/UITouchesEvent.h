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
@private
	NSMutableSet *_touches;	// 16 = 0x10
	CFDictionaryRef _keyedTouches;	// 20 = 0x14
	CFDictionaryRef _keyedTouchesByWindow;	// 24 = 0x18
	CFDictionaryRef _gestureRecognizersByWindow;	// 28 = 0x1c
}
- (BOOL)_addGestureRecognizersForView:(id)view toTouch:(id)touch currentTouchMap:(CFDictionaryRef)map newTouchMap:(CFDictionaryRef)map4;	// 0x30032b61
- (void)_addTouch:(id)touch forDelayedDelivery:(BOOL)delayedDelivery;	// 0x3003289d
- (id)_allTouches;	// 0x3024d7e9
- (void)_clearTouches;	// 0x30031a49
- (void)_clearViewForTouch:(id)touch;	// 0x3003647d
- (id)_cloneEvent;	// 0x30119e49
- (void)_dismissSharedCalloutBarIfNeeded;	// 0x30032ed5
- (id)_firstTouchForView:(id)view;	// 0x300347e9
- (id)_gestureRecognizersForWindow:(id)window;	// 0x30033641
- (id)_init;	// 0x30048811
- (id)_initWithEvent:(GSEventRef)event touches:(id)touches;	// 0x300f6aed
- (void)_invalidateGestureRecognizerForWindowCache;	// 0x30043301
- (void)_moveTouchesFromView:(id)view toView:(id)view2;	// 0x3024d80d
- (void)_removeTouch:(id)touch;	// 0x300362ad
- (void)_removeTouch:(id)touch fromGestureRecognizer:(id)gestureRecognizer;	// 0x3011ac95
- (void)_removeTouchesForKey:(id)key;	// 0x30036521
- (void)_removeTouchesForWindow:(id)window;	// 0x3003669d
- (id)_touchesForGesture:(id)gesture withPhase:(int)phase;	// 0x300ac81d
- (void)_touchesForGesture:(id)gesture withPhase:(int)phase intoSet:(id)set;	// 0x30117a45
- (id)_touchesForGestureRecognizer:(id)gestureRecognizer;	// 0x3024d7f9
- (id)_touchesForKey:(id)key;	// 0x30032ad9
- (id)_touchesForView:(id)view withPhase:(int)phase;	// 0x30033ab5
- (id)_touchesForWindow:(id)window;	// 0x30032e8d
- (id)_viewsForWindow:(id)window;	// 0x300339cd
- (id)_windows;	// 0x300330ad
- (id)allTouches;	// 0x3003318d
- (void)dealloc;	// 0x300f74f9
- (id)description;	// 0x3024d875
- (id)touchesForGestureRecognizer:(id)gestureRecognizer;	// 0x300ac911
- (id)touchesForView:(id)view;	// 0x30033be1
- (id)touchesForWindow:(id)window;	// 0x30033791
- (int)type;	// 0x30181a9d
@end

