/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "StoreServices-Structs.h"

@class SSDownload, SSXPCConnection, SSDownloadAsset;

@interface SSDownloadSession : NSObject {
@private
	SSXPCConnection *_controlConnection;	// 4 = 0x4
	dispatch_queue_s *_dispatchQueue;	// 8 = 0x8
	long long _sessionID;	// 12 = 0xc
}
@property(readonly, assign) SSDownload *download;	// G=0x33cb265d; 
@property(readonly, assign) SSDownloadAsset *downloadAsset;	// G=0x33cb2715; 
- (id)init;	// 0x33cb2599
- (void *)_copySessionPropertyWithKey:(const char *)key;	// 0x33cb283d
- (id)_initSSDownloadSession;	// 0x33cb2549
- (id)_initWithSessionIdentifier:(long long)sessionIdentifier controlConnection:(id)connection;	// 0x33cb25a9
- (void)dealloc;	// 0x33cb25fd
// declared property getter: - (id)download;	// 0x33cb265d
// declared property getter: - (id)downloadAsset;	// 0x33cb2715
- (unsigned)hash;	// 0x33cb27cd
- (BOOL)isEqual:(id)equal;	// 0x33cb27dd
@end
