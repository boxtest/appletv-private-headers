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
@property(assign) unsigned autoresizingMask;	// G=0x36f52ce5; S=0x36724981; converted property
@property(assign) CGRect frame;	// G=0x36724255; S=0x3685e4dd; converted property
@property(assign) BOOL needsDisplay;	// G=0x36f52bbd; S=0x3678d4c1; converted property
@property(retain) id nextKeyView;	// G=0x36777e61; S=0x367249d1; converted property
@property(assign) float scale;	// G=0x368affbd; S=0x36779f71; converted property
+ (void)_setInterpolationQuality:(int)quality;	// 0x36779721
+ (id)_wrapperForViewRef:(WKView *)viewRef;	// 0x36f529bd
+ (id)focusView;	// 0x36f52c05
- (id)init;	// 0x36838a61
- (id)initWithFrame:(CGRect)frame;	// 0x36723a99
- (id).cxx_construct;	// 0x36723a91
- (void)_appendDescriptionToString:(id)string atLevel:(int)level;	// 0x36f52e89
- (void)_drawRect:(CGRect)rect context:(CGContextRef)context lockFocus:(bool)focus;	// 0x367ac96d
- (BOOL)_handleResponderCall:(int)call;	// 0x367bdf45
- (id)_initWithViewRef:(WKView *)viewRef;	// 0x36723b79
- (void)_lockFocusViewInContext:(CGContextRef)context;	// 0x367acc19
- (BOOL)_selfHandleEvent:(id)event;	// 0x369adad1
- (void)_setDrawsOwnDescendants:(BOOL)descendants;	// 0x36734d39
- (id)_subviewReferences;	// 0x3672482d
- (void)_unlockFocusViewInContext:(CGContextRef)context;	// 0x367b27e1
- (WKView *)_viewRef;	// 0x367247a5
- (BOOL)accessibilityIsIgnored;	// 0x369dbb31
- (void)addSubview:(id)subview;	// 0x367244fd
// converted property getter: - (unsigned)autoresizingMask;	// 0x36f52ce5
- (CGRect)bounds;	// 0x36734cbd
- (CGPoint)convertPoint:(CGPoint)point fromView:(id)view;	// 0x367a5a51
- (CGPoint)convertPoint:(CGPoint)point toView:(id)view;	// 0x367a670d
- (CGRect)convertRect:(CGRect)rect fromView:(id)view;	// 0x368d62a1
- (CGRect)convertRect:(CGRect)rect toView:(id)view;	// 0x367a2535
- (CGSize)convertSize:(CGSize)size toView:(id)view;	// 0x369ac089
- (void)dealloc;	// 0x36860aa5
- (id)description;	// 0x36f52da1
- (void)display;	// 0x36f52bc1
- (void)displayIfNeeded;	// 0x36f52c01
- (void)displayRect:(CGRect)rect;	// 0x367ac901
- (void)displayRectIgnoringOpacity:(CGRect)opacity;	// 0x36f52c49
- (void)displayRectIgnoringOpacity:(CGRect)opacity inContext:(CGContextRef)context;	// 0x368d9685
- (void)drawRect:(CGRect)rect;	// 0x367acd35
// converted property getter: - (CGRect)frame;	// 0x36724255
- (void)frameSizeChanged;	// 0x36779fb5
- (void)handleEvent:(id)event;	// 0x369ada89
- (id)hitTest:(CGPoint)test;	// 0x369ad8d1
- (BOOL)inLiveResize;	// 0x36f52cdd
- (void)invalidateGState;	// 0x36789525
- (BOOL)isDescendantOf:(id)of;	// 0x367bf361
- (id)lastScrollableAncestor;	// 0x36f52a49
- (void)layout;	// 0x36f52d99
- (void)layoutIfNeeded;	// 0x36f52d9d
- (void)lockFocus;	// 0x36f52c71
- (BOOL)mouse:(CGPoint)mouse inRect:(CGRect)rect;	// 0x369ada09
// converted property getter: - (BOOL)needsDisplay;	// 0x36f52bbd
- (BOOL)needsPanelToBecomeKey;	// 0x36f52cbd
// converted property getter: - (id)nextKeyView;	// 0x36777e61
- (id)nextResponder;	// 0x36f529ad
- (id)nextValidKeyView;	// 0x36f52ccd
- (id)previousKeyView;	// 0x36f52cd1
- (id)previousValidKeyView;	// 0x36f52cc5
- (void)releaseGState;	// 0x36f52cd9
- (void)removeFromSuperview;	// 0x36724591
// converted property getter: - (float)scale;	// 0x368affbd
- (void)scrollPoint:(CGPoint)point;	// 0x36957019
- (BOOL)scrollRectToVisible:(CGRect)visible;	// 0x36f52cfd
// converted property setter: - (void)setAutoresizingMask:(unsigned)mask;	// 0x36724981
- (void)setBoundsOrigin:(CGPoint)origin;	// 0x36f52c31
- (void)setBoundsSize:(CGSize)size;	// 0x36789461
// converted property setter: - (void)setFrame:(CGRect)frame;	// 0x3685e4dd
- (void)setFrameOrigin:(CGPoint)origin;	// 0x36f52c19
- (void)setFrameSize:(CGSize)size;	// 0x3677a049
- (void)setHidden:(BOOL)hidden;	// 0x368c0a99
// converted property setter: - (void)setNeedsDisplay:(BOOL)display;	// 0x3678d4c1
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x3678b42d
- (void)setNeedsLayout:(BOOL)layout;	// 0x36f52d95
// converted property setter: - (void)setNextKeyView:(id)view;	// 0x367249d1
// converted property setter: - (void)setScale:(float)scale;	// 0x36779f71
- (id)subviews;	// 0x367ab805
- (id)superview;	// 0x3672460d
- (void)unlockFocus;	// 0x36f52c95
- (void)viewDidMoveToWindow;	// 0x36779b91
- (void)viewWillDraw;	// 0x367ab7d1
- (CGRect)visibleRect;	// 0x36780435
- (void)willRemoveSubview:(id)subview;	// 0x36860efd
- (id)window;	// 0x36729855
@end
