/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <NSObject.h> // Unknown library

@class UIPDFPageView;
@protocol UIPDFSelectionWidget, NSObject;

@interface UIPDFSelectionController : NSObject {
	UIPDFPageView *_pageView;	// 4 = 0x4
	BOOL _rangeMode;	// 8 = 0x8
	id<NSObject, UIPDFSelectionWidget> _selectionWidget;	// 12 = 0xc
	BOOL _resizingWidget;	// 16 = 0x10
	CGPoint _selectionFixedPoint;	// 20 = 0x14
	CGRect _selectionBounds;	// 28 = 0x1c
	BOOL _preceeds;	// 44 = 0x2c
	BOOL _isTracking;	// 45 = 0x2d
	CGPoint _adjustedPoint;	// 48 = 0x30
	BOOL _hiding;	// 56 = 0x38
	long _firstIndex;	// 60 = 0x3c
	long _lastIndex;	// 64 = 0x40
	CGPoint _startPoint;	// 68 = 0x44
	BOOL _needsLayout;	// 76 = 0x4c
	BOOL _cancelled;	// 77 = 0x4d
	BOOL _instantModeIsSuspended;	// 78 = 0x4e
@private
	BOOL _instantHighlightMode;	// 79 = 0x4f
}
@property(readonly, assign, nonatomic) CGPoint adjustedPoint;	// G=0x33a86b31; @synthesize=_adjustedPoint
@property(readonly, assign, nonatomic) CGPoint currentSelectionPoint;	// G=0x33a86a55; 
@property(readonly, assign, nonatomic) CGPoint initialSelectionPoint;	// G=0x33a869ed; 
@property(assign, nonatomic) BOOL instantHighlightMode;	// G=0x33a86b49; S=0x33a86b59; @synthesize=_instantHighlightMode
@property(readonly, assign, nonatomic) BOOL isTracking;	// G=0x33a86b21; @synthesize=_isTracking
@property(assign, nonatomic) UIPDFPageView *pageView;	// G=0x33a86ae1; S=0x33a86af1; @synthesize=_pageView
@property(readonly, assign, nonatomic) BOOL rangeMode;	// G=0x33a86b01; @synthesize=_rangeMode
@property(readonly, assign, nonatomic) id<UIPDFSelectionWidget> selectionWidget;	// G=0x33a86b11; @synthesize=_selectionWidget
- (id)init;	// 0x33a84b9d
- (void)adjustSelection:(CGPoint)selection;	// 0x33a84e25
// declared property getter: - (CGPoint)adjustedPoint;	// 0x33a86b31
- (void)clearSelection;	// 0x33a857f5
// declared property getter: - (CGPoint)currentSelectionPoint;	// 0x33a86a55
- (void)dealloc;	// 0x33a84d05
- (void)endTracking:(CGPoint)tracking;	// 0x33a85fad
- (void)extendSelectionToParagraph;	// 0x33a8576d
- (void)hideWidget;	// 0x33a858dd
// declared property getter: - (CGPoint)initialSelectionPoint;	// 0x33a869ed
// declared property getter: - (BOOL)instantHighlightMode;	// 0x33a86b49
// declared property getter: - (BOOL)isTracking;	// 0x33a86b21
- (void)layoutSelections;	// 0x33a86abd
// declared property getter: - (id)pageView;	// 0x33a86ae1
// declared property getter: - (BOOL)rangeMode;	// 0x33a86b01
- (CGPoint)selectedPointOffset;	// 0x33a869bd
- (void)selectionHide:(id)hide;	// 0x33a84d61
- (void)selectionShow:(id)show;	// 0x33a84da5
- (void)selectionShowDelayed:(id)delayed;	// 0x33a84de9
// declared property getter: - (id)selectionWidget;	// 0x33a86b11
// declared property setter: - (void)setInstantHighlightMode:(BOOL)mode;	// 0x33a86b59
// declared property setter: - (void)setPageView:(id)view;	// 0x33a86af1
- (void)setSelectionFor:(CGPoint)aFor;	// 0x33a855b9
- (BOOL)shouldTrackAt:(CGPoint)at;	// 0x33a85901
- (void)startSelectingAt:(CGPoint)at;	// 0x33a859b5
- (void)startTracking:(CGPoint)tracking andPoint:(CGPoint)point;	// 0x33a86641
- (void)startTracking:(CGPoint)tracking showMagnifier:(BOOL *)magnifier;	// 0x33a85b09
- (void)suspendInstantHighlightMode;	// 0x33a864b9
- (void)tracking:(CGPoint)tracking andPoint:(CGPoint)point;	// 0x33a8684d
- (void)tracking:(CGPoint)tracking showMagnifier:(BOOL *)magnifier;	// 0x33a85d65
- (BOOL)useParagraphMode;	// 0x33a855b5
@end
