/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRTitleProvider.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSURL, NSString, ATVDataType, NSMutableArray, NSDictionary, BRMediaType;

__attribute__((visibility("hidden")))
@interface ATVMusicStorePresentsProvider : XXUnknownSuperclass <BRTitleProvider> {
	NSString *_requestID;	// 4 = 0x4
	BRMediaType *_mediaType;	// 8 = 0x8
	NSURL *_url;	// 12 = 0xc
	NSURL *_fallbackURL;	// 16 = 0x10
	NSMutableArray *_items;	// 20 = 0x14
	NSDictionary *_catalogCollection;	// 24 = 0x18
	BOOL _storeLoadInProgress;	// 28 = 0x1c
	double _lastStoreLoadTime;	// 32 = 0x20
	BOOL _networkIsOK;	// 40 = 0x28
	BOOL _storeRestricted;	// 41 = 0x29
	NSString *_title;	// 44 = 0x2c
	unsigned _collectionNumber;	// 48 = 0x30
	unsigned _fallbackCollectionNumber;	// 52 = 0x34
	BOOL _usingFallback;	// 56 = 0x38
	NSString *_URLKey;	// 60 = 0x3c
	BOOL _fallBackEnabled;	// 64 = 0x40
	ATVDataType *_redownloadMediaType;	// 68 = 0x44
	BOOL _requiresStoreAccount;	// 72 = 0x48
}
@property(assign) ATVDataType *redownloadMediaType;	// G=0x1f9839; S=0x1f984d; @synthesize=_redownloadMediaType
@property(assign, nonatomic) BOOL requiresStoreAccount;	// G=0x1f9865; S=0x1f9531; @synthesize=_requiresStoreAccount
@property(readonly, retain) NSString *title;	// G=0x1f93c9; converted property
+ (id)providerWithMediaType:(id)mediaType URLKey:(id)key forID:(id)anId fallBack:(BOOL)back;	// 0x1f916d
+ (id)storeMainMenuPresentsURLKey;	// 0x1f90f9
- (id)initWithMediaType:(id)mediaType URLKey:(id)key forID:(id)anId fallBack:(BOOL)back;	// 0x1f91b9
- (id)initWithMediaType:(id)mediaType URLKey:(id)key forID:(id)anId fallBack:(BOOL)back requiresStoreAccount:(BOOL)account;	// 0x1f91e5
- (void)_accountAuthenticationSucceeded:(id)succeeded;	// 0x1fa729
- (void)_clearStoreData;	// 0x1f98f1
- (void)_loadStoreDataFromURL:(id)url;	// 0x1f9dd9
- (void)_networkChanged:(id)changed;	// 0x1fa459
- (BOOL)_okToFetchNewData;	// 0x1f9ccd
- (void)_parentalControlAccessChanged:(id)changed;	// 0x1fa56d
- (void)_parseCatalogCollection:(id)collection;	// 0x1fa191
- (void)_preferredAccountRemoved:(id)removed;	// 0x1fa6a9
- (void)_redownloadAcquired:(id)acquired;	// 0x1fa63d
- (void)_resetStoreData;	// 0x1f99e5
- (void)_setTitle:(id)title;	// 0x1f9875
- (void)_supplementalResponseReceived:(id)received redirectURL:(id)url;	// 0x1fa0c1
- (id)controlFactory;	// 0x1f9619
- (id)dataAtIndex:(long)index;	// 0x1f9669
- (long)dataCount;	// 0x1f9635
- (void)dealloc;	// 0x1f93d9
- (id)hashForDataAtIndex:(long)index;	// 0x1f97bd
- (BOOL)isLoading;	// 0x1f9521
// declared property getter: - (id)redownloadMediaType;	// 0x1f9839
- (void)reloadStoreData;	// 0x1f94cd
// declared property getter: - (BOOL)requiresStoreAccount;	// 0x1f9865
// declared property setter: - (void)setRedownloadMediaType:(id)type;	// 0x1f984d
// declared property setter: - (void)setRequiresStoreAccount:(BOOL)account;	// 0x1f9531
// converted property getter: - (id)title;	// 0x1f93c9
@end

