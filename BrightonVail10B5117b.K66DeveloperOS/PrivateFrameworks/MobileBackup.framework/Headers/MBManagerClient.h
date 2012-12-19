/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import "MBConnectionHandler.h"
#import "MBManager.h"
#import "MobileBackup-Structs.h"

@class MBConnection;
@protocol OS_dispatch_queue;

@interface MBManagerClient : MBManager <MBConnectionHandler> {
	MBConnection *_conn;	// 8 = 0x8
	int _stateToken;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *_eventQueue;	// 16 = 0x10
}
@property(assign) BOOL allowiTunesBackup;	// G=0x347affc9; S=0x347aff61; converted property
@property(assign, getter=isBackupEnabled) BOOL backupEnabled;	// G=0x347aeb25; S=0x347aeb59; converted property
- (id)initWithDelegate:(id)delegate eventQueue:(id)queue;	// 0x347ae701
- (void)_backupDidBeginNotification;	// 0x347aeaa5
- (void)_establishConnection;	// 0x347b0035
- (id)_sendRequest:(id)request arguments:(id)arguments;	// 0x347b00d5
- (id)_sendRequest:(id)request arguments:(id)arguments error:(id *)error;	// 0x347b00f9
- (void)accountChanged;	// 0x347af5b1
- (BOOL)acquireLockWithBackupUDID:(id)backupUDID owner:(id)owner timeout:(double)timeout error:(id *)error;	// 0x347af781
// converted property getter: - (BOOL)allowiTunesBackup;	// 0x347affc9
- (id)backupState;	// 0x347aec59
- (void)cancel;	// 0x347aecb1
- (BOOL)cancelApplicationRestoreWithBundleID:(id)bundleID error:(id *)error;	// 0x347af4c5
- (void)cancelRestore;	// 0x347aeccd
- (void)connection:(id)connection didReceiveMessage:(id)message;	// 0x347b024d
- (void)connectionWasInterrupted:(id)interrupted;	// 0x347b06b5
- (void)connectionWasInvalid:(id)invalid;	// 0x347b07c1
- (unsigned)countOfRestoreFailuresForDataclass:(id)dataclass assetType:(id)type;	// 0x347af16d
- (id)dateOfLastBackup;	// 0x347af221
- (id)dateOfNextScheduledBackup;	// 0x347af23d
- (void)dealloc;	// 0x347ae7d9
- (BOOL)deleteAccountWithError:(id *)error;	// 0x347af5e9
- (BOOL)deleteBackupUDID:(id)udid error:(id *)error;	// 0x347af625
- (BOOL)deleteSnapshotID:(unsigned)anId fromBackupUDID:(id)backupUDID error:(id *)error;	// 0x347af6b9
- (id)domainInfoForName:(id)name;	// 0x347afad9
- (id)domainInfoList;	// 0x347afb1d
- (BOOL)extractItemFromBackupUDID:(id)backupUDID snapshotID:(unsigned)anId domainName:(id)name relativePath:(id)path toPath:(id)path5 error:(id *)error;	// 0x347afc69
- (void)finishRestore;	// 0x347af55d
- (id)getAppleIDsForBackupUDID:(id)backupUDID snapshotID:(unsigned)anId error:(id *)error;	// 0x347afdf5
- (id)getBackupListWithError:(id *)error;	// 0x347aebd9
- (id)getBackupListWithFiltering:(BOOL)filtering error:(id *)error;	// 0x347aebed
- (int)getLogLevel;	// 0x347aff2d
- (void)insufficientFreeSpaceToRestore;	// 0x347af579
- (void)invalidate;	// 0x347ae79d
// converted property getter: - (BOOL)isBackupEnabled;	// 0x347aeb25
- (BOOL)isBackupEnabledForDomainName:(id)domainName;	// 0x347afba5
- (void)keyBagIsLocking;	// 0x347af5cd
- (unsigned long long)nextBackupSize;	// 0x347afaa5
- (void)prioritizeRestoreFileWithPath:(id)path;	// 0x347aef09
- (void)rebootDevice;	// 0x347afffd
- (BOOL)recordRestoreFailure:(id)failure error:(id *)error;	// 0x347aef4d
- (BOOL)releaseLockWithBackupUDID:(id)backupUDID owner:(id)owner error:(id *)error;	// 0x347af90d
- (BOOL)removeDomainName:(id)name error:(id *)error;	// 0x347afb49
- (void)repair;	// 0x347b0019
- (BOOL)restoreApplicationWithBundleID:(id)bundleID failed:(BOOL)failed context:(id)context error:(id *)error;	// 0x347af3fd
- (BOOL)restoreApplicationWithBundleID:(id)bundleID failed:(BOOL)failed error:(id *)error;	// 0x347af3d9
- (BOOL)restoreDataExistsForApplicationWithBundleID:(id)bundleID size:(unsigned long long *)size;	// 0x347aed91
- (id)restoreFailuresForDataclass:(id)dataclass assetType:(id)type range:(NSRange)range;	// 0x347af0b9
- (BOOL)restoreFileExistsWithPath:(id)path;	// 0x347aed05
- (BOOL)restoreFileWithPath:(id)path context:(id)context error:(id *)error;	// 0x347af341
- (BOOL)restoreFileWithPath:(id)path error:(id *)error;	// 0x347af321
- (id)restoreFilesForDomain:(id)domain relativePath:(id)path pendingOnly:(BOOL)only range:(NSRange)range error:(id *)error;	// 0x347aee2d
- (id)restoreInfo;	// 0x347afea9
- (id)restoreState;	// 0x347aece9
// converted property setter: - (void)setAllowiTunesBackup:(BOOL)backup;	// 0x347aff61
// converted property setter: - (void)setBackupEnabled:(BOOL)enabled;	// 0x347aeb59
- (void)setBackupEnabled:(BOOL)enabled forDomainName:(id)domainName;	// 0x347afbf9
- (void)setDelegate:(id)delegate;	// 0x347ae865
- (void)setLogLevel:(int)level;	// 0x347afec5
- (BOOL)setupBackupWithPasscode:(id)passcode error:(id *)error;	// 0x347aeab5
- (BOOL)startBackupWithError:(id *)error;	// 0x347aec75
- (BOOL)startRestoreForBackupUDID:(id)backupUDID snapshotID:(unsigned)anId error:(id *)error;	// 0x347af259
- (BOOL)startScanWithError:(id *)error;	// 0x347afa69
- (void)syncBackupEnabled;	// 0x347aebbd
- (void)wakeUp;	// 0x347af595
@end
