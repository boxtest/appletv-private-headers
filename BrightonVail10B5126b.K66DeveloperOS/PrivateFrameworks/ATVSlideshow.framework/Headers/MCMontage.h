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
@property(assign, nonatomic) double audioFadeOutDuration;	// G=0x3325d95d; S=0x3325d975; @synthesize=mAudioFadeOutDuration
@property(copy) NSString *basePath;	// G=0x3325d989; S=0x3325d99d; @synthesize=mBasePath
@property(retain) NSArray *layouts;	// G=0x3325d9ad; S=0x3325d9c1; @synthesize=mLayouts
@property(readonly, assign, nonatomic) MCPlug *rootPlug;	// G=0x3325d94d; @synthesize=mRootPlug
@property(readonly, assign, nonatomic) unsigned long long uuidSeed;	// G=0x3325c7a1; @synthesize=mUUIDSeed
- (id)init;	// 0x3325b6ed
- (id)initFromScratch;	// 0x3325b819
- (id)initWithData:(id)data error:(id *)error;	// 0x3325b899
- (id)assetForObjectID:(id)objectID;	// 0x3325cffd
- (id)assets;	// 0x3325d075
- (id)audioAssetForFileAtPath:(id)path;	// 0x3325ce49
- (id)audioAssetForObjectID:(id)objectID;	// 0x3325d055
- (id)audioAssets;	// 0x3325d40d
// declared property getter: - (double)audioFadeOutDuration;	// 0x3325d95d
// declared property getter: - (id)basePath;	// 0x3325d989
- (id)containerForObjectID:(id)objectID;	// 0x3325d559
- (id)createEffectContainer;	// 0x3325ca2d
- (id)createNavigatorContainer;	// 0x3325cb61
- (id)createParallelizerContainer;	// 0x3325c8f9
- (id)createSerializerContainer;	// 0x3325c7c5
- (id)data;	// 0x3325c709
- (void)dealloc;	// 0x3325bdc9
- (void)demolish;	// 0x3325be3d
- (void)forgetAboutContainer:(id)container;	// 0x3325d829
- (id)imprint;	// 0x3325c1f1
// declared property getter: - (id)layouts;	// 0x3325d9ad
- (void)lock;	// 0x3325c761
- (void)registerContainer:(id)container;	// 0x3325d701
// declared property getter: - (id)rootPlug;	// 0x3325d94d
// declared property setter: - (void)setAudioFadeOutDuration:(double)duration;	// 0x3325d975
// declared property setter: - (void)setBasePath:(id)path;	// 0x3325d99d
// declared property setter: - (void)setLayouts:(id)layouts;	// 0x3325d9c1
- (void)unlock;	// 0x3325c781
// declared property getter: - (unsigned long long)uuidSeed;	// 0x3325c7a1
- (id)videoAssetForFileAtPath:(id)path;	// 0x3325cc95
- (id)videoAssetForObjectID:(id)objectID;	// 0x3325d035
- (id)videoAssets;	// 0x3325d2c1
@end

