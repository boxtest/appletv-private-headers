/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MPAction.h"

@class NSString, NSDictionary, NSMutableDictionary;
@protocol MPActionableSupport;

@interface MPTransitionAction : MPAction {
	NSString *_transitionID;	// 16 = 0x10
	double _transitionDuration;	// 20 = 0x14
	NSMutableDictionary *_transitionAttributes;	// 28 = 0x1c
	NSObject<MPActionableSupport> *_transitionDestination;	// 32 = 0x20
}
@property(copy, nonatomic) NSDictionary *transitionAttributes;	// G=0x3618dfb9; S=0x3618db3d; @synthesize=_transitionAttributes
@property(retain, nonatomic) NSObject<MPActionableSupport> *transitionDestination;	// G=0x3618dff9; S=0x3618dc55; @synthesize=_transitionDestination
@property(assign, nonatomic) double transitionDuration;	// G=0x3618dfe1; S=0x3618dc15; @synthesize=_transitionDuration
@property(copy, nonatomic) NSString *transitionID;	// G=0x3618dfcd; S=0x3618dba9; @synthesize=_transitionID
+ (id)transitionAction;	// 0x3618d699
- (id)init;	// 0x3618d6dd
- (id)initWithCoder:(id)coder;	// 0x3618d749
- (void)configureTarget;	// 0x3618de85
- (id)copyWithZone:(NSZone *)zone;	// 0x3618da61
- (void)dealloc;	// 0x3618d899
- (void)encodeWithCoder:(id)coder;	// 0x3618d911
- (void)setAction:(id)action;	// 0x3618dcd5
// declared property setter: - (void)setTransitionAttributes:(id)attributes;	// 0x3618db3d
// declared property setter: - (void)setTransitionDestination:(id)destination;	// 0x3618dc55
// declared property setter: - (void)setTransitionDuration:(double)duration;	// 0x3618dc15
// declared property setter: - (void)setTransitionID:(id)anId;	// 0x3618dba9
- (id)transitionAttributeForKey:(id)key;	// 0x3618db1d
// declared property getter: - (id)transitionAttributes;	// 0x3618dfb9
// declared property getter: - (id)transitionDestination;	// 0x3618dff9
// declared property getter: - (double)transitionDuration;	// 0x3618dfe1
// declared property getter: - (id)transitionID;	// 0x3618dfcd
@end

