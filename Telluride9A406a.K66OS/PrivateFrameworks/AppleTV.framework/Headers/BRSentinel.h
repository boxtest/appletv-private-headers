/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"

@protocol BRYTSigningAgent, BRDAAPListenerEnabler, BRMusicStoreImageDecryptionAgent, BRSyncProgressAgent;

@interface BRSentinel : BRSingleton {
@private
	id<BRMusicStoreImageDecryptionAgent> _musicStoreImageDecryptionAgent;	// 4 = 0x4
	id<BRMusicStoreImageDecryptionAgent> _musicStoreTrickPlayImageDecryptionAgent;	// 8 = 0x8
	id<BRSyncProgressAgent> _syncProgressAgent;	// 12 = 0xc
	id<BRYTSigningAgent> _signingAgent;	// 16 = 0x10
	id<BRDAAPListenerEnabler> _daapListenerEnabler;	// 20 = 0x14
	unsigned _networkDependentControllerCount;	// 24 = 0x18
}
@property(retain) id YTSigningAgent;	// G=0x3312e4dd; S=0x3312e49d; converted property
@property(retain) id musicStoreImageDecryptionAgent;	// G=0x3312e1f9; S=0x3312e1b9; converted property
@property(retain) id musicStoreTrickPlayImageDecryptionAgent;	// G=0x3312e249; S=0x3312e209; converted property
@property(retain) id syncProgressAgent;	// G=0x3312e48d; S=0x3312e3bd; converted property
+ (void)setSingleton:(id)singleton;	// 0x3312ded1
+ (id)singleton;	// 0x3312dec1
- (id)init;	// 0x3312dee1
// converted property getter: - (id)YTSigningAgent;	// 0x3312e4dd
- (void)_currentMediaServerDisconnected:(id)disconnected;	// 0x3312f345
- (void)_databaseObjectWasAdded:(id)added;	// 0x3312eba5
- (void)_databaseObjectWasDeleted:(id)deleted;	// 0x3312edd1
- (void)_databaseObjectWasModified:(id)modified;	// 0x3312e9e9
- (void)_databaseObjectWillBeDeleted:(id)_databaseObject;	// 0x3312ed61
- (void)_databaseUpdateComplete:(id)complete;	// 0x3312e849
- (void)_databaseUpdateStarted:(id)started;	// 0x3312e7d9
- (void)_databaseUpdatedWhileSyncStateIdle:(id)idle;	// 0x3312ef69
- (void)_networkStatusChanged:(id)changed;	// 0x3312f105
- (void)_newPhotoDatabaseAvailable:(id)available;	// 0x3312f081
- (void)_syncHostAvailabilityChanged:(id)changed;	// 0x3312efcd
- (id)daapListenerEnabler;	// 0x3312e4fd
- (void)dealloc;	// 0x3312e115
// converted property getter: - (id)musicStoreImageDecryptionAgent;	// 0x3312e1f9
// converted property getter: - (id)musicStoreTrickPlayImageDecryptionAgent;	// 0x3312e249
- (void)networkDependentControllerWasPopped;	// 0x3312e2fd
- (void)networkDependentControllerWasPushed;	// 0x3312e259
- (void)setDAAPListenerEnabler:(id)enabler;	// 0x3312e4ed
// converted property setter: - (void)setMusicStoreImageDecryptionAgent:(id)agent;	// 0x3312e1b9
// converted property setter: - (void)setMusicStoreTrickPlayImageDecryptionAgent:(id)agent;	// 0x3312e209
// converted property setter: - (void)setSyncProgressAgent:(id)agent;	// 0x3312e3bd
// converted property setter: - (void)setYTSigningAgent:(id)agent;	// 0x3312e49d
// converted property getter: - (id)syncProgressAgent;	// 0x3312e48d
- (id)urlBagFromStoreBag:(id)storeBag;	// 0x3312e50d
@end
