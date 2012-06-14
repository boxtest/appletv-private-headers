/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIGestureRecognizerFailureMap : NSObject {
@private
	NSMutableArray *_gestureRecognizers;	// 4 = 0x4
	char *_failureMap;	// 8 = 0x8
	int _unmetFailureRequirementCount;	// 12 = 0xc
	int _unmetFailureDependentCount;	// 16 = 0x10
}
@property(readonly, assign) BOOL hasUnmetFailureRequirementsOrDependents;	// G=0x35396965; 
+ (void)buildFailureMapForGestureRecognizer:(id)gestureRecognizer;	// 0x353911e5
+ (void)buildFailureMapForGestureRecognizers:(id)gestureRecognizers;	// 0x35391221
- (id)initWithRelatedGestures:(id)relatedGestures;	// 0x353914fd
- (void)_gestureRecognizerFinished:(id)finished withEvent:(id)event;	// 0x35396561
- (void)_queueRecognizersForResetIfFinished;	// 0x35396919
- (void)dealloc;	// 0x35394271
- (id)description;	// 0x356928d9
- (void)gestureRecognizerBecameDirty:(id)dirty;	// 0x3545a3ed
- (void)gestureRecognizerDeallocated:(id)deallocated;	// 0x3546878d
- (void)gestureRecognizerFinished:(id)finished withEvent:(id)event;	// 0x35396531
// declared property getter: - (BOOL)hasUnmetFailureRequirementsOrDependents;	// 0x35396965
- (BOOL)isGestureRecognizerWaitingForGestureRecognizersToFail:(id)fail;	// 0x353995a1
- (void)rebuildFailureMap;	// 0x3548e2b9
- (void)reloadFailureMap;	// 0x35391625
@end
