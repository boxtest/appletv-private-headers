/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library

@class NSURLRequest;
@protocol OS_xpc_object;

@interface IMRemoteURLConnection : NSObject {
	NSURLRequest *_request;	// 4 = 0x4
	id _block;	// 8 = 0x8
	NSObject<OS_xpc_object> *_connection;	// 12 = 0xc
	BOOL _loading;	// 16 = 0x10
	BOOL _forceCellularIfPossible;	// 17 = 0x11
}
@property(assign) BOOL forceCellularIfPossible;	// G=0x36ece09d; S=0x36ece0b5; @synthesize=_forceCellularIfPossible
- (id)initWithURLRequest:(id)urlrequest completionBlock:(id)block;	// 0x36ecdaf5
- (BOOL)_connect;	// 0x36ecd9d5
- (BOOL)_disconnect;	// 0x36ecd96d
- (void)_disconnected;	// 0x36ecd905
- (void)cancel;	// 0x36ece02d
- (void)dealloc;	// 0x36ecdb9d
// declared property getter: - (BOOL)forceCellularIfPossible;	// 0x36ece09d
- (void)load;	// 0x36ecdc51
// declared property setter: - (void)setForceCellularIfPossible:(BOOL)possible;	// 0x36ece0b5
@end

