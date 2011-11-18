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
@property(assign, nonatomic) NSObject *delegate;	// G=0x32196095; S=0x32196105; 
@property(assign, nonatomic) BOOL shouldLaunchMobileMail;	// G=0x32196821; S=0x32196831; @synthesize=_shouldLaunch
+ (BOOL)shouldUseNewThreadingModel;	// 0x32195d15
+ (id)smi_serverCommandName;	// 0x32195cdd
+ (void)useNewThreadingModel;	// 0x32195d05
- (id)init;	// 0x32195d25
- (id)_activeAction;	// 0x3219679d
- (BOOL)_callMailServicesMethod:(id)method arg:(id)arg reply:(id *)reply error:(id *)error responseSelector:(SEL)selector;	// 0x321963fd
- (id)_copyServer;	// 0x32195e6d
- (id)_generateUnitTestReplyForMethod:(id)method arg:(id)arg error:(id *)error;	// 0x32195ef5
- (void)_generateUnitTestResponsesForResultArray:(id)resultArray;	// 0x32195ef9
- (void)_mailServiceDidTerminate:(id)_mailService;	// 0x32195efd
- (void)_setActiveAction:(id)action responseSelector:(SEL)selector;	// 0x32196265
- (void)_setServer:(id)server;	// 0x32196159
- (void)_smi_notifyClientDidFinishWithError:(id)_smi_notifyClient;	// 0x32195ec9
- (BOOL)_unitTestsAreEnabled;	// 0x32195ef1
- (void)cancel;	// 0x3219680d
- (void)dealloc;	// 0x32195df9
// declared property getter: - (id)delegate;	// 0x32196095
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32196105
// declared property setter: - (void)setShouldLaunchMobileMail:(BOOL)launchMobileMail;	// 0x32196831
// declared property getter: - (BOOL)shouldLaunchMobileMail;	// 0x32196821
@end

