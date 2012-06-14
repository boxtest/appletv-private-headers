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

@class MRAsset, NSDictionary, NSInvocationOperation, NSLock, NSString, MRImage;

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
	BOOL mIsMonochromatic;	// 101 = 0x65
	BOOL mUseMipmapping;	// 102 = 0x66
	BOOL mUsePowerOfTwo;	// 103 = 0x67
	BOOL mIsCleanedUp;	// 104 = 0x68
}
@property(copy, nonatomic) NSString *assetPath;	// G=0x34360e79; S=0x3435fa11; @synthesize=mAssetPath
@property(assign, nonatomic) CGSize defaultSize;	// G=0x34360ce1; S=0x3435f671; @synthesize=mDefaultSize
@property(retain, nonatomic) NSDictionary *effectAttributes;	// G=0x34360d0d; S=0x3435f785; @synthesize=mEffectAttributes
@property(readonly, assign) float imageAspectRatio;	// G=0x3435f6e9; 
@property(copy, nonatomic) NSString *imageSizeScript;	// G=0x34360cfd; S=0x3435f705; @synthesize=mImageSizeScript
@property(readonly, assign) BOOL isAlphaFriendly;	// G=0x343603e1; 
@property(readonly, assign) BOOL isInfinite;	// G=0x343603e5; 
@property(readonly, assign) BOOL isLoaded;	// G=0x34360d1d; @synthesize=mIsLoaded
@property(assign) BOOL isMonochromatic;	// G=0x34360d2d; S=0x34360d3d; @synthesize=mIsMonochromatic
@property(readonly, assign) BOOL isNative3D;	// G=0x343603d9; 
@property(readonly, assign) BOOL isOpaque;	// G=0x343603dd; 
@property(assign) CGSize originalImageSize;	// G=0x34360e89; S=0x34360ea5; @synthesize=mOriginalImageSize
@property(readonly, assign) CGSize requestedSize;	// G=0x34360e5d; @synthesize=mRequestedSize
@property(assign) double showDuration;	// G=0x34360df5; S=0x34360e29; @synthesize=mShowDuration
@property(assign) double showTime;	// G=0x34360d8d; S=0x34360dc1; @synthesize=mShowTime
@property(assign) BOOL useMipmapping;	// G=0x34360d4d; S=0x34360d5d; @synthesize=mUseMipmapping
@property(assign) BOOL usePowerOfTwo;	// G=0x34360d6d; S=0x34360d7d; @synthesize=mUsePowerOfTwo
- (id)init;	// 0x3435f3e5
// declared property getter: - (id)assetPath;	// 0x34360e79
- (void)cancelLoading;	// 0x343602b5
- (void)cleanup;	// 0x3435f501
- (void)dealloc;	// 0x3435f481
// declared property getter: - (CGSize)defaultSize;	// 0x34360ce1
// declared property getter: - (id)effectAttributes;	// 0x34360d0d
- (void)finalize;	// 0x3435f4c1
// declared property getter: - (float)imageAspectRatio;	// 0x3435f6e9
- (CGSize)imageSizeForAspectRatio:(float)aspectRatio;	// 0x3435f7ed
// declared property getter: - (id)imageSizeScript;	// 0x34360cfd
// declared property getter: - (BOOL)isAlphaFriendly;	// 0x343603e1
// declared property getter: - (BOOL)isInfinite;	// 0x343603e5
// declared property getter: - (BOOL)isLoaded;	// 0x34360d1d
- (BOOL)isLoadedForTime:(double)time;	// 0x3435fad1
// declared property getter: - (BOOL)isMonochromatic;	// 0x34360d2d
// declared property getter: - (BOOL)isNative3D;	// 0x343603d9
// declared property getter: - (BOOL)isOpaque;	// 0x343603dd
- (void)loadForTime:(double)time inContext:(id)context withArguments:(id)arguments now:(BOOL)now;	// 0x3435fae1
- (void)loadWithArguments:(id)arguments;	// 0x3435fe0d
// declared property getter: - (CGSize)originalImageSize;	// 0x34360e89
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x34360ba5
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x343603e9
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x343605e5
// declared property getter: - (CGSize)requestedSize;	// 0x34360e5d
- (id)retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x343605f9
// declared property setter: - (void)setAssetPath:(id)path;	// 0x3435fa11
// declared property setter: - (void)setDefaultSize:(CGSize)size;	// 0x3435f671
// declared property setter: - (void)setEffectAttributes:(id)attributes;	// 0x3435f785
// declared property setter: - (void)setImageSizeScript:(id)script;	// 0x3435f705
// declared property setter: - (void)setIsMonochromatic:(BOOL)monochromatic;	// 0x34360d3d
// declared property setter: - (void)setOriginalImageSize:(CGSize)size;	// 0x34360ea5
// declared property setter: - (void)setShowDuration:(double)duration;	// 0x34360e29
// declared property setter: - (void)setShowTime:(double)time;	// 0x34360dc1
// declared property setter: - (void)setUseMipmapping:(BOOL)mipmapping;	// 0x34360d5d
// declared property setter: - (void)setUsePowerOfTwo:(BOOL)two;	// 0x34360d7d
// declared property getter: - (double)showDuration;	// 0x34360df5
// declared property getter: - (double)showTime;	// 0x34360d8d
- (void)unload;	// 0x3436012d
// declared property getter: - (BOOL)useMipmapping;	// 0x34360d4d
// declared property getter: - (BOOL)usePowerOfTwo;	// 0x34360d6d
@end
