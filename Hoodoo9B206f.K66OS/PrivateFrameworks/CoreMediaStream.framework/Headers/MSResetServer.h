/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library
#import "MSResetServerProtocolDelegate.h"

@class NSString, MSResetServerProtocol, MSMediaStreamDaemon;

@interface MSResetServer : NSObject <MSResetServerProtocolDelegate> {
@private
	NSString *_personID;	// 4 = 0x4
	MSResetServerProtocol *_protocol;	// 8 = 0x8
	MSMediaStreamDaemon *_daemon;	// 12 = 0xc
}
@property(assign, nonatomic) MSMediaStreamDaemon *daemon;	// G=0x304ddb01; S=0x304ddb11; @synthesize=_daemon
@property(readonly, assign, nonatomic) NSString *personID;	// G=0x304ddaf1; @synthesize=_personID
+ (id)resetServerObjectWithPersonID:(id)personID baseURL:(id)url;	// 0x304dd7f5
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x304dd835
// declared property getter: - (id)daemon;	// 0x304ddb01
- (void)dealloc;	// 0x304dd8c1
// declared property getter: - (id)personID;	// 0x304ddaf1
- (void)resetServer;	// 0x304dd921
- (void)resetServerProtocol:(id)protocol didFinishWithError:(id)error;	// 0x304dd995
- (void)resetServerProtocol:(id)protocol didReceiveAuthenticationError:(id)error;	// 0x304dda51
// declared property setter: - (void)setDaemon:(id)daemon;	// 0x304ddb11
@end
