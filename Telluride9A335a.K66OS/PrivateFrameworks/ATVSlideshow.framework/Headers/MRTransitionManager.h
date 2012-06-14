/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface MRTransitionManager : NSObject {
	NSMutableDictionary *mTransitionRepository;	// 4 = 0x4
	NSMutableDictionary *mTransitionSets;	// 8 = 0x8
	NSMutableDictionary *mTransitionPools;	// 12 = 0xc
}
+ (void)initialize;	// 0x31b81a69
+ (void)loadTransitionManagerWithPaths:(id)paths;	// 0x31b81ae5
+ (id)sharedManager;	// 0x31b81ad5
- (id)initWithPaths:(id)paths;	// 0x31b81b41
- (id)attributesForTransitionID:(id)transitionID andPresetID:(id)anId;	// 0x31b829d5
- (BOOL)canHandleKenBurnsForTransitionID:(id)transitionID;	// 0x31b828ad
- (void)cleanup;	// 0x31b82189
- (void)dealloc;	// 0x31b82149
- (id)descriptionForTransitionID:(id)transitionID;	// 0x31b8283d
- (BOOL)needsSourceLayerImageForPrecomputingForTransitionID:(id)transitionID;	// 0x31b82935
- (BOOL)needsSourceLayerToBeOpaqueForSimple3DTransitionSubtype:(int)simple3DTransitionSubtype;	// 0x31b829bd
- (BOOL)needsTargetLayerImageForPrecomputingForTransitionID:(id)transitionID;	// 0x31b82979
- (BOOL)needsTargetLayerToBeOpaqueForSimple3DTransitionSubtype:(int)simple3DTransitionSubtype;	// 0x31b829c9
- (BOOL)noContentsMotionForTransitionID:(id)transitionID;	// 0x31b828f1
- (void)recycleTransition:(id)transition;	// 0x31b826ed
- (void)releaseResources;	// 0x31b82205
- (id)resourcePathForTransitionID:(id)transitionID andResource:(id)resource;	// 0x31b8285d
- (id)transitionWithTransitionID:(id)transitionID;	// 0x31b823ad
@end
