/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import "CoreDAVAccountInfoProvider.h"
#import "CalDAVPrincipal.h"
#import <NSObject.h> // Unknown library

@class CalDAVRefreshContext, NSString, MobileCalDAVAccount, NSSet, NSURL, NSDictionary, NSNumber, NSMutableDictionary;
@protocol CalDAVAccount;

@interface MobileCalDAVPrincipal : NSObject <CoreDAVAccountInfoProvider, CalDAVPrincipal> {
	NSString *_uid;	// 4 = 0x4
	MobileCalDAVAccount *_account;	// 8 = 0x8
	NSSet *_calendarUserAddresses;	// 12 = 0xc
	NSMutableDictionary *_calendarUserAddressesPerCalendar;	// 16 = 0x10
	NSURL *_preferredCalendarUserAddress;	// 20 = 0x14
	NSString *_preferredCalendarEmailAddress;	// 24 = 0x18
	NSString *_fullName;	// 28 = 0x1c
	NSURL *_calendarHomeURL;	// 32 = 0x20
	NSURL *_principalURL;	// 36 = 0x24
	NSURL *_defaultCalendarURL;	// 40 = 0x28
	NSURL *_notificationCollectionURL;	// 44 = 0x2c
	NSString *_notificationCollectionCTag;	// 48 = 0x30
	NSURL *_inboxURL;	// 52 = 0x34
	NSString *_inboxCTag;	// 56 = 0x38
	NSURL *_outboxURL;	// 60 = 0x3c
	NSURL *_dropBoxURL;	// 64 = 0x40
	NSString *_notificationURLString;	// 68 = 0x44
	NSDictionary *_pushTransports;	// 72 = 0x48
	NSString *_calendarHomePushKey;	// 76 = 0x4c
	NSString *_XMPPServer;	// 80 = 0x50
	NSNumber *_quotaFreeBytes;	// 84 = 0x54
	NSString *_supportedCalendarComponentSets;	// 88 = 0x58
	BOOL _isDelegate;	// 92 = 0x5c
	BOOL _isWritable;	// 93 = 0x5d
	BOOL _isEnabled;	// 94 = 0x5e
	BOOL _isExpandPropertyReportSupported;	// 95 = 0x5f
	BOOL _supportsFreebusy;	// 96 = 0x60
	BOOL _supportsSyncToken;	// 97 = 0x61
	BOOL _supportsPush;	// 98 = 0x62
	BOOL _shouldRefreshPrincipalSearchProperties;	// 99 = 0x63
	BOOL _shouldUpdatePushDelegate;	// 100 = 0x64
	BOOL _isDirty;	// 101 = 0x65
	BOOL _calendarsAreDirty;	// 102 = 0x66
	int _calendarChangeIndex;	// 104 = 0x68
}
@property(readonly, assign) NSString *APSEnv;	// G=0x34029cfd; 
@property(readonly, assign) NSURL *APSSubscriptionURL;	// G=0x34029c7d; 
@property(readonly, assign) NSString *APSTopic;	// G=0x34029c35; 
@property(retain) NSString *XMPPServer;	// G=0x34028ab1; S=0x34028ac1; 
@property(readonly, assign) id<CalDAVAccount> account;	// G=0x34027f19; 
@property(retain) NSString *calendarHomePushKey;	// G=0x34028a31; S=0x34028a41; 
@property(retain) NSURL *calendarHomeURL;	// G=0x34028381; S=0x340283a1; 
@property(retain) NSSet *calendarUserAddresses;	// G=0x34028245; S=0x34028255; 
@property(readonly, assign) NSSet *calendars;	// G=0x34029271; 
@property(assign) BOOL calendarsAreDirty;	// G=0x34029b49; S=0x34029a71; @synthesize=_calendarsAreDirty
@property(retain) NSURL *defaultCalendarURL;	// G=0x340284c9; S=0x340284e9; 
@property(retain) NSURL *dropBoxURL;	// G=0x3402885d; S=0x3402887d; 
@property(retain) NSString *fullName;	// G=0x34028301; S=0x34028311; 
@property(retain) NSString *inboxCTag;	// G=0x34028735; S=0x34028745; 
@property(retain) NSURL *inboxURL;	// G=0x34028691; S=0x340286b1; 
@property(assign) BOOL isDelegate;	// G=0x34028c0d; S=0x34028c1d; 
@property(assign) BOOL isDirty;	// G=0x3402aa61; S=0x3402aa79; @synthesize=_isDirty
@property(assign) BOOL isEnabled;	// G=0x34028c9d; S=0x34028cad; 
@property(assign) BOOL isExpandPropertyReportSupported;	// G=0x34029179; S=0x34029189; 
@property(assign) BOOL isWritable;	// G=0x34028c55; S=0x34028c65; 
@property(retain) NSString *notificationCollectionCTag;	// G=0x34028611; S=0x34028621; 
@property(retain) NSURL *notificationCollectionURL;	// G=0x3402856d; S=0x3402858d; 
@property(retain) NSString *notificationURLString;	// G=0x34028901; S=0x34028911; 
@property(retain) NSURL *outboxURL;	// G=0x340287b5; S=0x340287d5; 
@property(readonly, assign) NSString *preferredCalendarEmailAddress;	// G=0x34029f85; 
@property(readonly, assign) NSURL *preferredCalendarUserAddress;	// G=0x34029f11; 
@property(retain) NSURL *principalURL;	// G=0x34028425; S=0x34028445; 
@property(readonly, assign) NSSet *pushKeys;	// G=0x34029df5; 
@property(retain) NSDictionary *pushTransports;	// G=0x34028995; S=0x340289a5; 
@property(retain) NSNumber *quotaFreeBytes;	// G=0x34028b31; S=0x34028b41; 
@property(readonly, assign) CalDAVRefreshContext *refreshContext;	// G=0x34029251; 
@property(assign) BOOL shouldRefreshPrincipalSearchProperties;	// G=0x3402aa01; S=0x3402aa19; @synthesize=_shouldRefreshPrincipalSearchProperties
@property(assign) BOOL shouldUpdatePushDelegate;	// G=0x3402aa31; S=0x3402aa49; @synthesize=_shouldUpdatePushDelegate
@property(retain) NSString *supportedCalendarComponentSets;	// G=0x34028bfd; S=0x34028b9d; 
@property(readonly, assign) BOOL supportsExtendedCalendarQuery;	// G=0x34028dc1; 
@property(assign) BOOL supportsFreebusy;	// G=0x340291c1; S=0x340291d1; 
@property(assign) BOOL supportsPush;	// G=0x3402aa91; S=0x3402aaa9; @synthesize=_supportsPush
@property(assign) BOOL supportsSyncToken;	// G=0x34029209; S=0x34029219; 
@property(readonly, assign) NSString *uid;	// G=0x3402a9ed; @synthesize=_uid
+ (BOOL)compareAddressURL:(id)url localString:(id)string;	// 0x34026595
- (id)init;	// 0x34026765
- (id)initWithConfiguration:(id)configuration account:(id)account;	// 0x34026969
// declared property getter: - (id)APSEnv;	// 0x34029cfd
// declared property getter: - (id)APSSubscriptionURL;	// 0x34029c7d
// declared property getter: - (id)APSTopic;	// 0x34029c35
// declared property getter: - (id)XMPPServer;	// 0x34028ab1
- (id)_addUsernameIfNeeded:(id)needed;	// 0x34027eb5
- (id)_sharedSyncEndDate;	// 0x34028df5
- (id)_startDateFromDaysToSync:(int)sync;	// 0x34028ee9
- (BOOL)_userAddressSet:(id)set isEqualToSet:(id)set2;	// 0x34027f39
// declared property getter: - (id)account;	// 0x34027f19
- (id)accountID;	// 0x3402a4ad
- (id)additionalHeaderValues;	// 0x3402a68d
// declared property getter: - (id)calendarHomePushKey;	// 0x34028a31
// declared property getter: - (id)calendarHomeURL;	// 0x34028381
- (id)calendarOfType:(int)type atURL:(id)url withOptions:(id)options;	// 0x34029791
- (BOOL)calendarUserAddressIsEquivalentToURL:(id)url;	// 0x3402a1dd
// declared property getter: - (id)calendarUserAddresses;	// 0x34028245
- (id)calendarUserAddressesForCalendar:(id)calendar;	// 0x34029991
// declared property getter: - (id)calendars;	// 0x34029271
// declared property getter: - (BOOL)calendarsAreDirty;	// 0x34029b49
- (BOOL)clearCalendarChanges;	// 0x34029741
- (id)configuration;	// 0x340274d5
- (void)dealloc;	// 0x34026779
// declared property getter: - (id)defaultCalendarURL;	// 0x340284c9
- (id)defaultEventCalendarTitle;	// 0x34029949
- (id)defaultTodoCalendarTitle;	// 0x34029955
- (id)deletedCalendarURLs;	// 0x34029291
// declared property getter: - (id)dropBoxURL;	// 0x3402885d
- (id)eventFilterEndDate;	// 0x34029071
- (id)eventFilterStartDate;	// 0x34029019
// declared property getter: - (id)fullName;	// 0x34028301
- (BOOL)handleCertificateError:(id)error;	// 0x3402a815
- (BOOL)handleTrustChallenge:(id)challenge;	// 0x3402a7ed
- (BOOL)hasCalendarUserAddress:(id)address;	// 0x3402a0b5
- (id)host;	// 0x3402a325
- (id)identityPersist;	// 0x3402a48d
// declared property getter: - (id)inboxCTag;	// 0x34028735
// declared property getter: - (id)inboxURL;	// 0x34028691
// declared property getter: - (BOOL)isDelegate;	// 0x34028c0d
// declared property getter: - (BOOL)isDirty;	// 0x3402aa61
// declared property getter: - (BOOL)isEnabled;	// 0x34028c9d
- (BOOL)isEnabledForEvents;	// 0x34028d09
- (BOOL)isEnabledForTodos;	// 0x34028d65
// declared property getter: - (BOOL)isExpandPropertyReportSupported;	// 0x34029179
- (BOOL)isMergeSync;	// 0x34028ce5
// declared property getter: - (BOOL)isWritable;	// 0x34028c55
- (void)noteFailedNetworkRequest;	// 0x3402a93d
- (void)noteFailedProtocolRequest;	// 0x3402a975
- (void)noteHomeSetOnDifferentHost:(id)host;	// 0x3402a365
- (void)noteSuccessfulRequestWithNumDownloadedElements:(int)numDownloadedElements;	// 0x3402a901
- (void)noteTimeSpentInNetworking:(double)networking;	// 0x3402a9ad
// declared property getter: - (id)notificationCollectionCTag;	// 0x34028611
// declared property getter: - (id)notificationCollectionURL;	// 0x3402856d
// declared property getter: - (id)notificationURLString;	// 0x34028901
- (id)oauthToken;	// 0x3402a705
// declared property getter: - (id)outboxURL;	// 0x340287b5
- (id)password;	// 0x3402a46d
- (int)port;	// 0x3402a345
// declared property getter: - (id)preferredCalendarEmailAddress;	// 0x34029f85
// declared property getter: - (id)preferredCalendarUserAddress;	// 0x34029f11
- (void)prepareCalendarsForSyncWithCompletionBlock:(id)completionBlock;	// 0x340293c5
// declared property getter: - (id)principalURL;	// 0x34028425
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(id)completionBlock;	// 0x3402a74d
// declared property getter: - (id)pushKeys;	// 0x34029df5
// declared property getter: - (id)pushTransports;	// 0x34028995
// declared property getter: - (id)quotaFreeBytes;	// 0x34028b31
// declared property getter: - (id)refreshContext;	// 0x34029251
- (void)removeCalendar:(id)calendar;	// 0x34029961
- (id)scheme;	// 0x3402a305
- (id)serverComplianceClasses;	// 0x3402a4cd
- (id)serverRoot;	// 0x3402a449
- (void)setAccount:(id)account;	// 0x34027f29
// declared property setter: - (void)setCalendarHomePushKey:(id)key;	// 0x34028a41
// declared property setter: - (void)setCalendarHomeURL:(id)url;	// 0x340283a1
// declared property setter: - (void)setCalendarUserAddresses:(id)addresses;	// 0x34028255
- (void)setCalendarUserAddresses:(id)addresses forCalendar:(id)calendar;	// 0x340299cd
// declared property setter: - (void)setCalendarsAreDirty:(BOOL)dirty;	// 0x34029a71
// declared property setter: - (void)setDefaultCalendarURL:(id)url;	// 0x340284e9
// declared property setter: - (void)setDropBoxURL:(id)url;	// 0x3402887d
// declared property setter: - (void)setFullName:(id)name;	// 0x34028311
// declared property setter: - (void)setInboxCTag:(id)tag;	// 0x34028745
// declared property setter: - (void)setInboxURL:(id)url;	// 0x340286b1
// declared property setter: - (void)setIsDelegate:(BOOL)delegate;	// 0x34028c1d
// declared property setter: - (void)setIsDirty:(BOOL)dirty;	// 0x3402aa79
// declared property setter: - (void)setIsEnabled:(BOOL)enabled;	// 0x34028cad
// declared property setter: - (void)setIsExpandPropertyReportSupported:(BOOL)supported;	// 0x34029189
// declared property setter: - (void)setIsWritable:(BOOL)writable;	// 0x34028c65
// declared property setter: - (void)setNotificationCollectionCTag:(id)tag;	// 0x34028621
// declared property setter: - (void)setNotificationCollectionURL:(id)url;	// 0x3402858d
// declared property setter: - (void)setNotificationURLString:(id)string;	// 0x34028911
// declared property setter: - (void)setOutboxURL:(id)url;	// 0x340287d5
// declared property setter: - (void)setPrincipalURL:(id)url;	// 0x34028445
// declared property setter: - (void)setPushTransports:(id)transports;	// 0x340289a5
// declared property setter: - (void)setQuotaFreeBytes:(id)bytes;	// 0x34028b41
// declared property setter: - (void)setShouldRefreshPrincipalSearchProperties:(BOOL)refreshPrincipalSearchProperties;	// 0x3402aa19
// declared property setter: - (void)setShouldUpdatePushDelegate:(BOOL)updatePushDelegate;	// 0x3402aa49
// declared property setter: - (void)setSupportedCalendarComponentSets:(id)sets;	// 0x34028b9d
// declared property setter: - (void)setSupportsFreebusy:(BOOL)freebusy;	// 0x340291d1
// declared property setter: - (void)setSupportsPush:(BOOL)push;	// 0x3402aaa9
// declared property setter: - (void)setSupportsSyncToken:(BOOL)token;	// 0x34029219
// declared property setter: - (void)setXMPPServer:(id)server;	// 0x34028ac1
- (BOOL)shouldCompressRequests;	// 0x3402a87d
- (BOOL)shouldFailAllTasks;	// 0x3402a819
- (BOOL)shouldHandleHTTPCookiesForURL:(id)url;	// 0x3402a81d
// declared property getter: - (BOOL)shouldRefreshPrincipalSearchProperties;	// 0x3402aa01
- (BOOL)shouldSendClientInfoHeaderForURL:(id)url;	// 0x3402a821
// declared property getter: - (BOOL)shouldUpdatePushDelegate;	// 0x3402aa31
- (BOOL)shouldUseOpportunisticSockets;	// 0x3402a8dd
// declared property getter: - (id)supportedCalendarComponentSets;	// 0x34028bfd
// declared property getter: - (BOOL)supportsExtendedCalendarQuery;	// 0x34028dc1
// declared property getter: - (BOOL)supportsFreebusy;	// 0x340291c1
// declared property getter: - (BOOL)supportsPush;	// 0x3402aa91
// declared property getter: - (BOOL)supportsSyncToken;	// 0x34029209
- (id)taskManager;	// 0x3402a2e5
- (id)todoFilterEndDate;	// 0x34029135
- (id)todoFilterStartDate;	// 0x340290dd
// declared property getter: - (id)uid;	// 0x3402a9ed
- (id)user;	// 0x3402a44d
- (id)userAgentHeader;	// 0x3402a4d1
@end
