/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSURLProtocolInternal;

@interface NSURLProtocol : NSObject {
@private
	NSURLProtocolInternal *_internal;	// 4 = 0x4
}
+ (id)_canonicalRequestForRequest:(id)request allowCF:(BOOL)cf;	// 0x3104a6d5
+ (id)_makeRequestCanonicalByMakingRequestURLCanonical:(id)canonical;	// 0x310ca74d
+ (Class)_protocolClassForRequest:(id)request;	// 0x3102de35
+ (Class)_protocolClassForRequest:(id)request allowCF:(BOOL)cf;	// 0x310123f1
+ (id)_protocolWithRequest:(id)request cachedResponse:(id)response client:(id)client allowCF:(BOOL)cf;	// 0x310ca679
+ (id)_registeredClasses;	// 0x31011d99
+ (void)_removePropertyForKey:(id)key inRequest:(id)request;	// 0x310ca7e9
+ (BOOL)_requestIsCacheEquivalent:(id)equivalent toRequest:(id)request allowCF:(BOOL)cf;	// 0x310ca4f9
+ (BOOL)canInitWithRequest:(id)request;	// 0x310ca45d
+ (id)canonicalRequestForRequest:(id)request;	// 0x310ca481
+ (id)propertyForKey:(id)key inRequest:(id)request;	// 0x310ca725
+ (BOOL)registerClass:(Class)aClass;	// 0x31036095
+ (void)removePropertyForKey:(id)key inRequest:(id)request;	// 0x310ca739
+ (BOOL)requestIsCacheEquivalent:(id)equivalent toRequest:(id)request;	// 0x310ca565
+ (void)setProperty:(id)property forKey:(id)key inRequest:(id)request;	// 0x3102ddcd
+ (void)unregisterClass:(Class)aClass;	// 0x310ca639
- (id)initWithRequest:(id)request cachedResponse:(id)response client:(id)client;	// 0x3104a4b5
- (void)_releaseProtocolClientReference;	// 0x3104b215
- (void)_resumeLoading;	// 0x310ca7e5
- (void)_suspendLoading;	// 0x310ca7e1
- (id)cachedResponse;	// 0x310ca6bd
- (id)client;	// 0x3104af11
- (void)dealloc;	// 0x3104b4dd
- (id)request;	// 0x3104af31
- (void)startLoading;	// 0x310ca6dd
- (void)stopLoading;	// 0x310ca701
@end
