/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIActionSheet.h"

@class DOMNode, UIWebBrowserView;

__attribute__((visibility("hidden")))
@interface UIWebRotatingSheet : UIActionSheet {
@private
	BOOL _isRotating;	// 188 = 0xbc
	id _delegateWhileRotating;	// 192 = 0xc0
	DOMNode *_node;	// 196 = 0xc4
	BOOL _wasDeferringCallbacks;	// 200 = 0xc8
	CGPoint _fromPoint;	// 204 = 0xcc
	unsigned _arrowDirections;	// 212 = 0xd4
	UIWebBrowserView *_webBrowserView;	// 216 = 0xd8
	float _documentScale;	// 220 = 0xdc
}
@property(assign, nonatomic) unsigned arrowDirections;	// G=0x35a284c1; S=0x35a284d1; @synthesize=_arrowDirections
@property(retain, nonatomic) DOMNode *node;	// G=0x35a2848d; S=0x35a2849d; @synthesize=_node
- (id)initWithDOMNode:(id)domnode atLocation:(CGPoint)location;	// 0x35a27ae1
- (CGRect)_calculatePresentationRect;	// 0x35a27f9d
- (void)_disableWebView;	// 0x35a27c91
- (void)_enableWebView;	// 0x35a27d41
- (void)_handleDidRotate;	// 0x35a28181
- (BOOL)_presentSheetWithDisabledWebView:(CGRect)disabledWebView;	// 0x35a27e59
// declared property getter: - (unsigned)arrowDirections;	// 0x35a284c1
- (void)dealloc;	// 0x35a27db9
- (void)didRotate:(id)rotate;	// 0x35a2845d
- (void)doneWithSheet;	// 0x35a27f21
// declared property getter: - (id)node;	// 0x35a2848d
- (BOOL)presentSheet;	// 0x35a2805d
// declared property setter: - (void)setArrowDirections:(unsigned)directions;	// 0x35a284d1
// declared property setter: - (void)setNode:(id)node;	// 0x35a2849d
- (void)willRotate:(id)rotate;	// 0x35a28119
@end

