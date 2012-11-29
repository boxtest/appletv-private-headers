/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSURLAuthenticationChallengeSender.h"
#import "Foundation-Structs.h"

@class NSURLConnectionInternal;

@interface NSURLConnection : NSObject <NSURLAuthenticationChallengeSender> {
	NSURLConnectionInternal *_internal;	// 4 = 0x4
}
@property(assign) BOOL defersCallbacks;	// G=0x36140d19; S=0x36140ce5; converted property
+ (void)_resourceLoadLoop:(id)loop;	// 0x36098a99
+ (void)_setLoaderThreadPriority:(int)priority;	// 0x361407d9
+ (void)_setMIMETypesWithNoSizeLimit:(id)noSizeLimit;	// 0x361403b1
+ (void)_setSweeperInterval:(unsigned)interval;	// 0x36140df1
+ (unsigned)_sweeperInterval;	// 0x36140ded
+ (BOOL)canHandleRequest:(id)request;	// 0x36098ecd
+ (id)connectionWithRequest:(id)request delegate:(id)delegate;	// 0x36081829
+ (CFRunLoopRef)resourceLoaderRunLoop;	// 0x360824bd
+ (void)sendAsynchronousRequest:(id)request queue:(id)queue completionHandler:(id)handler;	// 0x36140a79
+ (id)sendSynchronousRequest:(id)request returningResponse:(id *)response error:(id *)error;	// 0x361408c9
- (id)initWithRequest:(id)request delegate:(id)delegate;	// 0x36081879
- (id)initWithRequest:(id)request delegate:(id)delegate startImmediately:(BOOL)immediately;	// 0x3614088d
- (id)_cfInternal;	// 0x36140d71
- (id)_dlInternal;	// 0x36140d1d
- (id)_initWithRequest:(id)request delegate:(id)delegate usesCache:(BOOL)cache maxContentLength:(long long)length startImmediately:(BOOL)immediately connectionProperties:(id)properties;	// 0x360818b5
- (void)_resumeLoading;	// 0x36140dd9
- (void)_suspendLoading;	// 0x36140dc5
- (void)cancel;	// 0x36140c55
- (void)cancelAuthenticationChallenge:(id)challenge;	// 0x3614082d
- (id)connectionProperties;	// 0x36140cc5
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)authenticationChallenge;	// 0x3614080d
- (id)currentRequest;	// 0x36140c95
- (void)dealloc;	// 0x36082809
// converted property getter: - (BOOL)defersCallbacks;	// 0x36140d19
- (void)download;	// 0x36140cb5
- (id)originalRequest;	// 0x360bd755
- (void)performDefaultHandlingForAuthenticationChallenge:(id)authenticationChallenge;	// 0x3614084d
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)challenge;	// 0x3614086d
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x360824ed
// converted property setter: - (void)setDefersCallbacks:(BOOL)callbacks;	// 0x36140ce5
- (void)setDelegateQueue:(id)queue;	// 0x36140c35
- (void)start;	// 0x360825ed
- (void)unscheduleFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x36140c75
- (void)useCredential:(id)credential forAuthenticationChallenge:(id)authenticationChallenge;	// 0x361407ed
@end
