/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class MSASAssetCollection, ACAccount;

__attribute__((visibility("hidden")))
@interface ATVCupidSharedPhotoStreamItem : XXUnknownSuperclass {
	MSASAssetCollection *_asset;	// 4 = 0x4
	ACAccount *_appleAccount;	// 8 = 0x8
}
@property(retain, nonatomic) ACAccount *appleAccount;	// G=0x491909; S=0x491919; @synthesize=_appleAccount
@property(retain, nonatomic) MSASAssetCollection *asset;	// G=0x4918d1; S=0x4918e1; @synthesize=_asset
+ (id)_commentDictionaryFromMSASComment:(id)msascomment;	// 0x4914d1
+ (id)_commentGUIDForLastViewedCommentDate:(id)lastViewedCommentDate comments:(id)comments;	// 0x4917d5
+ (id)_userDictionaryFromMSASComment:(id)msascomment;	// 0x491721
+ (id)itemWithDataClient:(id)dataClient asset:(id)asset accessObject:(id)object;	// 0x49048d
- (id)initWithDataClient:(id)dataClient asset:(id)asset appleAccount:(id)account;	// 0x490b19
- (void).cxx_destruct;	// 0x491941
// declared property getter: - (id)appleAccount;	// 0x491909
// declared property getter: - (id)asset;	// 0x4918d1
- (id)concreteValueForProperty:(id)property;	// 0x490cf5
- (void)resolveMediaURLWithAccessObject:(id)accessObject completionHandler:(id)handler;	// 0x490bbd
// declared property setter: - (void)setAppleAccount:(id)account;	// 0x491919
// declared property setter: - (void)setAsset:(id)asset;	// 0x4918e1
@end

