/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSString, NSRecursiveLock, NSArray, MCPlug, NSDictionary;

@interface MCMontage : NSObject {
	NSDictionary *mImprintWhileLoading;	// 4 = 0x4
	NSMutableDictionary *mVideoAssetsForFilePaths;	// 8 = 0x8
	NSMutableDictionary *mVideoAssetsForObjectIDs;	// 12 = 0xc
	NSMutableDictionary *mAudioAssetsForFilePaths;	// 16 = 0x10
	NSMutableDictionary *mAudioAssetsForObjectIDs;	// 20 = 0x14
	NSMutableDictionary *mContainersForObjectIDs;	// 24 = 0x18
	NSRecursiveLock *mLock;	// 28 = 0x1c
	MCPlug *mRootPlug;	// 32 = 0x20
	double mAudioFadeOutDuration;	// 36 = 0x24
	NSString *mBasePath;	// 44 = 0x2c
	unsigned long long mUUIDSeed;	// 48 = 0x30
	NSArray *mLayouts;	// 56 = 0x38
}
@property(assign, nonatomic) double audioFadeOutDuration;	// G=0x33a78575; S=0x33a7858d; @synthesize=mAudioFadeOutDuration
@property(copy) NSString *basePath;	// G=0x33a785a1; S=0x33a785b5; @synthesize=mBasePath
@property(retain) NSArray *layouts;	// G=0x33a785c5; S=0x33a785d9; @synthesize=mLayouts
@property(readonly, assign, nonatomic) MCPlug *rootPlug;	// G=0x33a78565; @synthesize=mRootPlug
@property(readonly, assign, nonatomic) unsigned long long uuidSeed;	// G=0x33a773b9; @synthesize=mUUIDSeed
- (id)init;	// 0x33a76305
- (id)initFromScratch;	// 0x33a76431
- (id)initWithData:(id)data error:(id *)error;	// 0x33a764b1
- (id)assetForObjectID:(id)objectID;	// 0x33a77c15
- (id)assets;	// 0x33a77c8d
- (id)audioAssetForFileAtPath:(id)path;	// 0x33a77a61
- (id)audioAssetForObjectID:(id)objectID;	// 0x33a77c6d
- (id)audioAssets;	// 0x33a78025
// declared property getter: - (double)audioFadeOutDuration;	// 0x33a78575
// declared property getter: - (id)basePath;	// 0x33a785a1
- (id)containerForObjectID:(id)objectID;	// 0x33a78171
- (id)createEffectContainer;	// 0x33a77645
- (id)createNavigatorContainer;	// 0x33a77779
- (id)createParallelizerContainer;	// 0x33a77511
- (id)createSerializerContainer;	// 0x33a773dd
- (id)data;	// 0x33a77321
- (void)dealloc;	// 0x33a769e1
- (void)demolish;	// 0x33a76a55
- (void)forgetAboutContainer:(id)container;	// 0x33a78441
- (id)imprint;	// 0x33a76e09
// declared property getter: - (id)layouts;	// 0x33a785c5
- (void)lock;	// 0x33a77379
- (void)registerContainer:(id)container;	// 0x33a78319
// declared property getter: - (id)rootPlug;	// 0x33a78565
// declared property setter: - (void)setAudioFadeOutDuration:(double)duration;	// 0x33a7858d
// declared property setter: - (void)setBasePath:(id)path;	// 0x33a785b5
// declared property setter: - (void)setLayouts:(id)layouts;	// 0x33a785d9
- (void)unlock;	// 0x33a77399
// declared property getter: - (unsigned long long)uuidSeed;	// 0x33a773b9
- (id)videoAssetForFileAtPath:(id)path;	// 0x33a778ad
- (id)videoAssetForObjectID:(id)objectID;	// 0x33a77c4d
- (id)videoAssets;	// 0x33a77ed9
@end
