/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <NSObject.h> // Unknown library
#import "QuartzCore-Structs.h"

@class CALayer, NSDictionary;

@interface CAContext : NSObject {
}
@property(assign) CGColorSpaceRef colorSpace;	// @dynamic
@property(readonly, assign) unsigned contextId;	// @dynamic
@property(retain) CALayer *layer;	// @dynamic
@property(assign) float level;	// @dynamic
@property(readonly, assign) NSDictionary *options;	// @dynamic
@property(readonly, assign) BOOL valid;	// @dynamic
+ (id)allContexts;	// 0x33f14aa5
+ (id)currentContext;	// 0x33f14dc1
+ (id)localContext;	// 0x33f14ac9
+ (id)localContextWithOptions:(id)options;	// 0x33f14add
+ (id)objectForSlot:(unsigned)slot;	// 0x33f14c41
+ (id)remoteContext;	// 0x33f14c2d
+ (id)remoteContextWithOptions:(id)options;	// 0x33e86be5
+ (void)setClientPort:(unsigned)port;	// 0x33e86bd5
- (unsigned)createFencePort;	// 0x33f14a21
- (unsigned)createSlot;	// 0x33f14a2d
- (void)deleteSlot:(unsigned)slot;	// 0x33f14a31
- (void)invalidate;	// 0x33f14a15
- (void)orderAbove:(unsigned)above;	// 0x33f14a19
- (void)orderBelow:(unsigned)below;	// 0x33f14a1d
- (void)setFence:(unsigned)fence count:(unsigned)count;	// 0x33f14a29
- (void)setFencePort:(unsigned)port;	// 0x33f14a25
- (void)setObject:(id)object forSlot:(unsigned)slot;	// 0x33f14a35
@end
