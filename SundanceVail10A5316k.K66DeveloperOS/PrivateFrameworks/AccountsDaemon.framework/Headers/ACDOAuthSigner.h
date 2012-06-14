/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import "AccountsDaemon-Structs.h"
#import <NSObject.h> // Unknown library
#import "XPCProxyTarget.h"
#import "ACDOAuthSignerProtocol.h"

@class ACDAccountStore, NSManagedObjectContext;

@interface ACDOAuthSigner : NSObject <ACDOAuthSignerProtocol, XPCProxyTarget> {
	xpc_connection_s *_connection;	// 4 = 0x4
	dispatch_queue_s *connectionQueue;	// 8 = 0x8
	NSManagedObjectContext *_managedObjectContext;	// 12 = 0xc
	ACDAccountStore *_accountStore;	// 16 = 0x10
	BOOL _shouldIncludeAppIdInRequest;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSManagedObjectContext *managedObjectContext;	// G=0x324a73b1; @synthesize=_managedObjectContext
- (id)initWithConnection:(xpc_connection_s *)connection managedObjectContext:(id)context;	// 0x324a604d
- (id)initWithManagedObjectContext:(id)managedObjectContext;	// 0x324a6159
- (void).cxx_destruct;	// 0x324a73d1
- (id)ckForAccountType:(id)accountType;	// 0x324a6fc5
- (id)csForAccountType:(id)accountType;	// 0x324a7145
// declared property getter: - (id)managedObjectContext;	// 0x324a73b1
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x324a71f1
- (void)setShouldIncludeAppIdInRequest:(id)includeAppIdInRequest;	// 0x324a6181
- (void)signURLRequest:(id)request withAccount:(id)account applicationID:(id)anId timestamp:(id)timestamp handler:(id)handler;	// 0x324a6a89
- (void)signURLRequest:(id)request withAccount:(id)account callingPID:(id)pid timestamp:(id)timestamp handler:(id)handler;	// 0x324a6489
- (id)signedRequest:(id)request withAccountObject:(id)accountObject applicationID:(id)anId timestamp:(id)timestamp;	// 0x324a61a9
@end
