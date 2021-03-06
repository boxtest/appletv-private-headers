/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class SSXPCConnection, SSDownload, SSDownloadAsset;
@protocol OS_dispatch_queue;

@interface SSDownloadSession : NSObject {
	SSXPCConnection *_controlConnection;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
	long long _sessionID;	// 12 = 0xc
}
@property(readonly, assign) SSDownload *download;	// G=0x354f4899; 
@property(readonly, assign) SSDownloadAsset *downloadAsset;	// G=0x354f4951; 
- (id)init;	// 0x354f47d5
- (id)_copySessionPropertyWithKey:(const char *)key;	// 0x354f4a75
- (id)_initSSDownloadSession;	// 0x354f4785
- (id)_initWithSessionIdentifier:(long long)sessionIdentifier controlConnection:(id)connection;	// 0x354f47e5
- (void)dealloc;	// 0x354f4839
// declared property getter: - (id)download;	// 0x354f4899
// declared property getter: - (id)downloadAsset;	// 0x354f4951
- (unsigned)hash;	// 0x354f4a09
- (BOOL)isEqual:(id)equal;	// 0x354f4a19
@end

