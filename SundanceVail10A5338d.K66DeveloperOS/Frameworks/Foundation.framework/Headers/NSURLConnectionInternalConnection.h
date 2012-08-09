/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSURLConnectionInternal.h"
#import "NSURLConnectionRequired.h"

@class NSURLAuthenticationChallenge;

__attribute__((visibility("hidden")))
@interface NSURLConnectionInternalConnection : NSURLConnectionInternal <NSURLConnectionRequired> {
	int _cfConnLock;	// 36 = 0x24
	CFURLConnectionRef _cfConn;	// 40 = 0x28
	CFURLAuthChallengeRef _currCFChallenge;	// 44 = 0x2c
	NSURLAuthenticationChallenge *_currNSChallenge;	// 48 = 0x30
	CFStringRef _fileName;	// 52 = 0x34
	bool _shouldSkipCancelOnRelease;	// 56 = 0x38
	long long _totalBytes;	// 60 = 0x3c
	long long _expectedTotalBytes;	// 68 = 0x44
}
- (id)initWithInfo:(const InternalInit *)info;	// 0x373224d1
- (CFURLConnectionRef)_CFURLConnection;	// 0x373d2369
- (CFURLConnectionRef)_atomic_CFURLConnection;	// 0x373d2379
- (void)_invalidate;	// 0x37322e61
- (void)_resumeLoading;	// 0x373d2521
- (CFURLConnectionRef)_retainCFURLConnection;	// 0x373d23ad
- (void)_setDelegateQueue:(id)queue;	// 0x373d23fd
- (void)_setShouldSkipCancelOnRelease:(bool)_set;	// 0x373d2559
- (void)_suspendLoading;	// 0x373d24e9
- (void)cancel;	// 0x3733f3c5
- (void)cancelAuthenticationChallenge:(id)challenge;	// 0x373d26bd
- (void)cleanupChallenges;	// 0x373d2569
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)authenticationChallenge;	// 0x373d2649
- (void)dealloc;	// 0x373235b9
- (void)invokeForDelegate:(id)delegate;	// 0x37322d05
- (void)performDefaultHandlingForAuthenticationChallenge:(id)authenticationChallenge;	// 0x373d2845
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)challenge;	// 0x373d28b5
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x373229fd
- (void)sendCFChallenge:(CFURLAuthChallengeRef)challenge toSelector:(SEL)selector;	// 0x373d19cd
- (void)start;	// 0x37322aad
- (void)unscheduleFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x373d2495
- (void)useCredential:(id)credential forAuthenticationChallenge:(id)authenticationChallenge;	// 0x373d25b9
@end
