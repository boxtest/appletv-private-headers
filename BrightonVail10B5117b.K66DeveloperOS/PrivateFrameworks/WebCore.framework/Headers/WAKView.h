/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import "WAKResponder.h"

@class NSMutableSet;

@interface WAKView : WAKResponder {
	WKViewContext viewContext;	// 4 = 0x4
	WKView *viewRef;	// 28 = 0x1c
	NSMutableSet *subviewReferences;	// 32 = 0x20
	BOOL _isHidden;	// 36 = 0x24
	BOOL _drawsOwnDescendants;	// 37 = 0x25
}
@property(assign) unsigned autoresizingMask;	// G=0x36667ce5; S=0x35e39ac1; converted property
@property(assign) CGRect frame;	// G=0x35e39395; S=0x35f7361d; converted property
@property(assign) BOOL needsDisplay;	// G=0x36667bbd; S=0x35ea2629; converted property
@property(retain) id nextKeyView;	// G=0x35e8cfd1; S=0x35e39b11; converted property
@property(assign) float scale;	// G=0x35fc50ed; S=0x35e8f0e1; converted property
+ (void)_setInterpolationQuality:(int)quality;	// 0x35e8e891
+ (id)_wrapperForViewRef:(WKView *)viewRef;	// 0x366679bd
+ (id)focusView;	// 0x36667c05
- (id)init;	// 0x35f4db99
- (id)initWithFrame:(CGRect)frame;	// 0x35e38bd9
- (id).cxx_construct;	// 0x35e38bd1
- (void)_appendDescriptionToString:(id)string atLevel:(int)level;	// 0x36667e89
- (void)_drawRect:(CGRect)rect context:(CGContextRef)context lockFocus:(bool)focus;	// 0x35ec1ad5
- (BOOL)_handleResponderCall:(int)call;	// 0x35ed30ad
- (id)_initWithViewRef:(WKView *)viewRef;	// 0x35e38cb9
- (void)_lockFocusViewInContext:(CGContextRef)context;	// 0x35ec1d81
- (BOOL)_selfHandleEvent:(id)event;	// 0x360c2c21
- (void)_setDrawsOwnDescendants:(BOOL)descendants;	// 0x35e49e79
- (id)_subviewReferences;	// 0x35e3996d
- (void)_unlockFocusViewInContext:(CGContextRef)context;	// 0x35ec7949
- (WKView *)_viewRef;	// 0x35e398e5
- (BOOL)accessibilityIsIgnored;	// 0x360f0c81
- (void)addSubview:(id)subview;	// 0x35e3963d
// converted property getter: - (unsigned)autoresizingMask;	// 0x36667ce5
- (CGRect)bounds;	// 0x35e49dfd
- (CGPoint)convertPoint:(CGPoint)point fromView:(id)view;	// 0x35ebabb9
- (CGPoint)convertPoint:(CGPoint)point toView:(id)view;	// 0x35ebb875
- (CGRect)convertRect:(CGRect)rect fromView:(id)view;	// 0x35feb3c9
- (CGRect)convertRect:(CGRect)rect toView:(id)view;	// 0x35eb769d
- (CGSize)convertSize:(CGSize)size toView:(id)view;	// 0x360c11d9
- (void)dealloc;	// 0x35f75be5
- (id)description;	// 0x36667da1
- (void)display;	// 0x36667bc1
- (void)displayIfNeeded;	// 0x36667c01
- (void)displayRect:(CGRect)rect;	// 0x35ec1a69
- (void)displayRectIgnoringOpacity:(CGRect)opacity;	// 0x36667c49
- (void)displayRectIgnoringOpacity:(CGRect)opacity inContext:(CGContextRef)context;	// 0x35fee7ad
- (void)drawRect:(CGRect)rect;	// 0x35ec1e9d
// converted property getter: - (CGRect)frame;	// 0x35e39395
- (void)frameSizeChanged;	// 0x35e8f125
- (void)handleEvent:(id)event;	// 0x360c2bd9
- (id)hitTest:(CGPoint)test;	// 0x360c2a21
- (BOOL)inLiveResize;	// 0x36667cdd
- (void)invalidateGState;	// 0x35e9e695
- (BOOL)isDescendantOf:(id)of;	// 0x35ed44c9
- (id)lastScrollableAncestor;	// 0x36667a49
- (void)layout;	// 0x36667d99
- (void)layoutIfNeeded;	// 0x36667d9d
- (void)lockFocus;	// 0x36667c71
- (BOOL)mouse:(CGPoint)mouse inRect:(CGRect)rect;	// 0x360c2b59
// converted property getter: - (BOOL)needsDisplay;	// 0x36667bbd
- (BOOL)needsPanelToBecomeKey;	// 0x36667cbd
// converted property getter: - (id)nextKeyView;	// 0x35e8cfd1
- (id)nextResponder;	// 0x366679ad
- (id)nextValidKeyView;	// 0x36667ccd
- (id)previousKeyView;	// 0x36667cd1
- (id)previousValidKeyView;	// 0x36667cc5
- (void)releaseGState;	// 0x36667cd9
- (void)removeFromSuperview;	// 0x35e396d1
// converted property getter: - (float)scale;	// 0x35fc50ed
- (void)scrollPoint:(CGPoint)point;	// 0x3606c149
- (BOOL)scrollRectToVisible:(CGRect)visible;	// 0x36667cfd
// converted property setter: - (void)setAutoresizingMask:(unsigned)mask;	// 0x35e39ac1
- (void)setBoundsOrigin:(CGPoint)origin;	// 0x36667c31
- (void)setBoundsSize:(CGSize)size;	// 0x35e9e5d1
// converted property setter: - (void)setFrame:(CGRect)frame;	// 0x35f7361d
- (void)setFrameOrigin:(CGPoint)origin;	// 0x36667c19
- (void)setFrameSize:(CGSize)size;	// 0x35e8f1b9
- (void)setHidden:(BOOL)hidden;	// 0x35fd5bc9
// converted property setter: - (void)setNeedsDisplay:(BOOL)display;	// 0x35ea2629
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x35ea059d
- (void)setNeedsLayout:(BOOL)layout;	// 0x36667d95
// converted property setter: - (void)setNextKeyView:(id)view;	// 0x35e39b11
// converted property setter: - (void)setScale:(float)scale;	// 0x35e8f0e1
- (id)subviews;	// 0x35ec096d
- (id)superview;	// 0x35e3974d
- (void)unlockFocus;	// 0x36667c95
- (void)viewDidMoveToWindow;	// 0x35e8ed01
- (void)viewWillDraw;	// 0x35ec0939
- (CGRect)visibleRect;	// 0x35e955a5
- (void)willRemoveSubview:(id)subview;	// 0x35f7603d
- (id)window;	// 0x35e3e995
@end
