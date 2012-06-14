/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

#import <NSObject.h> // Unknown library

@class NSLock, CPDistributedMessagingCenter;

@interface MSMailDefaultService : NSObject {
	BOOL _shouldLaunch;	// 4 = 0x4
	NSLock *_lock;	// 8 = 0x8
	CPDistributedMessagingCenter *_server;	// 12 = 0xc
	CPDistributedMessagingCenter *_action;	// 16 = 0x10
	NSObject *_delegate;	// 20 = 0x14
}
@property(assign, nonatomic) NSObject *delegate;	// G=0x34f12095; S=0x34f12105; 
@property(assign, nonatomic) BOOL shouldLaunchMobileMail;	// G=0x34f12821; S=0x34f12831; @synthesize=_shouldLaunch
+ (BOOL)shouldUseNewThreadingModel;	// 0x34f11d15
+ (id)smi_serverCommandName;	// 0x34f11cdd
+ (void)useNewThreadingModel;	// 0x34f11d05
- (id)init;	// 0x34f11d25
- (id)_activeAction;	// 0x34f1279d
- (BOOL)_callMailServicesMethod:(id)method arg:(id)arg reply:(id *)reply error:(id *)error responseSelector:(SEL)selector;	// 0x34f123fd
- (id)_copyServer;	// 0x34f11e6d
- (id)_generateUnitTestReplyForMethod:(id)method arg:(id)arg error:(id *)error;	// 0x34f11ef5
- (void)_generateUnitTestResponsesForResultArray:(id)resultArray;	// 0x34f11ef9
- (void)_mailServiceDidTerminate:(id)_mailService;	// 0x34f11efd
- (void)_setActiveAction:(id)action responseSelector:(SEL)selector;	// 0x34f12265
- (void)_setServer:(id)server;	// 0x34f12159
- (void)_smi_notifyClientDidFinishWithError:(id)_smi_notifyClient;	// 0x34f11ec9
- (BOOL)_unitTestsAreEnabled;	// 0x34f11ef1
- (void)cancel;	// 0x34f1280d
- (void)dealloc;	// 0x34f11df9
// declared property getter: - (id)delegate;	// 0x34f12095
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x34f12105
// declared property setter: - (void)setShouldLaunchMobileMail:(BOOL)launchMobileMail;	// 0x34f12831
// declared property getter: - (BOOL)shouldLaunchMobileMail;	// 0x34f12821
@end
