/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library
#import "MRLoadable.h"
#import "MRRenderable.h"

@class MCPlug, MCPlugHaven, MCPlugParallel, MCPlugSerial, MRAudioPlayer, NSString, NSMutableDictionary, NSMutableArray, MRRenderer, MRLayerClock, NSDictionary;

@interface MRLayer : NSObject <MRLoadable, MRRenderable> {
	MRLayer *mSuperlayer;	// 4 = 0x4
	MCPlug *mPlug;	// 8 = 0x8
	MCPlugSerial *mPlugAsSerial;	// 12 = 0xc
	MCPlugParallel *mPlugAsParallel;	// 16 = 0x10
	MCPlugHaven *mPlugAsHaven;	// 20 = 0x14
	NSString *mUUID;	// 24 = 0x18
	CGSize mPixelSize;	// 28 = 0x1c
	double mTimeIn;	// 36 = 0x24
	BOOL mIsPreactivated;	// 44 = 0x2c
	BOOL mIsActivated;	// 45 = 0x2d
	BOOL mOkToDeferKenBurns;	// 46 = 0x2e
	MRLayerClock *mClock;	// 48 = 0x30
	XXStruct_6H5sIB *mRenderingState;	// 52 = 0x34
	NSMutableDictionary *mAnimationTriggers;	// 56 = 0x38
	NSMutableDictionary *mPersistentState;	// 60 = 0x3c
	BOOL mIsSelected;	// 64 = 0x40
	BOOL mIsDimmed;	// 65 = 0x41
	NSDictionary *mParameters;	// 68 = 0x44
	MRRenderer *mRenderer;	// 72 = 0x48
	BOOL mIsPrecomputing;	// 76 = 0x4c
	BOOL mIsReadonly;	// 77 = 0x4d
	BOOL mDoAudio;	// 78 = 0x4e
	BOOL mNeedsRendering;	// 79 = 0x4f
	BOOL mNeedsToUpdateGeometry;	// 80 = 0x50
	BOOL mNeedsToRequestRebuildAudio;	// 81 = 0x51
	BOOL mNeedsToRequestRebuildVolume;	// 82 = 0x52
	NSMutableArray *mLayerCommandQueue;	// 84 = 0x54
	BOOL mIsScheduledForDestruction;	// 88 = 0x58
	double mTimeStamp;	// 92 = 0x5c
	BOOL mSupportsAccumulation;	// 100 = 0x64
	MRAudioPlayer *mAudioPlayer;	// 104 = 0x68
	id mParentHelper;	// 108 = 0x6c
}
@property(readonly, assign) BOOL _isNative3D;	// G=0x32f4c575; 
@property(readonly, assign) NSDictionary *animationTriggers;	// G=0x32f4c52d; @synthesize=mAnimationTriggers
@property(readonly, assign) MRLayerClock *clock;	// G=0x32f48c71; 
@property(assign) double duration;	// G=0x32f48fa1; S=0x32f49005; 
@property(readonly, assign) BOOL isActivated;	// G=0x32f4c479; @synthesize=mIsActivated
@property(readonly, assign) BOOL isAlphaFriendly;	// G=0x32f49521; 
@property(assign, nonatomic) BOOL isDimmed;	// G=0x32f4c4b9; S=0x32f4c349; @synthesize=mIsDimmed
@property(readonly, assign) BOOL isInfinite;	// G=0x32f4951d; 
@property(readonly, assign) BOOL isNative3D;	// G=0x32f494dd; 
@property(readonly, assign) BOOL isOpaque;	// G=0x32f49519; 
@property(readonly, assign) BOOL isPreactivated;	// G=0x32f4c489; @synthesize=mIsPreactivated
@property(readonly, assign) BOOL isScheduledForDestruction;	// G=0x32f4c50d; @synthesize=mIsScheduledForDestruction
@property(assign) BOOL isSelected;	// G=0x32f4c499; S=0x32f4c4a9; @synthesize=mIsSelected
@property(readonly, assign) NSDictionary *parameters;	// G=0x32f4c401; @synthesize=mParameters
@property(retain) id parentHelper;	// G=0x32f4c53d; S=0x32f4c551; @synthesize=mParentHelper
@property(readonly, assign) NSDictionary *persistentState;	// G=0x32f4c51d; @synthesize=mPersistentState
@property(assign, nonatomic) CGSize pixelSize;	// G=0x32f4c3d5; S=0x32f48c91; @synthesize=mPixelSize
@property(readonly, assign) MCPlug *plug;	// G=0x32f4c395; @synthesize=mPlug
@property(readonly, assign) MCPlugHaven *plugAsHaven;	// G=0x32f4c3c5; @synthesize=mPlugAsHaven
@property(readonly, assign) MCPlugParallel *plugAsParallel;	// G=0x32f4c3b5; @synthesize=mPlugAsParallel
@property(readonly, assign) MCPlugSerial *plugAsSerial;	// G=0x32f4c3a5; @synthesize=mPlugAsSerial
@property(readonly, assign) XXStruct_6H5sIB *renderingState;	// G=0x32f48c81; 
@property(readonly, assign) MRLayer *superlayer;	// G=0x32f4c385; @synthesize=mSuperlayer
@property(readonly, assign) BOOL supportsAccumulation;	// G=0x32f4c4fd; @synthesize=mSupportsAccumulation
@property(readonly, assign) BOOL supportsDynamicExpansion;	// G=0x32f4a8d5; 
@property(assign) double timeIn;	// G=0x32f4c411; S=0x32f4c445; @synthesize=mTimeIn
@property(readonly, assign) double timeStamp;	// G=0x32f4c4c9; @synthesize=mTimeStamp
@property(readonly, assign) NSString *uuid;	// G=0x32f4c3f1; @synthesize=mUUID
- (id)initWithPlug:(id)plug andParameters:(id)parameters inSuperlayer:(id)superlayer;	// 0x32f47eb9
- (id)__retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32f49d99
- (void)_applyState:(id)state;	// 0x32f4aacd
- (id)_dumpLayerWithOptions:(unsigned)options;	// 0x32f4c22d
// declared property getter: - (BOOL)_isNative3D;	// 0x32f4c575
- (void)_observePlug;	// 0x32f4c68d
- (void)_observePlugOnPreactivate;	// 0x32f4c7a1
- (void)_queueLayerCommand:(int)command object:(id)object;	// 0x32f4c581
- (void)_rebuildAudio;	// 0x32f4bded
- (void)_renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32f4c579
- (id)_retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32f4c57d
- (void)_sendAction:(id)action async:(BOOL)async yesterday:(BOOL)yesterday;	// 0x32f4bb95
- (void)_setNeedsToRequestRebuildAudio:(BOOL)requestRebuildAudio;	// 0x32f4c90d
- (void)_setScissorRectOnContext:(id)context saveTo:(int *)to;	// 0x32f495c1
- (BOOL)_setStateValue:(id)value forKey:(id)key;	// 0x32f4bcc9
- (void)_unobservePlug;	// 0x32f4c729
- (void)_unobservePlugOnDepreactivate;	// 0x32f4c869
- (void)_updateStateWithContext:(id)context;	// 0x32f4b99d
- (id)actionHitAtPoint:(CGPoint)point layer:(id *)layer;	// 0x32f4abd9
- (void)activate;	// 0x32f49125
// declared property getter: - (id)animationTriggers;	// 0x32f4c52d
- (void)cancelLoading;	// 0x32f494d9
- (void)cleanup;	// 0x32f482f9
// declared property getter: - (id)clock;	// 0x32f48c71
- (CGPoint)convertGlobalPoint:(CGPoint)point;	// 0x32f4aa21
- (CGPoint)convertLocalPoint:(CGPoint)point;	// 0x32f4a98d
- (void)deactivate;	// 0x32f4922d
- (void)dealloc;	// 0x32f48279
- (void)depreactivate:(BOOL)depreactivate;	// 0x32f49331
- (double)doActionTrigger:(id)trigger;	// 0x32f4afe5
- (double)doAnimationTrigger:(id)trigger;	// 0x32f4abdd
- (double)doGenericAction:(id)action;	// 0x32f4b071
// declared property getter: - (double)duration;	// 0x32f48fa1
- (void)finalize;	// 0x32f482b9
- (BOOL)hasAudio;	// 0x32f4a989
- (BOOL)hasSomethingToRender;	// 0x32f48e81
// declared property getter: - (BOOL)isActivated;	// 0x32f4c479
- (BOOL)isActivatedAtTime:(double)time;	// 0x32f49481
// declared property getter: - (BOOL)isAlphaFriendly;	// 0x32f49521
// declared property getter: - (BOOL)isDimmed;	// 0x32f4c4b9
- (BOOL)isFlatAndSquare;	// 0x32f49525
// declared property getter: - (BOOL)isInfinite;	// 0x32f4951d
- (BOOL)isLoadedForTime:(double)time;	// 0x32f494c1
// declared property getter: - (BOOL)isNative3D;	// 0x32f494dd
// declared property getter: - (BOOL)isOpaque;	// 0x32f49519
// declared property getter: - (BOOL)isPreactivated;	// 0x32f4c489
- (BOOL)isPreactivatedAtTime:(double)time;	// 0x32f4942d
// declared property getter: - (BOOL)isScheduledForDestruction;	// 0x32f4c50d
// declared property getter: - (BOOL)isSelected;	// 0x32f4c499
- (void)loadForTime:(double)time inContext:(id)context withArguments:(id)arguments now:(BOOL)now;	// 0x32f494d1
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x32f48581
// declared property getter: - (id)parameters;	// 0x32f4c401
// declared property getter: - (id)parentHelper;	// 0x32f4c53d
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32f4a76d
// declared property getter: - (id)persistentState;	// 0x32f4c51d
// declared property getter: - (CGSize)pixelSize;	// 0x32f4c3d5
// declared property getter: - (id)plug;	// 0x32f4c395
// declared property getter: - (id)plugAsHaven;	// 0x32f4c3c5
// declared property getter: - (id)plugAsParallel;	// 0x32f4c3b5
// declared property getter: - (id)plugAsSerial;	// 0x32f4c3a5
- (void)preactivate;	// 0x32f49045
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32f498d9
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32f49fd5
// declared property getter: - (XXStruct_6H5sIB *)renderingState;	// 0x32f48c81
- (void)resumeOrPause:(BOOL)pause;	// 0x32f48f0d
- (id)retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32f4a5d5
- (void)scheduleForDestruction;	// 0x32f4a93d
// declared property setter: - (void)setDuration:(double)duration;	// 0x32f49005
// declared property setter: - (void)setIsDimmed:(BOOL)dimmed;	// 0x32f4c349
// declared property setter: - (void)setIsSelected:(BOOL)selected;	// 0x32f4c4a9
- (void)setNeedsUpdateForPluggerOfSublayer:(id)sublayer;	// 0x32f48c6d
// declared property setter: - (void)setParentHelper:(id)helper;	// 0x32f4c551
// declared property setter: - (void)setPixelSize:(CGSize)size;	// 0x32f48c91
// declared property setter: - (void)setTimeIn:(double)anIn;	// 0x32f4c445
- (void)stampTime;	// 0x32f4a8d9
- (id)sublayerForPrecomputingWithPlug:(id)plug;	// 0x32f489ed
- (id)sublayerWithPlug:(id)plug;	// 0x32f487f5
// declared property getter: - (id)superlayer;	// 0x32f4c385
// declared property getter: - (BOOL)supportsAccumulation;	// 0x32f4c4fd
// declared property getter: - (BOOL)supportsDynamicExpansion;	// 0x32f4a8d5
- (void)synchronizeTime;	// 0x32f48f75
// declared property getter: - (double)timeIn;	// 0x32f4c411
// declared property getter: - (double)timeStamp;	// 0x32f4c4c9
- (void)unload;	// 0x32f494d5
- (void)updateGeometry;	// 0x32f48cf9
// declared property getter: - (id)uuid;	// 0x32f4c3f1
@end

