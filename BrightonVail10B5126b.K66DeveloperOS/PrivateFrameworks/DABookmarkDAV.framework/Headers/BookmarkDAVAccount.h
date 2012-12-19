/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DABookmarkDAV.framework/DABookmarkDAV
 */

#import <DAAccount.h> // Unknown library
#import "CoreDAVAccountInfoProvider.h"
#import "CoreDAVLogDelegate.h"
#import "CoreDAVDiscoveryTaskGroupDelegate.h"

@class DACoreDAVTaskManager, CoreDAVDiscoveryTaskGroup, DACoreDAVLogger;

@interface BookmarkDAVAccount : DAAccount <CoreDAVAccountInfoProvider, CoreDAVLogDelegate, CoreDAVDiscoveryTaskGroupDelegate> {
	DACoreDAVTaskManager *_taskManager;	// 60 = 0x3c
	CoreDAVDiscoveryTaskGroup *_checkValidityTaskGroup;	// 64 = 0x40
	DACoreDAVLogger *_curLogger;	// 68 = 0x44
}
@property(assign) int bookmarkDAVAccountVersion;	// G=0x339886dd; S=0x339886f9; 
@property(retain) id host;	// G=0x339884c1; S=0x339884dd; converted property
@property(assign) int port;	// G=0x33988559; S=0x33988575; converted property
@property(retain) id principalURL;	// G=0x33988309; S=0x33988269; converted property
@property(retain) id scheme;	// G=0x33988591; S=0x339885ad; converted property
@property(retain) id serverComplianceClasses;	// G=0x33988a0d; S=0x33988a11; converted property
@property(retain) id serverRoot;	// G=0x339886d5; S=0x339886d9; converted property
@property(readonly, retain) DACoreDAVTaskManager *taskManager;	// G=0x33987d21; converted property
@property(assign) BOOL useSSL;	// G=0x33988675; S=0x339886a5; converted property
@property(retain) id username;	// G=0x33988429; S=0x33988445; converted property
+ (Class)accountClass;	// 0x33987599
+ (Class)clientClass;	// 0x339875b5
+ (id)defaultProperties;	// 0x33987295
+ (id)supportedDataclasses;	// 0x339875d1
- (id)init;	// 0x339873e1
- (id)initWithProperties:(id)properties;	// 0x33987421
- (id)_oldURLsForKeychain;	// 0x33987dd9
- (BOOL)_upgradeSelfFromVersion:(int)version superClassUpgraded:(BOOL)upgraded;	// 0x33987f05
- (id)_validationErrorFromRawError:(id)rawError;	// 0x33987981
- (BOOL)accountNeedsUpgrade;	// 0x33988175
// declared property getter: - (int)bookmarkDAVAccountVersion;	// 0x339886dd
- (void)checkValidityWithConsumer:(id)consumer;	// 0x339875fd
- (void)coreDAVLogDiagnosticMessage:(id)message atLevel:(int)level;	// 0x33988b29
- (int)coreDAVLogLevel;	// 0x33988b09
- (void)coreDAVLogTransmittedDataPartial:(id)partial;	// 0x33988b91
- (int)coreDAVOutputLevel;	// 0x33988b21
- (void)coreDAVTransmittedDataFinished;	// 0x33988bb1
- (void)dealloc;	// 0x339874dd
- (void)discoveryTask:(id)task gotAccountInfo:(id)info error:(id)error;	// 0x33987b9d
- (BOOL)handleCertificateError:(id)error;	// 0x33988b05
- (BOOL)handleTrustChallenge:(id)challenge;	// 0x33988ad5
// converted property getter: - (id)host;	// 0x339884c1
- (BOOL)isEqualToAccount:(id)account;	// 0x33988715
- (id)localizedIdenticalAccountFailureMessage;	// 0x339888e5
- (id)localizedInvalidPasswordMessage;	// 0x3398895d
- (void)noteHomeSetOnDifferentHost:(id)host;	// 0x33988369
// converted property getter: - (int)port;	// 0x33988559
// converted property getter: - (id)principalURL;	// 0x33988309
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(id)completionBlock;	// 0x33988a41
// converted property getter: - (id)scheme;	// 0x33988591
// converted property getter: - (id)serverComplianceClasses;	// 0x33988a0d
// converted property getter: - (id)serverRoot;	// 0x339886d5
// declared property setter: - (void)setBookmarkDAVAccountVersion:(int)version;	// 0x339886f9
// converted property setter: - (void)setHost:(id)host;	// 0x339884dd
// converted property setter: - (void)setPort:(int)port;	// 0x33988575
// converted property setter: - (void)setPrincipalURL:(id)url;	// 0x33988269
// converted property setter: - (void)setScheme:(id)scheme;	// 0x339885ad
// converted property setter: - (void)setServerComplianceClasses:(id)classes;	// 0x33988a11
// converted property setter: - (void)setServerRoot:(id)root;	// 0x339886d9
- (void)setShouldFailAllTasks:(BOOL)failAllTasks;	// 0x3398793d
// converted property setter: - (void)setUseSSL:(BOOL)ssl;	// 0x339886a5
// converted property setter: - (void)setUsername:(id)username;	// 0x33988445
- (BOOL)shouldLogTransmittedData;	// 0x33988b6d
- (id)spinnerIdentifiers;	// 0x33988a19
- (id)stateString;	// 0x33987d71
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x339875f1
// converted property getter: - (id)taskManager;	// 0x33987d21
- (BOOL)upgradeAccount;	// 0x339880ed
// converted property getter: - (BOOL)useSSL;	// 0x33988675
- (id)userAgentHeader;	// 0x33988a15
// converted property getter: - (id)username;	// 0x33988429
@end
