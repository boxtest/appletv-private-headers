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

@class BookmarkDAVTaskManager, CoreDAVDiscoveryTaskGroup, DACoreDAVLogger;

@interface BookmarkDAVAccount : DAAccount <CoreDAVAccountInfoProvider, CoreDAVLogDelegate, CoreDAVDiscoveryTaskGroupDelegate> {
	BookmarkDAVTaskManager *_taskManager;	// 64 = 0x40
	CoreDAVDiscoveryTaskGroup *_checkValidityTaskGroup;	// 68 = 0x44
	DACoreDAVLogger *_curLogger;	// 72 = 0x48
}
@property(assign) int bookmarkDAVAccountVersion;	// G=0x32190449; S=0x32190465; 
@property(retain) id host;	// G=0x321902b1; S=0x321902cd; converted property
@property(assign) int port;	// G=0x32190349; S=0x32190365; converted property
@property(retain) id principalURL;	// G=0x32190125; S=0x32190099; converted property
@property(retain) id scheme;	// G=0x32190381; S=0x3219039d; converted property
@property(retain) id serverComplianceClasses;	// G=0x3219079d; S=0x321907a1; converted property
@property(retain) id serverRoot;	// G=0x32190441; S=0x32190445; converted property
@property(readonly, retain) BookmarkDAVTaskManager *taskManager;	// G=0x3218fb75; converted property
@property(assign) BOOL useSSL;	// G=0x321903b9; S=0x321903d9; converted property
@property(retain) id username;	// G=0x32190219; S=0x32190235; converted property
+ (Class)accountClass;	// 0x3218f3cd
+ (Class)clientClass;	// 0x3218f3e9
+ (id)defaultProperties;	// 0x3218f0d9
+ (id)supportedDataclasses;	// 0x3218f405
- (id)init;	// 0x3218f20d
- (id)initWithProperties:(id)properties;	// 0x3218f24d
- (id)_oldURLsForKeychain;	// 0x3218fc31
- (BOOL)_upgradeSelfFromVersion:(int)version superClassUpgraded:(BOOL)upgraded;	// 0x3218fd59
- (id)_validationErrorFromRawError:(id)rawError;	// 0x3218f795
- (BOOL)accountNeedsUpgrade;	// 0x3218ffa5
// declared property getter: - (int)bookmarkDAVAccountVersion;	// 0x32190449
- (void)checkValidityWithConsumer:(id)consumer;	// 0x3218f431
- (void)coreDAVLogDiagnosticMessage:(id)message atLevel:(int)level;	// 0x32190891
- (int)coreDAVLogLevel;	// 0x32190871
- (void)coreDAVLogTransmittedDataPartial:(id)partial;	// 0x321908e1
- (int)coreDAVOutputLevel;	// 0x32190889
- (void)coreDAVTransmittedDataFinished;	// 0x32190901
- (void)dealloc;	// 0x3218f321
- (void)discoveryTask:(id)task gotAccountInfo:(id)info error:(id)error;	// 0x3218f9e5
- (BOOL)handleCertificateError:(id)error;	// 0x3219086d
- (BOOL)handleTrustChallenge:(id)challenge;	// 0x3219083d
// converted property getter: - (id)host;	// 0x321902b1
- (BOOL)isEqualToAccount:(id)account;	// 0x32190481
- (id)localizedIdenticalAccountFailureMessage;	// 0x32190675
- (id)localizedInvalidPasswordMessage;	// 0x321906ed
- (void)noteHomeSetOnDifferentHost:(id)host;	// 0x3219016d
// converted property getter: - (int)port;	// 0x32190349
// converted property getter: - (id)principalURL;	// 0x32190125
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(id)completionBlock;	// 0x321907a9
// converted property getter: - (id)scheme;	// 0x32190381
// converted property getter: - (id)serverComplianceClasses;	// 0x3219079d
// converted property getter: - (id)serverRoot;	// 0x32190441
// declared property setter: - (void)setBookmarkDAVAccountVersion:(int)version;	// 0x32190465
// converted property setter: - (void)setHost:(id)host;	// 0x321902cd
// converted property setter: - (void)setPort:(int)port;	// 0x32190365
// converted property setter: - (void)setPrincipalURL:(id)url;	// 0x32190099
// converted property setter: - (void)setScheme:(id)scheme;	// 0x3219039d
// converted property setter: - (void)setServerComplianceClasses:(id)classes;	// 0x321907a1
// converted property setter: - (void)setServerRoot:(id)root;	// 0x32190445
- (void)setShouldFailAllTasks:(BOOL)failAllTasks;	// 0x3218f751
// converted property setter: - (void)setUseSSL:(BOOL)ssl;	// 0x321903d9
// converted property setter: - (void)setUsername:(id)username;	// 0x32190235
- (BOOL)shouldLogTransmittedData;	// 0x321908d5
- (id)stateString;	// 0x3218fbc9
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x3218f425
// converted property getter: - (id)taskManager;	// 0x3218fb75
- (BOOL)upgradeAccount;	// 0x3218ff1d
// converted property getter: - (BOOL)useSSL;	// 0x321903b9
- (id)userAgentHeader;	// 0x321907a5
// converted property getter: - (id)username;	// 0x32190219
@end

