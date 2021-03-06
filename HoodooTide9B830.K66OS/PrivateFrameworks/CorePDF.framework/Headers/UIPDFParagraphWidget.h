/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CorePDF-Structs.h"
#import "UIPDFSelectionWidget.h"

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
@property(readonly, assign, nonatomic) CGPoint currentSelectionPointOnPage;	// G=0x310c0dd5; 
@property(readonly, assign, nonatomic) CGPoint initialSelectionPointOnPage;	// G=0x310c0ded; @synthesize=_initialSelectionPointOnPage
@property(assign, nonatomic) UIPDFPageView *pageView;	// G=0x310c0e05; S=0x310c0e15; @synthesize=_pageView
- (id)init;	// 0x310c278d
- (CGRect)adjustRect:(CGRect)rect toPoint:(CGPoint)point;	// 0x310c1641
// declared property getter: - (CGPoint)currentSelectionPointOnPage;	// 0x310c0dd5
- (void)dealloc;	// 0x310c0ec1
- (void)endTracking;	// 0x310c100d
- (void)hide;	// 0x310c0f01
- (BOOL)hitTest:(CGPoint)test fixedPoint:(CGPoint *)point preceeds:(BOOL *)preceeds;	// 0x310c1bc9
// declared property getter: - (CGPoint)initialSelectionPointOnPage;	// 0x310c0ded
- (void)layout;	// 0x310c1731
// declared property getter: - (id)pageView;	// 0x310c0e05
- (void)remove;	// 0x310c20dd
- (CGPoint)selectedPointFor:(CGPoint)aFor;	// 0x310c0db1
- (CGRect)selectionBoundsInEffectsSpace;	// 0x310c267d
- (CGRect)selectionRectangle;	// 0x310c0fb1
// declared property setter: - (void)setPageView:(id)view;	// 0x310c0e15
- (void)setSelectedGrabber:(unsigned)grabber;	// 0x310c0dd1
- (void)setSelectedGrabberPosition:(CGRect)position;	// 0x310c1541
- (void)setSelection:(id)selection;	// 0x310c217d
- (void)track:(CGPoint)track;	// 0x310c1105
- (CGPoint)viewOffset;	// 0x310c0db9
@end

