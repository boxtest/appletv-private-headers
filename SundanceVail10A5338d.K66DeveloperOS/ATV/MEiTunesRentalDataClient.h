/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "ATVDataClient.h"

@class NSCountedSet, NSMutableArray, BRBackgroundTask, NSMutableDictionary, NSArray;

__attribute__((visibility("hidden")))
@interface MEiTunesRentalDataClient : ATVDataClient {
	BRBackgroundTask *_rentalExpirationTask;	// 4 = 0x4
	NSArray *_rentals;	// 8 = 0x8
	double _lastRefreshInitiated;	// 12 = 0xc
	BOOL _acquisitionRefreshesRentals;	// 20 = 0x14
	NSMutableArray *_cacheTriggers;	// 24 = 0x18
	int _lastRankValue;	// 28 = 0x1c
	NSCountedSet *_showInfosToIgnore;	// 32 = 0x20
	NSMutableDictionary *_showInfosToWriteToKVS;	// 36 = 0x24
	BOOL _overrideRentalCountCheck;	// 40 = 0x28
	CFArrayRef _iCloudItems;	// 44 = 0x2c
}
@property(retain) NSArray *rentals;	// G=0x4b01d; S=0x4ae4d; converted property
+ (void)_addPurchase:(id)purchase;	// 0x4a961
+ (void)_updateMediaItem:(id)item withShowInfo:(id)showInfo transactionOptions:(id)options;	// 0x4b09d
+ (void)_updateShowInfoForRentals:(id)rentals;	// 0x4b211
+ (id)rentalDataClient;	// 0x4a369
- (id)init;	// 0x4a42d
- (void).cxx_destruct;	// 0x4de5d
- (BOOL)_isShowInfoBeingWrittenToKVSForMediaItem:(id)mediaItem;	// 0x4cad5
- (void)_updateShowInfoForMediaItem:(id)mediaItem withPropertiesUpdated:(id)propertiesUpdated;	// 0x4cc41
- (void)acquisitionSuccessful:(id)successful;	// 0x4bedd
- (void)authenticationCancelled:(id)cancelled;	// 0x4c315
- (void)authenticationSucceeded:(id)succeeded;	// 0x4c24d
- (void)availableRentalCount:(id)count;	// 0x4bd4d
- (void)availableRentals:(id)rentals;	// 0x4bcad
- (id)buildRentalsArray:(id)array;	// 0x4b4ad
- (void)checkInOutstandingRentals:(id)outstandingRentals;	// 0x4dcb5
- (id)cloudItems;	// 0x4ad61
- (void)concreteDataClientConnect;	// 0x4a825
- (void)dealloc;	// 0x4a769
- (void)executeQuery:(id)query withCompletionQueue:(id)completionQueue completionHandler:(id)handler;	// 0x4a865
- (void)fetchAvailableRentals;	// 0x4d785
- (id)imageURLWithAsset:(id)asset size:(CGSize)size crop:(BOOL)crop;	// 0x4a8fd
- (void)mainMenuVisible:(id)visible;	// 0x4dca5
- (void)markAsConnected;	// 0x4bb1d
- (id)mediaItemWithEarliestExpirationDate;	// 0x4bb55
- (void)networkStateChanged:(id)changed;	// 0x4dc11
- (void)playbackResolutionChanged:(id)changed;	// 0x4c719
- (void)preferredAccountAuthenticationSucceeded:(id)succeeded;	// 0x4daf5
- (void)preferredAccountEstablished:(id)established;	// 0x4d8f9
- (void)preferredAccountRemoved:(id)removed;	// 0x4d7cd
- (id)processQuery:(id)query;	// 0x4b949
- (void)propertyUpdated:(id)updated;	// 0x4c789
- (void)queueRentalRefreshCompleteNotification:(id)notification;	// 0x4d219
- (void)refreshAvailableRentals;	// 0x4d361
- (void)refreshAvailableRentalsImmediate;	// 0x4d589
- (void)refreshAvailableRentalsOverridingRentalCheckCount;	// 0x4d33d
- (void)rentalRefreshRequest:(id)request;	// 0x4c3cd
// converted property getter: - (id)rentals;	// 0x4b01d
- (id)rentalsAndPurchases;	// 0x4b031
// converted property setter: - (void)setRentals:(id)rentals;	// 0x4ae4d
- (void)showInfoChanged:(id)changed;	// 0x4c3dd
- (void)updateRentalExpirationTask;	// 0x4da39
@end
