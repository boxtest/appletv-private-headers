/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "UIGestureRecognizerDelegate.h"
#import <NSObject.h> // Unknown library

@class UIPDFMarkupAnnotation, CALayer, NSMutableArray, UIPDFPageView, UIPDFAnnotation;
@protocol UIPDFAnnotationControllerDelegate;

@interface UIPDFAnnotationController : NSObject <UIGestureRecognizerDelegate> {
	NSMutableArray *_annotations;	// 4 = 0x4
	UIPDFPageView *_pageView;	// 8 = 0x8
	int _lock;	// 12 = 0xc
	CGPoint _startPoint;	// 16 = 0x10
	BOOL _moving;	// 24 = 0x18
	UIPDFMarkupAnnotation *_currentAnnotation;	// 28 = 0x1c
	XXStruct_ny2fMB _initialRange;	// 32 = 0x20
	BOOL _tracking;	// 40 = 0x28
	CGColorRef _color[7];	// 44 = 0x2c
	CALayer *_drawingSurface;	// 72 = 0x48
	id<NSObject, UIPDFAnnotationControllerDelegate> _delegate;	// 76 = 0x4c
	CGSize _cachedMarginNoteSize;	// 80 = 0x50
@private
	int currentStyle;	// 88 = 0x58
@protected
	BOOL makeUnderlineAnnotation;	// 92 = 0x5c
}
@property(retain, nonatomic) UIPDFAnnotation *currentAnnotation;	// G=0x338978c9; S=0x338978d9; @synthesize=_currentAnnotation
@property(assign, nonatomic) int currentStyle;	// G=0x338978fd; S=0x3389790d; @synthesize
@property(assign, nonatomic) id<NSObject, UIPDFAnnotationControllerDelegate> delegate;	// G=0x33897975; S=0x33897985; @synthesize=_delegate
@property(retain) CALayer *drawingSurface;	// G=0x3389793d; S=0x33897951; @synthesize=_drawingSurface
@property(assign, nonatomic) BOOL makeUnderlineAnnotation;	// G=0x3389791d; S=0x3389792d; @synthesize
@property(readonly, assign, nonatomic) BOOL tracking;	// G=0x33897995; @synthesize=_tracking
+ (CGImageRef)newMaskImage:(CGPDFPageRef)image size:(CGSize)size;	// 0x33897619
+ (BOOL)pageHasAnnotations:(id)annotations;	// 0x33893ebd
- (id)init;	// 0x3389408d
- (id)initWithPageView:(id)pageView;	// 0x3389425d
- (void)_addAnnotationViewFor:(id)aFor;	// 0x338955dd
- (void)_initialRange:(CGPoint)range;	// 0x33896b5d
- (void)addAnnotation:(id)annotation;	// 0x33894999
- (void)addAnnotationsInPage;	// 0x33894655
- (void)addDrawingSurface:(id)surface view:(id)view;	// 0x33895259
- (BOOL)addLinkAnnotationsInPage;	// 0x3389440d
- (id)annotatePageSelection;	// 0x33897479
- (BOOL)annotationLongPressRecognized:(id)recognized;	// 0x338971a5
- (BOOL)annotationSingleTapRecognized:(id)recognized;	// 0x338972f5
- (void)annotationTapRecognized:(id)recognized;	// 0x338961e9
- (id)annotationWithIndex:(unsigned)index;	// 0x33894581
- (CGColorRef)colorForStyle:(int)style;	// 0x33897465
- (CGPoint)convertPoint:(CGPoint)point toSurfaceLayer:(id)surfaceLayer;	// 0x3389505d
- (CGRect)convertRect:(CGRect)rect toSurfaceLayer:(id)surfaceLayer;	// 0x33895141
- (void)copyAttributesOf:(id)of to:(id)to;	// 0x338975c1
// declared property getter: - (id)currentAnnotation;	// 0x338978c9
// declared property getter: - (int)currentStyle;	// 0x338978fd
- (void)dealloc;	// 0x338942c1
// declared property getter: - (id)delegate;	// 0x33897975
- (void)doubleTapRecognized:(id)recognized;	// 0x33896001
- (void)drawAnnotations:(CGContextRef)annotations;	// 0x33895d3d
// declared property getter: - (id)drawingSurface;	// 0x3389793d
- (id)editableAnnotationAt:(CGPoint)at;	// 0x33896345
- (void)endTracking;	// 0x33896fcd
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;	// 0x33895e89
- (void)hideAllAnnotations;	// 0x33894e0d
- (void)hostViewDidScroll;	// 0x33895501
- (BOOL)intersects:(CGPDFSelectionRef)intersects with:(CGPDFSelectionRef)with;	// 0x33896435
- (BOOL)isSelection:(CGPDFSelectionRef)selection equalTo:(CGPDFSelectionRef)to;	// 0x338964ad
- (void)layoutAnnotationViews:(id)views;	// 0x33895a11
- (void)linkPressRecognized:(id)recognized;	// 0x338960c5
- (void)lock;	// 0x33895e61
- (BOOL)madeInstantAnnotation;	// 0x33896af1
// declared property getter: - (BOOL)makeUnderlineAnnotation;	// 0x3389791d
- (id)marginNoteImage:(int)image;	// 0x3389786d
- (CGSize)marginNoteImageSize;	// 0x338977b5
- (void)mergeSelectionOfAnnotation:(id)annotation;	// 0x33896519
- (id)newAnnotation:(CGPDFDictionaryRef)annotation type:(const char *)type;	// 0x33893ef9
- (CGImageRef)newHighlightMaskImageFor:(CGRect)aFor;	// 0x338976ed
- (void)removeAllAnnotations;	// 0x338949e1
- (void)removeAnnotation:(id)annotation;	// 0x33894c19
- (void)setAnnotation:(id)annotation hidden:(BOOL)hidden;	// 0x33894dd9
// declared property setter: - (void)setCurrentAnnotation:(id)annotation;	// 0x338978d9
// declared property setter: - (void)setCurrentStyle:(int)style;	// 0x3389790d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33897985
// declared property setter: - (void)setDrawingSurface:(id)surface;	// 0x33897951
// declared property setter: - (void)setMakeUnderlineAnnotation:(BOOL)annotation;	// 0x3389792d
- (void)setNeedsDisplay;	// 0x33895c41
- (void)setSurfacePosition:(id)position;	// 0x33895315
- (void)setView:(id)view;	// 0x33895c0d
- (BOOL)shouldHandleGestureAt:(CGPoint)at response:(BOOL *)response;	// 0x33897081
- (void)showAllAnnotations;	// 0x33894f35
- (void)startTracking:(CGPoint)tracking;	// 0x33896c19
- (BOOL)trackMoved:(CGPoint)moved;	// 0x33896b09
// declared property getter: - (BOOL)tracking;	// 0x33897995
- (void)tracking:(CGPoint)tracking;	// 0x33896c9d
- (CGImageRef)underlineImageFor:(CGRect)aFor;	// 0x33897751
- (void)unlock;	// 0x33895e75
@end
