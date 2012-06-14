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
@property(readonly, assign) BOOL hasUnmetFailureRequirementsOrDependents;	// G=0x30113d11; 
+ (void)buildFailureMapForGestureRecognizer:(id)gestureRecognizer;	// 0x3010e5e1
+ (void)buildFailureMapForGestureRecognizers:(id)gestureRecognizers;	// 0x3010e61d
- (id)initWithRelatedGestures:(id)relatedGestures;	// 0x3010e971
- (void)_gestureRecognizerFinished:(id)finished withEvent:(id)event;	// 0x301138e5
- (void)_queueRecognizersForResetIfFinished;	// 0x30113cc1
- (void)dealloc;	// 0x30111405
- (id)description;	// 0x3040502d
- (void)gestureRecognizerBecameDirty:(id)dirty;	// 0x301ccc19
- (void)gestureRecognizerDeallocated:(id)deallocated;	// 0x301d8fd1
- (void)gestureRecognizerFinished:(id)finished withEvent:(id)event;	// 0x301138b5
// declared property getter: - (BOOL)hasUnmetFailureRequirementsOrDependents;	// 0x30113d11
- (BOOL)isGestureRecognizerWaitingForGestureRecognizersToFail:(id)fail;	// 0x30116c11
- (void)rebuildFailureMap;	// 0x301fd5a5
- (void)reloadFailureMap;	// 0x3010eac5
@end
