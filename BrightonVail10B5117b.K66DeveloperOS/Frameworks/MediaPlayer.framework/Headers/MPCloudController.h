/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class HSCloudClient;
@protocol OS_dispatch_queue;

@interface MPCloudController : NSObject {
	NSObject<OS_dispatch_queue> *_accessQueue;	// 4 = 0x4
	BOOL _canShowCloudDownloadButtons;	// 8 = 0x8
	HSCloudClient *_cloudClient;	// 12 = 0xc
	BOOL _isCloudEnabled;	// 16 = 0x10
	BOOL _isCellularDataActive;	// 17 = 0x11
	BOOL _isShowingAllMusic;	// 18 = 0x12
	BOOL _isUpdateInProgress;	// 19 = 0x13
	BOOL _isWiFiEnabled;	// 20 = 0x14
	BOOL _isObservingDataStatusChanges;	// 21 = 0x15
	BOOL _isObservingWiFiChanges;	// 22 = 0x16
	int _preferencesChangedNotifyToken;	// 24 = 0x18
	BOOL _preferencesChangedNotifyTokenIsValid;	// 28 = 0x1c
	BOOL _isInitialImport;	// 29 = 0x1d
}
@property(readonly, assign, nonatomic) BOOL canShowCloudDownloadButtons;	// G=0x31e167b5; 
@property(readonly, assign, nonatomic) BOOL canShowCloudTracks;	// G=0x31e16885; 
@property(readonly, assign, nonatomic) BOOL hasCloudLockerAccount;	// G=0x31e168f9; 
@property(readonly, assign, nonatomic) BOOL isCloudEnabled;	// G=0x31e17165; @synthesize=_isCloudEnabled
@property(readonly, assign, nonatomic) BOOL isGeniusEnabled;	// G=0x31e16951; 
@property(readonly, assign, nonatomic) BOOL isInitialImport;	// G=0x31e16969; @synthesize=_isInitialImport
@property(readonly, assign, nonatomic) BOOL isUpdateInProgress;	// G=0x31e16991; @synthesize=_isUpdateInProgress
+ (BOOL)isCellularDataRestricted;	// 0x31e15d4d
+ (BOOL)isMediaApplication;	// 0x31e15c5d
+ (void)migrateCellularDataPreferencesIfNeeded;	// 0x31e15d85
+ (id)sharedCloudController;	// 0x31e15bf1
+ (BOOL)shouldProhibitActionsForCurrentNetworkConditions;	// 0x31e15d89
- (id)init;	// 0x31e15de5
- (void)_cellularNetworkAllowedDidChangeNotification:(id)_cellularNetworkAllowed;	// 0x31e16aa1
- (BOOL)_currentIsShowingAllMusic;	// 0x31e16c1d
- (void)_handleTelephonyNotificationWithName:(id)name userInfo:(id)info;	// 0x31e16c55
- (void)_initializeUpdateInProgressState;	// 0x31e16d7d
- (void)_onQueue_updateCanShowCloudDownloadButtonsWithNotification:(BOOL)notification;	// 0x31e16f49
- (void)_wifiEnabledDidChangeNotification:(id)_wifiEnabled;	// 0x31e16b51
- (void)addGeniusPlaylistWithName:(id)name seedItemSagaIDs:(id)ids itemSagaIDs:(id)ids3 completionHandler:(id)handler;	// 0x31e16309
- (void)addPlaylistWithName:(id)name completionHandler:(id)handler;	// 0x31e162e9
- (void)becomeActive;	// 0x31e16329
// declared property getter: - (BOOL)canShowCloudDownloadButtons;	// 0x31e167b5
// declared property getter: - (BOOL)canShowCloudTracks;	// 0x31e16885
- (void)dealloc;	// 0x31e16175
// declared property getter: - (BOOL)hasCloudLockerAccount;	// 0x31e168f9
- (void)incrementItemProperty:(id)property forSagaID:(unsigned long long)sagaID;	// 0x31e16931
// declared property getter: - (BOOL)isCloudEnabled;	// 0x31e17165
// declared property getter: - (BOOL)isGeniusEnabled;	// 0x31e16951
// declared property getter: - (BOOL)isInitialImport;	// 0x31e16969
// declared property getter: - (BOOL)isUpdateInProgress;	// 0x31e16991
- (void)loadGeniusItemsForSagaID:(unsigned long long)sagaID completionHandler:(id)handler;	// 0x31e169b9
- (void)loadUpdateProgressWithCompletionHandler:(id)completionHandler;	// 0x31e169d9
- (void)removePlaylistWithSagaID:(unsigned long long)sagaID completionHandler:(id)handler;	// 0x31e169f9
- (void)resignActive;	// 0x31e16a19
- (void)setItemProperties:(id)properties forSagaID:(unsigned long long)sagaID;	// 0x31e16a39
- (void)updatePlaylistWithSagaID:(unsigned long long)sagaID itemSagaIDs:(id)ids completionHandler:(id)handler;	// 0x31e16a59
@end

