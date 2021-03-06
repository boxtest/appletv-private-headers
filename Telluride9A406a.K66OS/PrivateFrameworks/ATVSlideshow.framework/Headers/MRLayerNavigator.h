/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MRLayer.h"

@class MRTransition, NSMutableDictionary, NSDictionary, MCContainerNavigator, NSMutableArray, NSArray;

@interface MRLayerNavigator : MRLayer {
	MCContainerNavigator *mContainer;	// 112 = 0x70
	NSMutableArray *mSublayers;	// 116 = 0x74
	NSMutableDictionary *mSublayersForPlugs;	// 120 = 0x78
	MRLayer *mCurrentSublayer;	// 124 = 0x7c
	MRLayer *mNextSublayer;	// 128 = 0x80
	MRTransition *mCurrentTransition;	// 132 = 0x84
	BOOL mIsTransitioning;	// 136 = 0x88
	MRLayer *mSublayerToPrecompute;	// 140 = 0x8c
	id mPrecomputingTarget;	// 144 = 0x90
	unsigned mPrecomputingType;	// 148 = 0x94
	double mTransitionStartTime;	// 152 = 0x98
	double mTransitionDuration;	// 160 = 0xa0
	BOOL mTransitionIsBackwards;	// 168 = 0xa8
	NSDictionary *mTransitionChanges;	// 172 = 0xac
	NSMutableArray *mHistoryBack;	// 176 = 0xb0
	NSMutableArray *mHistoryForth;	// 180 = 0xb4
	BOOL mBackAndForthIsEnabled;	// 184 = 0xb8
}
@property(assign) BOOL backAndForthIsEnabled;	// G=0x34a085e1; S=0x34a085f1; @synthesize=mBackAndForthIsEnabled
@property(readonly, assign) MRLayer *currentSublayer;	// G=0x34a085d1; @synthesize=mCurrentSublayer
@property(readonly, assign) NSArray *sublayers;	// G=0x34a085c1; @synthesize=mSublayers
- (id)initWithPlug:(id)plug andParameters:(id)parameters inSuperlayer:(id)superlayer;	// 0x34a05715
- (id)_createSublayerForPlug:(id)plug;	// 0x34a08915
- (void)_deleteSublayer:(id)sublayer;	// 0x34a08a4d
- (id)_dumpLayerWithOptions:(unsigned)options;	// 0x34a08451
- (void)_executeLayerCommandQueue;	// 0x34a08601
- (BOOL)_isNative3D;	// 0x34a070f1
- (void)_observePlug;	// 0x34a08cc1
- (void)_observePlugOnPreactivate;	// 0x34a08d79
- (void)_observeSublayer:(id)sublayer;	// 0x34a08bcd
- (void)_precomputeAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x34a08f55
- (void)_preprecomputeAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x34a09c09
- (void)_prerenderSublayersAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x34a09455
- (void)_renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x34a09185
- (id)_retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x34a092bd
- (void)_setNeedsToRequestRebuildAudio:(BOOL)requestRebuildAudio;	// 0x34a08e91
- (void)_unobservePlug;	// 0x34a08d21
- (void)_unobservePlugOnDepreactivate;	// 0x34a08e11
- (void)_unobserveSublayer:(id)sublayer;	// 0x34a08c45
- (id)actionHitAtPoint:(CGPoint)point layer:(id *)layer;	// 0x34a07409
// declared property getter: - (BOOL)backAndForthIsEnabled;	// 0x34a085e1
- (void)cleanup;	// 0x34a058d5
// declared property getter: - (id)currentSublayer;	// 0x34a085d1
- (void)deactivate;	// 0x34a06159
- (void)depreactivate:(BOOL)depreactivate;	// 0x34a0633d
- (double)doTransition:(id)transition;	// 0x34a080b5
- (double)doTransition:(id)transition backwards:(BOOL)backwards;	// 0x34a07555
- (double)doTransitionBackwards:(id)backwards;	// 0x34a080c9
- (void)endTransitionToSublayer;	// 0x34a083b5
- (double)goBack;	// 0x34a08249
- (double)goForth;	// 0x34a080dd
- (BOOL)hasAudio;	// 0x34a06ff9
- (BOOL)hasSomethingToRender;	// 0x34a06065
- (BOOL)isAlphaFriendly;	// 0x34a06641
- (BOOL)isLoadedForTime:(double)time;	// 0x34a06429
- (BOOL)isOpaque;	// 0x34a065c9
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x34a05ba5
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x34a06ccd
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x34a066b9
// declared property setter: - (void)setBackAndForthIsEnabled:(BOOL)enabled;	// 0x34a085f1
- (void)setPixelSize:(CGSize)size;	// 0x34a05f6d
- (id)sublayerForID:(id)anId;	// 0x34a07149
- (id)sublayerForPlugObjectID:(id)plugObjectID recursive:(BOOL)recursive;	// 0x34a07255
- (id)sublayerHitAtPoint:(CGPoint)point onlyIfHitElement:(BOOL)element localPoint:(CGPoint *)point3;	// 0x34a06e41
// declared property getter: - (id)sublayers;	// 0x34a085c1
- (void)synchronizeTime;	// 0x34a060e9
@end

