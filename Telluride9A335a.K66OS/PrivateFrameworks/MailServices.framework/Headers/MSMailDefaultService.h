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
@property(assign, nonatomic) NSObject *delegate;	// G=0x33f8b095; S=0x33f8b105; 
@property(assign, nonatomic) BOOL shouldLaunchMobileMail;	// G=0x33f8b821; S=0x33f8b831; @synthesize=_shouldLaunch
+ (BOOL)shouldUseNewThreadingModel;	// 0x33f8ad15
+ (id)smi_serverCommandName;	// 0x33f8acdd
+ (void)useNewThreadingModel;	// 0x33f8ad05
- (id)init;	// 0x33f8ad25
- (id)_activeAction;	// 0x33f8b79d
- (BOOL)_callMailServicesMethod:(id)method arg:(id)arg reply:(id *)reply error:(id *)error responseSelector:(SEL)selector;	// 0x33f8b3fd
- (id)_copyServer;	// 0x33f8ae6d
- (id)_generateUnitTestReplyForMethod:(id)method arg:(id)arg error:(id *)error;	// 0x33f8aef5
- (void)_generateUnitTestResponsesForResultArray:(id)resultArray;	// 0x33f8aef9
- (void)_mailServiceDidTerminate:(id)_mailService;	// 0x33f8aefd
- (void)_setActiveAction:(id)action responseSelector:(SEL)selector;	// 0x33f8b265
- (void)_setServer:(id)server;	// 0x33f8b159
- (void)_smi_notifyClientDidFinishWithError:(id)_smi_notifyClient;	// 0x33f8aec9
- (BOOL)_unitTestsAreEnabled;	// 0x33f8aef1
- (void)cancel;	// 0x33f8b80d
- (void)dealloc;	// 0x33f8adf9
// declared property getter: - (id)delegate;	// 0x33f8b095
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33f8b105
// declared property setter: - (void)setShouldLaunchMobileMail:(BOOL)launchMobileMail;	// 0x33f8b831
// declared property getter: - (BOOL)shouldLaunchMobileMail;	// 0x33f8b821
@end

