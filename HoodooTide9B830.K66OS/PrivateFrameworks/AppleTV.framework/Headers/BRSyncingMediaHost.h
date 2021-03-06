/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRRemoteMediaHost.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface BRSyncingMediaHost : BRRemoteMediaHost {
@private
	NSString *_hostID;	// 48 = 0x30
}
@property(readonly, retain) NSString *hostID;	// G=0x32a7e00d; converted property
+ (id)syncingMediaHostWithHostInfo:(id)hostInfo;	// 0x32a7de61
- (id)init;	// 0x32a7dea1
- (id)initWithCoder:(id)coder;	// 0x32a7df21
- (id)initWithHostInfo:(id)hostInfo;	// 0x32a7dee1
- (void)dealloc;	// 0x32a7dfc1
// converted property getter: - (id)hostID;	// 0x32a7e00d
- (id)hostname;	// 0x32a7e04d
- (void)setState:(id)state;	// 0x32a7e0a5
@end

