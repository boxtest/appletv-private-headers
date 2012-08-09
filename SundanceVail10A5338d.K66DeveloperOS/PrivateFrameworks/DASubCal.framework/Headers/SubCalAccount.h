/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DASubCal
 */

#import <DAAccount.h> // Unknown library

@class DATaskManager, NSData, NSString, NSDictionary, NSURL;

@interface SubCalAccount : DAAccount {
	DATaskManager *_taskManager;	// 60 = 0x3c
	NSData *_tmpICSData;	// 64 = 0x40
}
@property(retain, nonatomic) NSDictionary *externalRepresentation;	// G=0x33084b11; S=0x33084b2d; 
@property(retain) id host;	// G=0x33084879; S=0x33084895; converted property
@property(assign) int port;	// G=0x33084b49; S=0x33084b65; converted property
@property(assign) BOOL shouldRemoveAlarms;	// G=0x33084bbd; S=0x33084bdd; 
@property(assign) int subCalAccountVersion;	// G=0x33084769; S=0x3308479d; 
@property(readonly, assign, nonatomic) NSURL *subscriptionURL;	// G=0x33083a8d; 
@property(retain, nonatomic) NSString *syncId;	// G=0x33084ad9; S=0x33084af5; 
@property(readonly, retain) DATaskManager *taskManager;	// G=0x33083b09; converted property
@property(retain) NSData *tmpICSData;	// G=0x33083e61; S=0x33083ddd; converted property
@property(assign) BOOL useSSL;	// G=0x33084b81; S=0x33084ba1; converted property
@property(retain) id username;	// G=0x330847e1; S=0x330847fd; converted property
+ (Class)accountClass;	// 0x330838ed
+ (Class)clientClass;	// 0x33083909
+ (id)defaultProperties;	// 0x33083925
+ (id)supportedDataclasses;	// 0x33083a61
- (void)_checkValidityWithConsumer:(id)consumer quickValidate:(BOOL)validate;	// 0x33083b59
- (id)_oldURLsForKeychain;	// 0x33083fe9
- (id)_tmpICSCalendarPath;	// 0x33083d9d
- (BOOL)_upgradeSelfFromVersion:(int)version superClassUpgraded:(BOOL)upgraded;	// 0x33084131
- (BOOL)accountNeedsUpgrade;	// 0x3308466d
- (void)checkValidityWithConsumer:(id)consumer;	// 0x33083ca9
- (void)clearTmpICSData;	// 0x33083f19
- (void)dealloc;	// 0x33083879
// declared property getter: - (id)externalRepresentation;	// 0x33084b11
- (void)handleTrustChallenge:(id)challenge forTask:(id)task;	// 0x33084f09
- (BOOL)hasSubscribedCalendarAtURL:(id)url;	// 0x33084edd
// converted property getter: - (id)host;	// 0x33084879
- (BOOL)isEqualToAccount:(id)account;	// 0x33084c49
- (id)localizedIdenticalAccountFailureMessage;	// 0x33084db5
- (id)localizedInvalidPasswordMessage;	// 0x33084e2d
// converted property getter: - (int)port;	// 0x33084b49
- (void)quickValidate:(id)validate;	// 0x33083cbd
- (void)refreshAllCalendars;	// 0x33084c45
- (void)saveTmpICSData;	// 0x33083e21
// declared property setter: - (void)setExternalRepresentation:(id)representation;	// 0x33084b2d
// converted property setter: - (void)setHost:(id)host;	// 0x33084895
// converted property setter: - (void)setPort:(int)port;	// 0x33084b65
// declared property setter: - (void)setShouldRemoveAlarms:(BOOL)removeAlarms;	// 0x33084bdd
// declared property setter: - (void)setSubCalAccountVersion:(int)version;	// 0x3308479d
// declared property setter: - (void)setSyncId:(id)anId;	// 0x33084af5
// converted property setter: - (void)setTmpICSData:(id)data;	// 0x33083ddd
// converted property setter: - (void)setUseSSL:(BOOL)ssl;	// 0x33084ba1
// converted property setter: - (void)setUsername:(id)username;	// 0x330847fd
// declared property getter: - (BOOL)shouldRemoveAlarms;	// 0x33084bbd
// declared property getter: - (int)subCalAccountVersion;	// 0x33084769
- (void)subCalValidationTask:(id)task finishedWithError:(id)error calendarName:(id)name calendarData:(id)data;	// 0x33083cd1
// declared property getter: - (id)subscriptionURL;	// 0x33083a8d
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x33083a81
// declared property getter: - (id)syncId;	// 0x33084ad9
// converted property getter: - (id)taskManager;	// 0x33083b09
// converted property getter: - (id)tmpICSData;	// 0x33083e61
- (BOOL)upgradeAccount;	// 0x330845e5
// converted property getter: - (BOOL)useSSL;	// 0x33084b81
// converted property getter: - (id)username;	// 0x330847e1
@end
