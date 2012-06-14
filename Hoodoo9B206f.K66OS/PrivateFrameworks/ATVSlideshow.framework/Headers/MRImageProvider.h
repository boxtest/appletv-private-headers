/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MRLoadable.h"
#import <NSObject.h> // Unknown library
#import "MRRenderable.h"
#import "ATVSlideshow-Structs.h"

@class NSDictionary, MRImage, NSLock, MRAsset, NSString, NSInvocationOperation;

@interface MRImageProvider : NSObject <MRLoadable, MRRenderable> {
	NSString *mAssetPath;	// 4 = 0x4
	MRAsset *mAsset;	// 8 = 0x8
	CGSize mDefaultSize;	// 12 = 0xc
	NSString *mImageSizeScript;	// 20 = 0x14
	NSDictionary *mEffectAttributes;	// 24 = 0x18
	NSInvocationOperation *mPreloadOperation;	// 28 = 0x1c
	NSLock *mPreloadOperationLock;	// 32 = 0x20
	MRImage *mOriginalImage;	// 36 = 0x24
	CGSize mOriginalImageSize;	// 40 = 0x28
	BOOL mIsLoaded;	// 48 = 0x30
	CGSize mRequestedSize;	// 52 = 0x34
	double mShowTime;	// 60 = 0x3c
	double mShowDuration;	// 68 = 0x44
	CGSize mLastImageSize;	// 76 = 0x4c
	double mLastTime;	// 84 = 0x54
	CGSize mLastDaSize;	// 92 = 0x5c
	BOOL mNeedsToUpdate;	// 100 = 0x64
	BOOL mIsUpdatingLive;	// 101 = 0x65
	BOOL mNeedsToUnloadOnEndLiveUpdate;	// 102 = 0x66
	BOOL mIsMonochromatic;	// 103 = 0x67
	BOOL mUseMipmapping;	// 104 = 0x68
	BOOL mUsePowerOfTwo;	// 105 = 0x69
	BOOL mIsCleanedUp;	// 106 = 0x6a
	BOOL mJustHoldIt;	// 107 = 0x6b
}
@property(copy, nonatomic) NSString *assetPath;	// G=0x30a7fb05; S=0x30a7e2a5; @synthesize=mAssetPath
@property(assign, nonatomic) CGSize defaultSize;	// G=0x30a7f9c5; S=0x30a7ded5; @synthesize=mDefaultSize
@property(retain, nonatomic) NSDictionary *effectAttributes;	// G=0x30a7f9f1; S=0x30a7e019; @synthesize=mEffectAttributes
@property(readonly, assign, nonatomic) float imageAspectRatio;	// G=0x30a7df7d; 
@property(copy, nonatomic) NSString *imageSizeScript;	// G=0x30a7f9e1; S=0x30a7df99; @synthesize=mImageSizeScript
@property(readonly, assign, nonatomic) BOOL isAlphaFriendly;	// G=0x30a7ef8d; 
@property(readonly, assign, nonatomic) BOOL isInfinite;	// G=0x30a7ef91; 
@property(readonly, assign, nonatomic) BOOL isLoaded;	// G=0x30a7fa01; @synthesize=mIsLoaded
@property(assign, nonatomic) BOOL isMonochromatic;	// G=0x30a7fa11; S=0x30a7fa21; @synthesize=mIsMonochromatic
@property(readonly, assign, nonatomic) BOOL isNative3D;	// G=0x30a7ef85; 
@property(readonly, assign, nonatomic) BOOL isOpaque;	// G=0x30a7ef89; 
@property(assign, nonatomic) BOOL justHoldIt;	// G=0x30a7fae5; S=0x30a7faf5; @synthesize=mJustHoldIt
@property(assign, nonatomic) CGSize originalImageSize;	// G=0x30a7fb15; S=0x30a7fb31; @synthesize=mOriginalImageSize
@property(readonly, assign, nonatomic) CGSize requestedSize;	// G=0x30a7fac9; @synthesize=mRequestedSize
@property(assign, nonatomic) double showDuration;	// G=0x30a7fa9d; S=0x30a7fab5; @synthesize=mShowDuration
@property(assign, nonatomic) double showTime;	// G=0x30a7fa71; S=0x30a7fa89; @synthesize=mShowTime
@property(assign, nonatomic) BOOL useMipmapping;	// G=0x30a7fa31; S=0x30a7fa41; @synthesize=mUseMipmapping
@property(assign, nonatomic) BOOL usePowerOfTwo;	// G=0x30a7fa51; S=0x30a7fa61; @synthesize=mUsePowerOfTwo
- (id)init;	// 0x30a7dc49
- (void)_loadTextureWithArguments:(id)arguments;	// 0x30a7ea39
// declared property getter: - (id)assetPath;	// 0x30a7fb05
- (BOOL)beginLiveUpdate;	// 0x30a7e365
- (void)cancelLoading;	// 0x30a7ee61
- (void)cleanup;	// 0x30a7dd65
- (void)dealloc;	// 0x30a7dce5
// declared property getter: - (CGSize)defaultSize;	// 0x30a7f9c5
// declared property getter: - (id)effectAttributes;	// 0x30a7f9f1
- (BOOL)endLiveUpdate;	// 0x30a7e379
- (void)finalize;	// 0x30a7dd25
// declared property getter: - (float)imageAspectRatio;	// 0x30a7df7d
- (CGSize)imageSizeForAspectRatio:(float)aspectRatio;	// 0x30a7e081
// declared property getter: - (id)imageSizeScript;	// 0x30a7f9e1
// declared property getter: - (BOOL)isAlphaFriendly;	// 0x30a7ef8d
// declared property getter: - (BOOL)isInfinite;	// 0x30a7ef91
// declared property getter: - (BOOL)isLoaded;	// 0x30a7fa01
- (BOOL)isLoadedForTime:(double)time;	// 0x30a7e3b5
// declared property getter: - (BOOL)isMonochromatic;	// 0x30a7fa11
// declared property getter: - (BOOL)isNative3D;	// 0x30a7ef85
// declared property getter: - (BOOL)isOpaque;	// 0x30a7ef89
// declared property getter: - (BOOL)justHoldIt;	// 0x30a7fae5
- (void)loadForTime:(double)time inContext:(id)context withArguments:(id)arguments now:(BOOL)now;	// 0x30a7e3c5
- (void)loadTextureWithArguments:(id)arguments;	// 0x30a7eaed
- (void)loadWithArguments:(id)arguments;	// 0x30a7e719
// declared property getter: - (CGSize)originalImageSize;	// 0x30a7fb15
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x30a7f889
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x30a7ef95
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x30a7f205
// declared property getter: - (CGSize)requestedSize;	// 0x30a7fac9
- (id)retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x30a7f219
// declared property setter: - (void)setAssetPath:(id)path;	// 0x30a7e2a5
// declared property setter: - (void)setDefaultSize:(CGSize)size;	// 0x30a7ded5
// declared property setter: - (void)setEffectAttributes:(id)attributes;	// 0x30a7e019
// declared property setter: - (void)setImageSizeScript:(id)script;	// 0x30a7df99
// declared property setter: - (void)setIsMonochromatic:(BOOL)monochromatic;	// 0x30a7fa21
// declared property setter: - (void)setJustHoldIt:(BOOL)it;	// 0x30a7faf5
// declared property setter: - (void)setOriginalImageSize:(CGSize)size;	// 0x30a7fb31
// declared property setter: - (void)setShowDuration:(double)duration;	// 0x30a7fab5
// declared property setter: - (void)setShowTime:(double)time;	// 0x30a7fa89
// declared property setter: - (void)setUseMipmapping:(BOOL)mipmapping;	// 0x30a7fa41
// declared property setter: - (void)setUsePowerOfTwo:(BOOL)two;	// 0x30a7fa61
// declared property getter: - (double)showDuration;	// 0x30a7fa9d
// declared property getter: - (double)showTime;	// 0x30a7fa71
- (void)unload;	// 0x30a7ecd9
// declared property getter: - (BOOL)useMipmapping;	// 0x30a7fa31
// declared property getter: - (BOOL)usePowerOfTwo;	// 0x30a7fa51
@end
