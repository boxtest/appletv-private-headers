/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CAContext.h"


__attribute__((visibility("hidden")))
@interface CAContextImpl : CAContext {
@private
	Context *_impl;	// 4 = 0x4
}
@property(assign) CGColorSpaceRef colorSpace;	// G=0x31b29a39; S=0x31b29c05; converted property
@property(retain) id layer;	// G=0x31a6f509; S=0x31a9c299; converted property
@property(assign) float level;	// G=0x31b29a4d; S=0x31a9c239; converted property
- (id)initRemoteWithOptions:(id)options;	// 0x31a9bc2d
- (id)initWithOptions:(id)options localContext:(bool)context;	// 0x31a9bc75
// converted property getter: - (CGColorSpaceRef)colorSpace;	// 0x31b29a39
- (unsigned)contextId;	// 0x31a9c695
- (unsigned)createFencePort;	// 0x31b29bb9
- (unsigned)createSlot;	// 0x31b29b51
- (void)dealloc;	// 0x31ac3949
- (void)deleteSlot:(unsigned)slot;	// 0x31b29b3d
- (void)invalidate;	// 0x31b29c19
// converted property getter: - (id)layer;	// 0x31a6f509
// converted property getter: - (float)level;	// 0x31b29a4d
- (id)options;	// 0x31b29a61
- (void)orderAbove:(unsigned)above;	// 0x31a9cfc5
- (void)orderBelow:(unsigned)below;	// 0x31b29bed
- (Context *)renderContext;	// 0x31b29a91
// converted property setter: - (void)setColorSpace:(CGColorSpaceRef)space;	// 0x31b29c05
- (void)setFence:(unsigned)fence count:(unsigned)count;	// 0x31b29b65
- (void)setFencePort:(unsigned)port;	// 0x31b29b91
// converted property setter: - (void)setLayer:(id)layer;	// 0x31a9c299
// converted property setter: - (void)setLevel:(float)level;	// 0x31a9c239
- (void)setObject:(id)object forSlot:(unsigned)slot;	// 0x31b29b29
- (BOOL)valid;	// 0x31b29a75
@end

