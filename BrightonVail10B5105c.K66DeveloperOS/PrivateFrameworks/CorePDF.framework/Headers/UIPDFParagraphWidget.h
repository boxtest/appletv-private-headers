/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "UIPDFSelectionWidget.h"
#import <NSObject.h> // Unknown library
#import "CorePDF-Structs.h"

@class CALayer, CAShapeLayer, UIPDFPageView;

@interface UIPDFParagraphWidget : NSObject <UIPDFSelectionWidget> {
	CAShapeLayer *_trackingBorder;	// 4 = 0x4
	CGRect _initialRect;	// 8 = 0x8
	BOOL _tracking;	// 24 = 0x18
	CGRect _currentTrackingRect;	// 28 = 0x1c
	CALayer *_leftGrabber;	// 44 = 0x2c
	CALayer *_rightGrabber;	// 48 = 0x30
	CALayer *_topGrabber;	// 52 = 0x34
	CALayer *_bottomGrabber;	// 56 = 0x38
	CALayer *_selectedGrabber;	// 60 = 0x3c
	CGRect _boundsInPDFSpace;	// 64 = 0x40
	UIPDFPageView *_pageView;	// 80 = 0x50
	CGPoint _initialSelectionPointOnPage;	// 84 = 0x54
}
@property(readonly, assign, nonatomic) CGPoint currentSelectionPointOnPage;	// G=0x3026ac55; 
@property(readonly, assign, nonatomic) CGPoint initialSelectionPointOnPage;	// G=0x3026ad3d; @synthesize=_initialSelectionPointOnPage
@property(assign, nonatomic) UIPDFPageView *pageView;	// G=0x3026ad1d; S=0x3026ad2d; @synthesize=_pageView
- (id)init;	// 0x302691a9
- (CGRect)adjustRect:(CGRect)rect toPoint:(CGPoint)point;	// 0x3026a50d
// declared property getter: - (CGPoint)currentSelectionPointOnPage;	// 0x3026ac55
- (void)dealloc;	// 0x302693b1
- (void)endTracking;	// 0x3026aadd
- (void)hide;	// 0x3026ac6d
- (BOOL)hitTest:(CGPoint)test fixedPoint:(CGPoint *)point preceeds:(BOOL *)preceeds;	// 0x30269b2d
// declared property getter: - (CGPoint)initialSelectionPointOnPage;	// 0x3026ad3d
- (void)layout;	// 0x3026a0d1
// declared property getter: - (id)pageView;	// 0x3026ad1d
- (void)remove;	// 0x30269a95
- (CGPoint)selectedPointFor:(CGPoint)aFor;	// 0x3026a0ad
- (CGRect)selectionBoundsInEffectsSpace;	// 0x302693f1
- (CGRect)selectionRectangle;	// 0x3026abed
// declared property setter: - (void)setPageView:(id)view;	// 0x3026ad2d
- (void)setSelectedGrabber:(unsigned)grabber;	// 0x3026a509
- (void)setSelectedGrabberPosition:(CGRect)position;	// 0x3026a60d
- (void)setSelection:(id)selection;	// 0x30269559
- (void)track:(CGPoint)track;	// 0x3026a70d
- (CGPoint)viewOffset;	// 0x3026a0b9
@end
