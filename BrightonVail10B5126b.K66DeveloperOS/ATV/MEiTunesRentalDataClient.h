/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVDataClient.h"
#import "AppleTV-Structs.h"

@class NSMutableArray, BRBackgroundTask, NSCountedSet, NSMutableDictionary, NSArray;

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
@property(retain) NSArray *rentals;	// G=0x50d1d; S=0x50b4d; converted property
+ (void)_addPurchase:(id)purchase;	// 0x50661
+ (void)_updateMediaItem:(id)item withShowInfo:(id)showInfo transactionOptions:(id)options;	// 0x50d9d
+ (void)_updateShowInfoForRentals:(id)rentals;	// 0x50f11
+ (id)rentalDataClient;	// 0x50069
- (id)init;	// 0x5012d
- (void).cxx_destruct;	// 0x53bd5
- (BOOL)_isShowInfoBeingWrittenToKVSForMediaItem:(id)mediaItem;	// 0x5284d
- (void)_updateShowInfoForMediaItem:(id)mediaItem withPropertiesUpdated:(id)propertiesUpdated;	// 0x529b9
- (void)acquisitionSuccessful:(id)successful;	// 0x51bed
- (void)authenticationCancelled:(id)cancelled;	// 0x52051
- (void)authenticationSucceeded:(id)succeeded;	// 0x51f5d
- (void)availableRentalCount:(id)count;	// 0x51a5d
- (void)availableRentals:(id)rentals;	// 0x519bd
- (id)buildRentalsArray:(id)array;	// 0x511bd
- (void)checkInOutstandingRentals:(id)outstandingRentals;	// 0x53a2d
- (id)cloudItems;	// 0x50a61
- (void)concreteDataClientConnect;	// 0x50525
- (void)dealloc;	// 0x50469
- (void)executeQuery:(id)query withCompletionQueue:(id)completionQueue completionHandler:(id)handler;	// 0x50565
- (void)fetchAvailableRentals;	// 0x534fd
- (id)imageURLWithAsset:(id)asset size:(CGSize)size crop:(BOOL)crop;	// 0x505fd
- (void)mainMenuVisible:(id)visible;	// 0x53a1d
- (void)markAsConnected;	// 0x5182d
- (id)mediaItemWithEarliestExpirationDate;	// 0x51865
- (void)networkStateChanged:(id)changed;	// 0x53989
- (void)playbackResolutionChanged:(id)changed;	// 0x52491
- (void)preferredAccountAuthenticationSucceeded:(id)succeeded;	// 0x5386d
- (void)preferredAccountEstablished:(id)established;	// 0x53671
- (void)preferredAccountRemoved:(id)removed;	// 0x53545
- (id)processQuery:(id)query;	// 0x51659
- (void)propertyUpdated:(id)updated;	// 0x52501
- (void)queueRentalRefreshCompleteNotification:(id)notification;	// 0x52f91
- (void)refreshAvailableRentals;	// 0x530d9
- (void)refreshAvailableRentalsImmediate;	// 0x53301
- (void)refreshAvailableRentalsOverridingRentalCheckCount;	// 0x530b5
- (void)rentalRefreshRequest:(id)request;	// 0x52109
// converted property getter: - (id)rentals;	// 0x50d1d
- (id)rentalsAndPurchases;	// 0x50d31
// converted property setter: - (void)setRentals:(id)rentals;	// 0x50b4d
- (void)showInfoChanged:(id)changed;	// 0x52119
- (void)updateRentalExpirationTask;	// 0x537b1
@end
