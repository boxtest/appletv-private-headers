/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "SSDownloadManagerObserver.h"
#import "NSURLConnectionInternal.h"
#import "SSDownloadHandlerDelegate.h"
#import "Foundation-Structs.h"
#import "NSURLConnectionRequired.h"

@class NSMutableArray, SSDownloadHandler, NSCountedSet, NSTimer, AsyncSSDownloadManager;

__attribute__((visibility("hidden")))
@interface NSURLConnectionInternalBackgroundDownload : NSURLConnectionInternal <NSURLConnectionRequired, SSDownloadManagerObserver, SSDownloadHandlerDelegate> {
@private
	CFRunLoopSourceRef _source;	// 36 = 0x24
	NSMutableArray *_pendingOps;	// 40 = 0x28
	NSCountedSet *_runloops;	// 44 = 0x2c
	SSDownloadHandler *_handler;	// 48 = 0x30
	AsyncSSDownloadManager *_manager;	// 52 = 0x34
	long long _downloadIdent;	// 56 = 0x38
	long long _ctLast;	// 64 = 0x40
	BOOL _terminated;	// 72 = 0x48
	NSTimer *_deferredStartTimer;	// 76 = 0x4c
}
+ (void)_enableLogging;	// 0x3169f585
+ (id)sharedDownloadManagerForMediaKind:(id)mediaKind persistenceIdentifier:(id)identifier;	// 0x3169d099
- (id)initWithInfo:(const InternalInit *)info;	// 0x3169d3a5
- (void)_createNewDownload;	// 0x3169dfbd
- (long long)_getDownloadIdent;	// 0x3169f5c1
- (void)_invalidate;	// 0x3169db61
- (void)_invokeInvocation:(id)invocation withConnection:(id)connection;	// 0x3169d7dd
- (void)_managerFailedToStartInTime;	// 0x3169dd6d
- (void)_postTerminalInvocation:(id)invocation;	// 0x3169d879
- (void)_preTerminalInvocation:(id)invocation;	// 0x3169d859
- (void)_sendTerminalDidFinishToDelegate:(id)_sendTerminal;	// 0x3169d9fd
- (void)_sendTerminalErrorToDelegate:(id)delegate;	// 0x3169d899
- (void)_sourcePerform;	// 0x3169ecf9
- (void)_updateClientWithCurrentWrites:(id)currentWrites;	// 0x3169f3d9
- (void)_updateDownloadState:(id)state;	// 0x3169f5d9
- (void)cancel;	// 0x3169ebd9
- (void)cancelAuthenticationChallenge:(id)challenge;	// 0x3169f99d
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)authenticationChallenge;	// 0x3169f951
- (void)dealloc;	// 0x3169dd09
- (id)description;	// 0x3169d4e5
- (void)downloadHandler:(id)handler cancelSession:(id)session;	// 0x3169f1e1
- (void)downloadHandler:(id)handler handleAuthenticationSession:(id)session;	// 0x3169f251
- (BOOL)downloadHandler:(id)handler pauseSession:(id)session;	// 0x3169f24d
- (void)downloadHandlerDidDisconnect:(id)downloadHandler;	// 0x3169f18d
- (void)invokeForDelegate:(id)delegate;	// 0x3169d565
- (void)performDefaultHandlingForAuthenticationChallenge:(id)authenticationChallenge;	// 0x3169f9e9
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)challenge;	// 0x3169fa35
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x3169edb9
- (void)setDelegateQueue:(id)queue;	// 0x3169f0d5
- (void)setHandlerForDownload:(id)download completionBlock:(id)block;	// 0x3169dddd
- (void)start;	// 0x3169e499
- (void)unscheduleFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x3169efd5
- (void)useCredential:(id)credential forAuthenticationChallenge:(id)authenticationChallenge;	// 0x3169f905
@end

