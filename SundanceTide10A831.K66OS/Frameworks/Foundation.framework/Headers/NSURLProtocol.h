/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSURLProtocolInternal;

@interface NSURLProtocol : NSObject {
	NSURLProtocolInternal *_internal;	// 4 = 0x4
}
+ (id)_canonicalRequestForRequest:(id)request allowCF:(BOOL)cf;	// 0x325d4971
+ (id)_makeRequestCanonicalByMakingRequestURLCanonical:(id)canonical;	// 0x325d4ddd
+ (Class)_protocolClassForRequest:(id)request;	// 0x32529ef5
+ (Class)_protocolClassForRequest:(id)request allowCF:(BOOL)cf;	// 0x325132b1
+ (id)_protocolWithRequest:(id)request cachedResponse:(id)response client:(id)client allowCF:(BOOL)cf;	// 0x325d4ba1
+ (id)_registeredClasses;	// 0x32529da5
+ (void)_removePropertyForKey:(id)key inRequest:(id)request;	// 0x325d4ef9
+ (BOOL)_requestIsCacheEquivalent:(id)equivalent toRequest:(id)request allowCF:(BOOL)cf;	// 0x325d4a1d
+ (BOOL)canInitWithRequest:(id)request;	// 0x325d494d
+ (id)canonicalRequestForRequest:(id)request;	// 0x325d49a5
+ (id)propertyForKey:(id)key inRequest:(id)request;	// 0x3250a145
+ (BOOL)registerClass:(Class)aClass;	// 0x32528a4d
+ (void)removePropertyForKey:(id)key inRequest:(id)request;	// 0x325d4dc9
+ (BOOL)requestIsCacheEquivalent:(id)equivalent toRequest:(id)request;	// 0x325d4a89
+ (void)setProperty:(id)property forKey:(id)key inRequest:(id)request;	// 0x325d4db5
+ (void)unregisterClass:(Class)aClass;	// 0x325d4b61
- (id)initWithRequest:(id)request cachedResponse:(id)response client:(id)client;	// 0x325d4be5
- (void)_releaseProtocolClientReference;	// 0x325d4e71
- (void)_resumeLoading;	// 0x325d4ef5
- (void)_suspendLoading;	// 0x325d4ef1
- (id)cachedResponse;	// 0x325d4d01
- (id)client;	// 0x325d4cc1
- (void)dealloc;	// 0x325d4d21
- (id)request;	// 0x325d4ce1
- (void)startLoading;	// 0x325d4d6d
- (void)stopLoading;	// 0x325d4d91
@end
