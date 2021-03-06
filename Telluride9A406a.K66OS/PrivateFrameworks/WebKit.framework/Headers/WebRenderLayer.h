/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"

@class NSArray, NSString;

@interface WebRenderLayer : NSObject {
@private
	NSArray *children;	// 4 = 0x4
	NSString *name;	// 8 = 0x8
	NSString *compositingInfo;	// 12 = 0xc
	CGRect bounds;	// 16 = 0x10
	BOOL composited;	// 32 = 0x20
	BOOL separator;	// 33 = 0x21
}
@property(readonly, retain) NSArray *children;	// G=0x303099bd; converted property
@property(readonly, assign, getter=isComposited) BOOL composited;	// G=0x303099ed; converted property
@property(readonly, retain) NSString *compositingInfo;	// G=0x303099dd; converted property
@property(readonly, retain) NSString *name;	// G=0x303099cd; converted property
@property(readonly, assign, getter=isSeparator) BOOL separator;	// G=0x303099fd; converted property
+ (id)compositingInfoForLayer:(RenderLayer *)layer;	// 0x30309a75
+ (id)nameForLayer:(RenderLayer *)layer;	// 0x30309b1d
- (id)initWithName:(id)name;	// 0x30309a0d
- (id)initWithRenderLayer:(RenderLayer *)renderLayer;	// 0x3030a539
- (id)initWithWebFrame:(id)webFrame;	// 0x3030a3e1
- (void)buildDescendantLayers:(RenderLayer *)layers;	// 0x3030a061
// converted property getter: - (id)children;	// 0x303099bd
// converted property getter: - (id)compositingInfo;	// 0x303099dd
- (void)dealloc;	// 0x3030a36d
- (id)heightString;	// 0x30309f69
// converted property getter: - (BOOL)isComposited;	// 0x303099ed
// converted property getter: - (BOOL)isSeparator;	// 0x303099fd
// converted property getter: - (id)name;	// 0x303099cd
- (id)positionString;	// 0x3030a009
- (id)widthString;	// 0x30309fb9
@end

