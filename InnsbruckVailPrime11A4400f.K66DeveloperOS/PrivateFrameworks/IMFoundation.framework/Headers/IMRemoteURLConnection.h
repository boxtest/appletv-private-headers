/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import </libobjc.A.h>

@class NSString, NSURLRequest;
@protocol OS_xpc_object;

@interface IMRemoteURLConnection : NSObject {
	NSURLRequest *_request;	// 4 = 0x4
	NSString *_bundleIdentifierForDataUsage;	// 8 = 0x8
	id _block;	// 12 = 0xc
	NSObject<OS_xpc_object> *_connection;	// 16 = 0x10
	BOOL _loading;	// 20 = 0x14
	BOOL _forceCellularIfPossible;	// 21 = 0x15
	int _retries;	// 24 = 0x18
}
@property(retain) NSString *bundleIdentifierForDataUsage;	// G=0x31233e91; S=0x31233ea5; @synthesize=_bundleIdentifierForDataUsage
@property(assign) BOOL forceCellularIfPossible;	// G=0x31233e61; S=0x31233e79; @synthesize=_forceCellularIfPossible
- (id)initWithURLRequest:(id)urlrequest completionBlock:(id)block;	// 0x312337c9
- (BOOL)_connect;	// 0x312336a5
- (BOOL)_disconnect;	// 0x3123363d
- (void)_disconnected;	// 0x312335d5
// declared property getter: - (id)bundleIdentifierForDataUsage;	// 0x31233e91
- (void)cancel;	// 0x31233df1
- (void)dealloc;	// 0x31233871
// declared property getter: - (BOOL)forceCellularIfPossible;	// 0x31233e61
- (void)load;	// 0x31233939
// declared property setter: - (void)setBundleIdentifierForDataUsage:(id)dataUsage;	// 0x31233ea5
// declared property setter: - (void)setForceCellularIfPossible:(BOOL)possible;	// 0x31233e79
@end

