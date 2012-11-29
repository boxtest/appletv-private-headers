/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ISStoreURLOperationDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, BRBackgroundTask, ISURLBag, ATVStoreEnvironment, NSArray;

__attribute__((visibility("hidden")))
@interface ATVStoreFront : XXUnknownSuperclass <ISStoreURLOperationDelegate> {
	BRBackgroundTask *_bagReloadTask;	// 4 = 0x4
	NSArray *_storeFronts;	// 8 = 0x8
	NSDictionary *_currentStoreFront;	// 12 = 0xc
	NSArray *_rootCollection;	// 16 = 0x10
	NSArray *_vendorBags;	// 20 = 0x14
	ISURLBag *_bag;	// 24 = 0x18
	BOOL _isStoreFrontChanging;	// 28 = 0x1c
	ATVStoreEnvironment *_environment;	// 32 = 0x20
	BOOL _bagCanBeRefreshedByStoreServices;	// 36 = 0x24
	unsigned _loadBagRetryAttempt;	// 40 = 0x28
	unsigned _loadStoreFrontRetryAttempt;	// 44 = 0x2c
	unsigned _loadAvailableStoreFrontRetryAttempt;	// 48 = 0x30
}
@property(readonly, assign, nonatomic) NSDictionary *atvHeaders;	// G=0x3bddf1; 
@property(readonly, assign, nonatomic) ISURLBag *bag;	// G=0x3be479; @synthesize=_bag
@property(assign) BOOL bagCanBeRefreshedByStoreServices;	// G=0x3bfccd; S=0x3bfce5; @synthesize=_bagCanBeRefreshedByStoreServices
@property(readonly, assign, nonatomic) NSDictionary *commonHeaders;	// G=0x3bdb05; 
@property(retain) NSDictionary *currentStoreFront;	// G=0x3bfbf9; S=0x3bfc0d; @synthesize=_currentStoreFront
@property(retain, nonatomic) ATVStoreEnvironment *environment;	// G=0x3bfc95; S=0x3bfca5; @synthesize=_environment
@property(assign) BOOL isChangingStoreFront;	// G=0x3bfc65; S=0x3bfc7d; @synthesize=_isStoreFrontChanging
@property(assign) unsigned loadAvailableStoreFrontRetryAttempt;	// G=0x3bfd55; S=0x3bfd69; @synthesize=_loadAvailableStoreFrontRetryAttempt
@property(assign) unsigned loadBagRetryAttempt;	// G=0x3bfcfd; S=0x3bfd11; @synthesize=_loadBagRetryAttempt
@property(assign) unsigned loadStoreFrontRetryAttempt;	// G=0x3bfd29; S=0x3bfd3d; @synthesize=_loadStoreFrontRetryAttempt
@property(retain) NSArray *rootCollection;	// G=0x3bfc1d; S=0x3bfc31; @synthesize=_rootCollection
@property(retain) NSArray *storeFronts;	// G=0x3bfbd5; S=0x3bfbe9; @synthesize=_storeFronts
@property(readonly, assign, nonatomic) NSDictionary *storeHeadersDictionary;	// G=0x3bdbd9; 
@property(readonly, assign, nonatomic) NSDictionary *storeHeadersWithDsid;	// G=0x3bdc9d; 
@property(retain) NSArray *vendorBags;	// G=0x3bfc41; S=0x3bfc55; @synthesize=_vendorBags
+ (id)storeFront;	// 0x3bd7ad
- (id)init;	// 0x3bd865
- (void).cxx_destruct;	// 0x3bfd81
- (double)_BagReloadInterval;	// 0x3bff51
- (id)_acceptLanguage;	// 0x3bf8a1
- (void)_accountStoreChanged:(id)changed;	// 0x3be589
- (id)_bagContext;	// 0x3be93d
- (id)_init;	// 0x3bd8b5
- (void)_languageChanged:(id)changed;	// 0x3be5d5
- (void)_loadAvailableStoreFronts;	// 0x3bea49
- (void)_loadBag;	// 0x3be615
- (void)_loadStoreFront;	// 0x3bee59
- (void)_networkStateChanged:(id)changed;	// 0x3be4fd
- (void)_processStoreFront:(id)front;	// 0x3bf1ad
- (void)_retry:(unsigned)retry withSelector:(SEL)selector;	// 0x3bf7b9
- (void)_setCurrentStoreFront;	// 0x3bf5e1
- (void)_sniffEnvironment:(id)environment;	// 0x3bfb29
- (void)_storeFrontChanged:(id)changed;	// 0x3be53d
- (BOOL)_switchToStoreFront:(id)storeFront force:(BOOL)force;	// 0x3be029
- (void)_updateDateAndTimeFromResponse:(id)response;	// 0x3bf951
- (void)_updateReloadTaskWithInterval:(double)interval;	// 0x3bfe19
- (id)_userIdentifier;	// 0x3be9bd
// declared property getter: - (id)atvHeaders;	// 0x3bddf1
// declared property getter: - (id)bag;	// 0x3be479
// declared property getter: - (BOOL)bagCanBeRefreshedByStoreServices;	// 0x3bfccd
- (id)bagURLForKey:(id)key;	// 0x3bdeed
- (id)bagValueForKey:(id)key;	// 0x3bdf4d
// declared property getter: - (id)commonHeaders;	// 0x3bdb05
// declared property getter: - (id)currentStoreFront;	// 0x3bfbf9
- (void)dealloc;	// 0x3bda99
// declared property getter: - (id)environment;	// 0x3bfc95
// declared property getter: - (BOOL)isChangingStoreFront;	// 0x3bfc65
// declared property getter: - (unsigned)loadAvailableStoreFrontRetryAttempt;	// 0x3bfd55
// declared property getter: - (unsigned)loadBagRetryAttempt;	// 0x3bfcfd
// declared property getter: - (unsigned)loadStoreFrontRetryAttempt;	// 0x3bfd29
- (void)refreshURLBag;	// 0x3bdfad
// declared property getter: - (id)rootCollection;	// 0x3bfc1d
- (id)rootCollectionForMediaType:(id)mediaType;	// 0x3be279
// declared property setter: - (void)setBagCanBeRefreshedByStoreServices:(BOOL)services;	// 0x3bfce5
// declared property setter: - (void)setCurrentStoreFront:(id)front;	// 0x3bfc0d
// declared property setter: - (void)setEnvironment:(id)environment;	// 0x3bfca5
// declared property setter: - (void)setIsChangingStoreFront:(BOOL)front;	// 0x3bfc7d
// declared property setter: - (void)setLoadAvailableStoreFrontRetryAttempt:(unsigned)attempt;	// 0x3bfd69
// declared property setter: - (void)setLoadBagRetryAttempt:(unsigned)attempt;	// 0x3bfd11
// declared property setter: - (void)setLoadStoreFrontRetryAttempt:(unsigned)attempt;	// 0x3bfd3d
// declared property setter: - (void)setRootCollection:(id)collection;	// 0x3bfc31
// declared property setter: - (void)setStoreFronts:(id)fronts;	// 0x3bfbe9
// declared property setter: - (void)setVendorBags:(id)bags;	// 0x3bfc55
// declared property getter: - (id)storeFronts;	// 0x3bfbd5
// declared property getter: - (id)storeHeadersDictionary;	// 0x3bdbd9
// declared property getter: - (id)storeHeadersWithDsid;	// 0x3bdc9d
- (BOOL)switchToStoreFront:(id)storeFront;	// 0x3be261
// declared property getter: - (id)vendorBags;	// 0x3bfc41
@end
