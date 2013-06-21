/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM
 */

#import "MCJobQueueObserver.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, MCJobQueue, MCUserNotificationManager, NSString, MCMDMServer;
@protocol OS_dispatch_queue;

@interface MCManagedAppManager : NSObject <MCJobQueueObserver> {
	MCMDMServer *_server;	// 4 = 0x4
	NSString *_manifestPath;	// 8 = 0x8
	NSMutableDictionary *_manifest;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *_manifestQueue;	// 16 = 0x10
	MCJobQueue *_jobQueue;	// 20 = 0x14
	MCUserNotificationManager *_userNotificationManager;	// 24 = 0x18
	NSObject<OS_dispatch_queue> *_busyCountQueue;	// 28 = 0x1c
	int _busyCount;	// 32 = 0x20
}
@property(assign, nonatomic) __weak MCMDMServer *server;	// G=0x34494251; S=0x34494271; @synthesize=_server
+ (id)sharedManager;	// 0x3448833d
+ (id)stringForAppState:(int)appState;	// 0x34494149
- (id)initWithManifestPath:(id)manifestPath;	// 0x344883e1
- (void).cxx_destruct;	// 0x34494285
- (int)__appStateForBundleID:(id)bundleID;	// 0x34489075
- (void)__commitManifest;	// 0x34488931
- (BOOL)__hasMetadataForBundleID:(id)bundleID;	// 0x34488961
- (id)__managedAppMetadataByBundleID;	// 0x34488af5
- (id)__metadataForBundleID:(id)bundleID;	// 0x34488e99
- (void)__removeBundleID:(id)anId;	// 0x344893d1
- (void)__setAppState:(int)state forBundleID:(id)bundleID;	// 0x34489231
- (void)__setManagedAppMetadataByBundleID:(id)anId;	// 0x34488b6d
- (void)__setMetadata:(id)metadata forBundleID:(id)bundleID;	// 0x34488d01
- (BOOL)_advanceTransientStateForBundleID:(id)bundleID params:(id)params outNewParams:(id *)params3 outSetChanged:(BOOL *)changed;	// 0x34493b01
- (id)_appAlreadyQueuedError:(id)error;	// 0x34489b2d
- (BOOL)_appBundleID:(id)anId wasInstalledOutIsManaged:(BOOL *)managed;	// 0x34489875
- (id)_bundleIDAlreadyInstalledError:(id)error;	// 0x34489aa5
- (void)_displayAppInstallationAlertMessage:(id)message isUpdate:(BOOL)update completionBlock:(id)block;	// 0x3448a3f9
- (void)_displayAppInstallationFailureAlertTitle:(id)title completionBlock:(id)block;	// 0x3448a4b1
- (void)_displayAppUpdateFailureAlertTitle:(id)title completionBlock:(id)block;	// 0x3448a579
- (void)_displayPromptForAppInstallationTitle:(id)appInstallationTitle isAppStore:(BOOL)store isUpdate:(BOOL)update completionBlock:(id)block;	// 0x34489ff9
- (id)_downloadingAppIDs;	// 0x34493601
- (void)_installEnterpriseAppManifestURL:(id)url completionBlock:(id)block;	// 0x3448c0c5
- (id)_invalidManifestErrorWithURL:(id)url underlyingError:(id)error;	// 0x34489bb5
- (BOOL)_isBundleIDInstalled:(id)installed;	// 0x344897d5
- (id)_notAnAppError;	// 0x34489a21
- (void)_promptUserForEnterpriseAppInstallationManifestURL:(id)enterpriseAppInstallationManifestURL title:(id)title bundleID:(id)anId completionBlock:(id)block;	// 0x3448c31d
- (void)_promptUserForEnterpriseAppUpdateManifestURL:(id)enterpriseAppUpdateManifestURL title:(id)title bundleID:(id)anId completionBlock:(id)block;	// 0x3448c7dd
- (void)_promptUserForStoreAppInstallationItem:(id)storeAppInstallationItem title:(id)title bundleID:(id)anId offer:(id)offer completionBlock:(id)block;	// 0x3448ac15
- (void)_promptUserForStoreAppUpdateItem:(id)storeAppUpdateItem title:(id)title bundleID:(id)anId offer:(id)offer completionBlock:(id)block;	// 0x3448b45d
- (void)_promptUserForiTunesAccount:(id)account accountNameEditable:(BOOL)editable canCreateNewAccount:(BOOL)account3 completionBlock:(id)block;	// 0x3448d1c1
- (void)_purchaseItem:(id)item account:(id)account offer:(id)offer completionBlock:(id)block;	// 0x3448a641
- (void)_userAccount:(id)account hasPurchasedBundleID:(id)anId completionBlock:(id)block;	// 0x3448cf15
- (BOOL)_willQueueAppBundleID:(id)anId forDownloadManagementFlags:(int)downloadManagementFlags outRejectionReason:(id *)reason outIsUpdate:(BOOL *)update outError:(id *)error;	// 0x3448cce5
- (void)advanceTransientStates;	// 0x34493cd1
- (void)advanceTransientStatesForBundleID:(id)bundleID;	// 0x34493ed9
- (int)appStateForBundleID:(id)bundleID;	// 0x34489119
- (BOOL)applyRedemptionCode:(id)code forBundleID:(id)bundleID outError:(id *)error;	// 0x344914ad
- (id)bundleIDsWithFlags:(int)flags;	// 0x3448955d
- (void)cleanUp;	// 0x34489c5d
- (id)doNotBackupAppIDs;	// 0x3449350d
- (BOOL)hasMetadataForBundleID:(id)bundleID;	// 0x344889dd
- (BOOL)hasPendingInstallations;	// 0x34493521
- (BOOL)installITunesStoreID:(unsigned long long)anId managementFlags:(int)flags outBundleID:(id *)anId3 outAppState:(int *)state outRejectionReason:(id *)reason outError:(id *)error;	// 0x3448d475
- (BOOL)installManifestURL:(id)url managementFlags:(int)flags outBundleID:(id *)anId outAppState:(int *)state outRejectionReason:(id *)reason outError:(id *)error;	// 0x3448f481
- (void)jobQueueDidReleaseBusy:(id)jobQueue;	// 0x344887a1
- (void)jobQueueDidRetainBusy:(id)jobQueue;	// 0x344886a1
- (id)managedAppMetadataByBundleID;	// 0x34488bb5
- (id)metadataForBundleID:(id)bundleID;	// 0x34488f01
- (void)removeBundleID:(id)anId;	// 0x34489495
// declared property getter: - (id)server;	// 0x34494251
- (void)setAppState:(int)state forBundleID:(id)bundleID;	// 0x344892f5
- (void)setMetadata:(id)metadata forBundleID:(id)bundleID;	// 0x34488d9d
// declared property setter: - (void)setServer:(id)server;	// 0x34494271
- (void)uninstallManagedAppsAccordingToFlags;	// 0x3449122d
- (void)updateApplicationInstallationStates;	// 0x344937c5
@end
