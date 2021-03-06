/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@protocol BRYTSigningAgent, BRSyncProgressAgent, BRDAAPListenerEnabler, BRMusicStoreImageDecryptionAgent;

__attribute__((visibility("hidden")))
@interface BRSentinel : BRSingleton {
	id<BRMusicStoreImageDecryptionAgent> _musicStoreImageDecryptionAgent;	// 4 = 0x4
	id<BRMusicStoreImageDecryptionAgent> _musicStoreTrickPlayImageDecryptionAgent;	// 8 = 0x8
	id<BRSyncProgressAgent> _syncProgressAgent;	// 12 = 0xc
	id<BRYTSigningAgent> _signingAgent;	// 16 = 0x10
	id<BRDAAPListenerEnabler> _daapListenerEnabler;	// 20 = 0x14
}
@property(retain) id YTSigningAgent;	// G=0x368889; S=0x36884d; converted property
@property(retain) id musicStoreImageDecryptionAgent;	// G=0x3686f9; S=0x3686bd; converted property
@property(retain) id musicStoreTrickPlayImageDecryptionAgent;	// G=0x368745; S=0x368709; converted property
@property(retain) id syncProgressAgent;	// G=0x36883d; S=0x368755; converted property
+ (void)setSingleton:(id)singleton;	// 0x368635
+ (id)singleton;	// 0x368625
// converted property getter: - (id)YTSigningAgent;	// 0x368889
- (id)daapListenerEnabler;	// 0x3688a9
- (void)dealloc;	// 0x368645
// converted property getter: - (id)musicStoreImageDecryptionAgent;	// 0x3686f9
// converted property getter: - (id)musicStoreTrickPlayImageDecryptionAgent;	// 0x368745
- (void)setDAAPListenerEnabler:(id)enabler;	// 0x368899
// converted property setter: - (void)setMusicStoreImageDecryptionAgent:(id)agent;	// 0x3686bd
// converted property setter: - (void)setMusicStoreTrickPlayImageDecryptionAgent:(id)agent;	// 0x368709
// converted property setter: - (void)setSyncProgressAgent:(id)agent;	// 0x368755
// converted property setter: - (void)setYTSigningAgent:(id)agent;	// 0x36884d
// converted property getter: - (id)syncProgressAgent;	// 0x36883d
- (id)urlBagFromStoreBag:(id)storeBag;	// 0x3688b9
@end

