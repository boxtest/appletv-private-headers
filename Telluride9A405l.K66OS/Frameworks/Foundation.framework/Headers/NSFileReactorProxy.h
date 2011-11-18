/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSFileAccessNode;

__attribute__((visibility("hidden")))
@interface NSFileReactorProxy : NSObject {
@private
	xpc_connection_s *_client;	// 4 = 0x4
	id _reactorID;	// 8 = 0x8
	id _messageSender;	// 12 = 0xc
	NSFileAccessNode *_itemLocation;	// 16 = 0x10
}
@property(readonly, assign) xpc_connection_s *client;	// G=0x3036afe9; converted property
@property(retain) NSFileAccessNode *itemLocation;	// G=0x3036b06d; S=0x3036b069; converted property
@property(readonly, retain) id messageSender;	// G=0x3036b031; converted property
@property(readonly, retain) id reactorID;	// G=0x3036aff9; converted property
- (id)initWithClient:(xpc_connection_s *)client reactorID:(id)anId messageSender:(id)sender;	// 0x3036ae9d
// converted property getter: - (xpc_connection_s *)client;	// 0x3036afe9
- (void)dealloc;	// 0x3036af35
- (id)description;	// 0x3036b155
- (id)descriptionWithIndenting:(id)indenting;	// 0x3036b0a9
- (void)finalize;	// 0x3036afa9
- (void)forwardUsingMessageSender:(id)sender;	// 0x3036b0a5
// converted property getter: - (id)itemLocation;	// 0x3036b06d
// converted property getter: - (id)messageSender;	// 0x3036b031
// converted property getter: - (id)reactorID;	// 0x3036aff9
// converted property setter: - (void)setItemLocation:(id)location;	// 0x3036b069
@end

