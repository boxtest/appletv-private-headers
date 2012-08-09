/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class MCPlug, NSString, NSArray, NSDictionary, NSMutableDictionary, NSRecursiveLock;

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
@property(assign, nonatomic) double audioFadeOutDuration;	// G=0x3218b3b5; S=0x3218b3cd; @synthesize=mAudioFadeOutDuration
@property(copy) NSString *basePath;	// G=0x3218b3e1; S=0x3218b3f5; @synthesize=mBasePath
@property(retain) NSArray *layouts;	// G=0x3218b405; S=0x3218b419; @synthesize=mLayouts
@property(readonly, assign, nonatomic) MCPlug *rootPlug;	// G=0x3218b3a5; @synthesize=mRootPlug
@property(readonly, assign, nonatomic) unsigned long long uuidSeed;	// G=0x3218a1f9; @synthesize=mUUIDSeed
- (id)init;	// 0x32189145
- (id)initFromScratch;	// 0x32189271
- (id)initWithData:(id)data error:(id *)error;	// 0x321892f1
- (id)assetForObjectID:(id)objectID;	// 0x3218aa55
- (id)assets;	// 0x3218aacd
- (id)audioAssetForFileAtPath:(id)path;	// 0x3218a8a1
- (id)audioAssetForObjectID:(id)objectID;	// 0x3218aaad
- (id)audioAssets;	// 0x3218ae65
// declared property getter: - (double)audioFadeOutDuration;	// 0x3218b3b5
// declared property getter: - (id)basePath;	// 0x3218b3e1
- (id)containerForObjectID:(id)objectID;	// 0x3218afb1
- (id)createEffectContainer;	// 0x3218a485
- (id)createNavigatorContainer;	// 0x3218a5b9
- (id)createParallelizerContainer;	// 0x3218a351
- (id)createSerializerContainer;	// 0x3218a21d
- (id)data;	// 0x3218a161
- (void)dealloc;	// 0x32189821
- (void)demolish;	// 0x32189895
- (void)forgetAboutContainer:(id)container;	// 0x3218b281
- (id)imprint;	// 0x32189c49
// declared property getter: - (id)layouts;	// 0x3218b405
- (void)lock;	// 0x3218a1b9
- (void)registerContainer:(id)container;	// 0x3218b159
// declared property getter: - (id)rootPlug;	// 0x3218b3a5
// declared property setter: - (void)setAudioFadeOutDuration:(double)duration;	// 0x3218b3cd
// declared property setter: - (void)setBasePath:(id)path;	// 0x3218b3f5
// declared property setter: - (void)setLayouts:(id)layouts;	// 0x3218b419
- (void)unlock;	// 0x3218a1d9
// declared property getter: - (unsigned long long)uuidSeed;	// 0x3218a1f9
- (id)videoAssetForFileAtPath:(id)path;	// 0x3218a6ed
- (id)videoAssetForObjectID:(id)objectID;	// 0x3218aa8d
- (id)videoAssets;	// 0x3218ad19
@end
