/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"
#import "BRSelectionHandler.h"
#import "NSURLDownloadDelegate.h"

@class NSString, NSDate, ATVSWUpdateRecord, NSMutableArray, NSError, ATVRebootWaitController, NSLock;

@interface ATVSWUpdateManager : BRSingleton <BRSelectionHandler, NSURLDownloadDelegate> {
@private
	BOOL _checkInProgress;	// 4 = 0x4
	BOOL _downloadInProgress;	// 5 = 0x5
	BOOL _applyInProgress;	// 6 = 0x6
	BOOL _singleFileDownloadInProgress;	// 7 = 0x7
	BOOL _automaticUpdateTriggered;	// 8 = 0x8
	BOOL _forceFullUpdate;	// 9 = 0x9
	BOOL _cancelRequested;	// 10 = 0xa
	BOOL _waitingForUserConfirmation;	// 11 = 0xb
	unsigned long long _amountDownloaded;	// 12 = 0xc
	NSDate *_downloadStartTime;	// 20 = 0x14
	NSError *_downloadError;	// 24 = 0x18
	ATVRebootWaitController *_updateProgressController;	// 28 = 0x1c
	ATVSWUpdateRecord *_pendingRecord;	// 32 = 0x20
	NSMutableArray *_licenses;	// 36 = 0x24
	BOOL _licenseAccepted;	// 40 = 0x28
	NSString *_updateURL;	// 44 = 0x2c
	NSLock *_accessLock;	// 48 = 0x30
}
+ (void)initialize;	// 0x301bf895
+ (void)setSingleton:(id)singleton;	// 0x301bfa31
+ (id)singleton;	// 0x301bfa21
- (id)init;	// 0x301bf92d
- (BOOL)_applyInProgress;	// 0x301c1e6d
- (void)_applyUpdates;	// 0x301c38a9
- (void)_checkStepFinishedWithInfo:(id)info;	// 0x301c2a39
- (void)_cleanUpFiles;	// 0x301c2631
- (void)_collectAppleConnectID;	// 0x301c07ed
- (BOOL)_constructUpdateURL:(BOOL)url;	// 0x301c0415
- (id)_downloadError;	// 0x301c1f9d
- (id)_downloadFileForURL:(id)url error:(id *)error;	// 0x301c2391
- (id)_downloadLicensesFromRecord:(id)record;	// 0x301c2871
- (void)_downloadStepFinishedWithInfo:(id)info;	// 0x301c2b89
- (id)_downloadUpdatePayloadsFromRecord:(id)record;	// 0x301c274d
- (BOOL)_downloadUpdates:(id *)updates;	// 0x301c20c5
- (BOOL)_downloadingAFile;	// 0x301c1f05
- (void)_errorDuringSoftwareUpdate:(id)update;	// 0x301c3a21
- (id)_getRetailType;	// 0x301c05c5
- (id)_getUpdateIPAddress;	// 0x301c0791
- (void)_handleCheckStepFinished:(id)finished;	// 0x301c2a81
- (void)_handleDownloadStepFinished:(id)finished;	// 0x301c2bd1
- (id)_imagePathForUpdateProgress;	// 0x301c40cd
- (id)_localFileForURL:(id)url destFileName:(id)name error:(id *)error;	// 0x301c23cd
- (id)_localFilePathForUpdateURL:(id)updateURL;	// 0x301c26d5
- (void)_performCheckStep;	// 0x301c1415
- (void)_performDownloadStep;	// 0x301c19d9
- (void)_performMSUUpdateThreaded;	// 0x301c3b81
- (void)_playbackInitiated:(id)initiated;	// 0x301c33fd
- (void)_processCompletedDownloadStep:(id)step;	// 0x301c2c79
- (void)_sendCheckStartNotification;	// 0x301c29f5
- (void)_sendDownloadStartNotification;	// 0x301c2b45
- (void)_sendEmergencySpaceRequest:(id)request;	// 0x301c338d
- (void)_sendProgressNotification;	// 0x301c31c9
- (void)_setApplyInProgress:(BOOL)progress;	// 0x301c1eb9
- (void)_setCancelRequest:(BOOL)request;	// 0x301c2079
- (void)_setCheckInProgress:(BOOL)progress;	// 0x301c1dd5
- (void)_setDownloadAFile:(BOOL)file;	// 0x301c1f51
- (void)_setDownloadError:(id)error;	// 0x301c1fad
- (void)_setDownloadInProgress:(BOOL)progress;	// 0x301c1e21
- (void)_showLicenseAgreements;	// 0x301c3641
- (int)_showModalConfirmation:(BOOL)confirmation;	// 0x301c3511
- (void)_showUpdateOptions;	// 0x301c0cd9
- (void)_updateProgressStatus:(id)status;	// 0x301c38e5
- (BOOL)_wasCancelRequested;	// 0x301c202d
- (void)cancelUpdates;	// 0x301c0209
- (void)clearDownloadedUpdates;	// 0x301bfb25
- (void)dealloc;	// 0x301bf971
- (void)download:(id)download didCreateDestination:(id)destination;	// 0x301c34c5
- (void)download:(id)download didFailWithError:(id)error;	// 0x301c34dd
- (void)download:(id)download didReceiveDataOfLength:(unsigned)length;	// 0x301c3449
- (BOOL)download:(id)download shouldDecodeSourceDataOfMIMEType:(id)mimetype;	// 0x301c34c1
- (void)download:(id)download willResumeWithResponse:(id)response fromByte:(long long)byte;	// 0x301c3445
- (id)download:(id)download willSendRequest:(id)request redirectResponse:(id)response;	// 0x301c3441
- (void)downloadDidBegin:(id)download;	// 0x301c342d
- (void)downloadDidFinish:(id)download;	// 0x301c34c9
- (BOOL)handleSelectionForControl:(id)control;	// 0x301bfc8d
- (id)localUpdateFolderPath;	// 0x301bfb55
- (BOOL)startDownload;	// 0x301c0049
- (BOOL)startExplicitUpdateCheck:(BOOL)check forceFullUpdate:(BOOL)update;	// 0x301bfce9
- (void)startMonitoring;	// 0x301bfa41
- (void)startPeriodicUpdateCheck;	// 0x301bfe49
- (void)stopMonitoring;	// 0x301bfa5d
- (BOOL)updateCheckInProgress;	// 0x301bfa61
- (BOOL)updateDownloadInProgress;	// 0x301bfaad
- (unsigned long long)updateDownloadSize;	// 0x301bfaf9
- (void)updatesPostponed;	// 0x301bfc29
@end
