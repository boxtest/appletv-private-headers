/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class BRControl;

@interface BRWindow : NSObject {
@private
	BRControl *_content;	// 4 = 0x4
	BRControl *_plane;	// 8 = 0x8
	int _level;	// 12 = 0xc
	BOOL _orderedIn;	// 16 = 0x10
	BOOL _opaque;	// 17 = 0x11
}
@property(assign) BOOL acceptsFocus;	// G=0x35da4f35; S=0x35da4f15; converted property
@property(retain) BRControl *content;	// G=0x35da4d31; S=0x35da4c8d; converted property
@property(assign) BOOL isOpaque;	// G=0x35da4f59; S=0x35da4ed1; converted property
@property(assign) int level;	// G=0x35da4d85; S=0x35da4d41; converted property
@property(readonly, assign, getter=isOrderedIn) BOOL orderedIn;	// G=0x35da4f69; converted property
+ (void)_establishRootContext;	// 0x35da4f79
+ (void)_establishRootLayerBounds;	// 0x35da52b5
+ (void)adjustToDisplayChange;	// 0x35da4af9
+ (BOOL)dispatchEvent:(id)event;	// 0x35da56e9
+ (id)focusedLeafControl;	// 0x35da5721
+ (void)initialize;	// 0x35da4999
+ (CGRect)interfaceFrame;	// 0x35da4ad9
+ (CGSize)maxBounds;	// 0x35da4ac5
+ (id)rootLayer;	// 0x35da5575
+ (void)setMaxBounds:(CGSize)bounds;	// 0x35da55a1
+ (id)window;	// 0x35da4a8d
+ (id)windowList;	// 0x35da5591
- (id)init;	// 0x35da4b4d
- (void)_addWindow:(id)window atIndex:(long)index;	// 0x35da5a39
- (id)_controlPlane;	// 0x35da574d
- (void)_orderWindow:(id)window above:(id)above;	// 0x35da598d
- (void)_orderWindow:(id)window below:(id)below;	// 0x35da58e5
- (void)_orderWindowBack:(id)back;	// 0x35da5851
- (void)_orderWindowFront:(id)front;	// 0x35da57bd
- (void)_orderWindowOut:(id)anOut;	// 0x35da575d
- (void)_updateContent;	// 0x35da5c8d
- (void)_updateRenderedWindows;	// 0x35da5ae9
// converted property getter: - (BOOL)acceptsFocus;	// 0x35da4f35
// converted property getter: - (id)content;	// 0x35da4d31
- (void)dealloc;	// 0x35da4bfd
// converted property getter: - (BOOL)isOpaque;	// 0x35da4f59
// converted property getter: - (BOOL)isOrderedIn;	// 0x35da4f69
// converted property getter: - (int)level;	// 0x35da4d85
- (void)orderAbove:(id)above;	// 0x35da4e8d
- (void)orderBack;	// 0x35da4e09
- (void)orderBelow:(id)below;	// 0x35da4e49
- (void)orderFront;	// 0x35da4dc9
- (void)orderOut;	// 0x35da4d95
// converted property setter: - (void)setAcceptsFocus:(BOOL)focus;	// 0x35da4f15
// converted property setter: - (void)setContent:(id)content;	// 0x35da4c8d
// converted property setter: - (void)setIsOpaque:(BOOL)opaque;	// 0x35da4ed1
// converted property setter: - (void)setLevel:(int)level;	// 0x35da4d41
@end

