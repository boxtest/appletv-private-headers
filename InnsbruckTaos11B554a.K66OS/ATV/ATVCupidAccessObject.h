/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ACAccount, ATVCupidAOSynchronizer;

__attribute__((visibility("hidden")))
@interface ATVCupidAccessObject : XXUnknownSuperclass {
	ACAccount *_appleAccount;	// 4 = 0x4
	ATVCupidAOSynchronizer *_synchronizer;	// 8 = 0x8
}
@property(retain, nonatomic) ACAccount *appleAccount;	// G=0x4d6299; S=0x4d62a9; @synthesize=_appleAccount
@property(assign, nonatomic) __weak ATVCupidAOSynchronizer *synchronizer;	// G=0x4d62d1; S=0x4d62f1; @synthesize=_synchronizer
+ (void)_cancelFetchForAccessObject:(id)accessObject assetID:(id)anId;	// 0x4d57c1
+ (void)_fetchImageForAccessObject:(id)accessObject assetID:(id)anId priority:(int)priority completionHandler:(id)handler;	// 0x4d5125
+ (id)_filterAppositePhotoAssetFromAssets:(id)assets;	// 0x4d4b19
+ (id)_filterAppositeVideoAssetFromAssets:(id)assets;	// 0x4d4f35
+ (id)_imageFetchRecordForAccessObject:(id)accessObject imageToken:(id)token;	// 0x4d60d1
+ (void)_postProcessFetchForAccessObject:(id)accessObject imageToken:(id)token withHandler:(id)handler;	// 0x4d5605
+ (void)_processNextFromFetchQueue;	// 0x4d5add
+ (id)accessObjectWithAppleAccount:(id)appleAccount;	// 0x4d47ad
+ (void)initialize;	// 0x4d4719
- (void).cxx_destruct;	// 0x4d6305
- (void)_queueOperation:(id)operation;	// 0x4d5a09
// declared property getter: - (id)appleAccount;	// 0x4d6299
- (void)fetchImageForAssetID:(id)assetID completionHandler:(id)handler;	// 0x4d4a15
- (void)runSetup;	// 0x4d4805
// declared property setter: - (void)setAppleAccount:(id)account;	// 0x4d62a9
// declared property setter: - (void)setSynchronizer:(id)synchronizer;	// 0x4d62f1
// declared property getter: - (id)synchronizer;	// 0x4d62d1
- (void)tearDown;	// 0x4d4815
@end

