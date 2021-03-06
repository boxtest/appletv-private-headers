/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"


__attribute__((visibility("hidden")))
@interface _UIAlertManager : NSObject {
}
+ (CGAffineTransform)_alertTranslationForInterfaceOrientation:(int)interfaceOrientation andTranslation:(float)translation;	// 0x32e4735d
+ (void)_applyAlertTransforms;	// 0x32c35389
+ (void)addToStack:(id)stack dontDimBackground:(BOOL)background;	// 0x32c33949
+ (void)alertPopoutCompleted;	// 0x32c3afdd
+ (void)alertWindowAnimationDidStop:(id)alertWindowAnimation finished:(id)finished context:(void *)context;	// 0x32e471b9
+ (void)applyClientWindowTransform:(CGAffineTransform)transform;	// 0x32e47431
+ (void)applyInternalWindowTransform:(CGAffineTransform)transform;	// 0x32c35349
+ (CGAffineTransform)calculatedAlertTransform;	// 0x32c33ce1
+ (BOOL)cancelAlertsAnimated:(BOOL)animated;	// 0x32e471a1
+ (BOOL)cancelTopMostAlertAnimated:(BOOL)animated;	// 0x32e47171
+ (void)createAlertWindowIfNeeded:(BOOL)needed;	// 0x32e474f1
+ (void)createAlertWindowIfNeeded:(BOOL)needed deferDisplay:(BOOL)display;	// 0x32c33b55
+ (void)hideAlertsForTermination;	// 0x32b70e6d
+ (void)hideDimmingViewAnimated:(BOOL)animated;	// 0x32c3a5ed
+ (BOOL)hideTopMostAlertAnimated:(BOOL)animated;	// 0x32c50de9
+ (void)hideTopmostMiniAlert;	// 0x32e47159
+ (void)initialize;	// 0x32b669f1
+ (void)noteOrientationChangingTo:(int)to;	// 0x32e471a5
+ (void)noteOrientationChangingTo:(int)to animated:(BOOL)animated;	// 0x32b8f289
+ (void)removeFromStack:(id)stack;	// 0x32c39ff5
+ (void)reorientAlertWindowTo:(int)to animated:(BOOL)animated keyboard:(id)keyboard;	// 0x32c34e79
+ (void)showDimmingViewAnimated:(BOOL)animated;	// 0x32c38dc5
+ (void)showTopmostMiniAlertWithSynchronizationPort:(unsigned)synchronizationPort;	// 0x32b66a75
+ (void)sizeAlertWindowForCurrentOrientation;	// 0x32c33d49
+ (BOOL)stackContainsAlert:(id)alert;	// 0x32c39fcd
+ (void)tellSpringboardHidingAlert:(id)alert animated:(BOOL)animated forSpringBoardAlertTransition:(BOOL)springBoardAlertTransition;	// 0x32c3a485
+ (void)tellSpringboardShowingAlert:(id)alert animated:(BOOL)animated forSpringBoardAlertTransition:(BOOL)springBoardAlertTransition;	// 0x32c38d31
+ (id)topMostAlert;	// 0x32ca492d
+ (id)visibleAlert;	// 0x32c38db1
- (void)_didHideDimmingView:(id)view finished:(id)finished;	// 0x32e47471
@end

