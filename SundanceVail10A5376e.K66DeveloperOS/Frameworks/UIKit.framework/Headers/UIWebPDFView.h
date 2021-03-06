/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "WebPDFViewPlaceholderDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIPopoverControllerDelegate.h"
#import "UIView.h"

@class NSMutableArray, NSURL, NSArray, UIColor, UITapGestureRecognizer, UIPDFDocument, NSString, WebPDFViewPlaceholder;
@protocol UIWebPDFViewDelegate;

@interface UIWebPDFView : UIView <WebPDFViewPlaceholderDelegate, UIPopoverControllerDelegate, UIGestureRecognizerDelegate> {
	NSMutableArray *_backingLayerImageViews;	// 84 = 0x54
	CGPDFDocumentRef _cgPDFDocument;	// 88 = 0x58
	UIPDFDocument *_document;	// 92 = 0x5c
	BOOL _hasScheduledCacheUpdate;	// 96 = 0x60
	CGRect _documentBounds;	// 100 = 0x64
	NSObject<UIWebPDFViewDelegate> *_pdfDelegate;	// 116 = 0x74
	BOOL _delegateRespondsToDidScroll;	// 120 = 0x78
	UITapGestureRecognizer *_tapGestureRecognizer;	// 124 = 0x7c
	NSURL *_documentURL;	// 128 = 0x80
	BOOL _rotating;	// 132 = 0x84
	BOOL _zooming;	// 133 = 0x85
	float _initialZoomScale;	// 136 = 0x88
	CGAffineTransform _documentTransform;	// 140 = 0x8c
	float _documentScale;	// 164 = 0xa4
	int _ignoreContentOffsetChanges;	// 168 = 0xa8
	CGPoint _contentOffsetAtScrollStart;	// 172 = 0xac
	NSMutableArray *_pageViews;	// 180 = 0xb4
	NSArray *_pageMinYs;	// 184 = 0xb8
	WebPDFViewPlaceholder *pdfPlaceHolderView;	// 188 = 0xbc
	BOOL hidePageViewsUntilReadyToRender;	// 192 = 0xc0
	UIColor *backgroundColorForUnRenderedContent;	// 196 = 0xc4
	BOOL hideActivityIndicatorForUnRenderedContent;	// 200 = 0xc8
	NSString *documentPassword;	// 204 = 0xcc
	NSArray *pageRects;	// 208 = 0xd0
	BOOL readyForSnapshot;	// 212 = 0xd4
}
@property(retain, nonatomic) UIColor *backgroundColorForUnRenderedContent;	// G=0x305d02b1; S=0x305d02c1; @synthesize
@property(readonly, assign, nonatomic) CGPDFDocumentRef cgPDFDocument;	// G=0x305ccc8d; 
@property(readonly, assign, nonatomic) UIPDFDocument *document;	// G=0x305cccad; 
@property(readonly, assign, nonatomic) CGRect documentBounds;	// G=0x305d0199; @synthesize=_documentBounds
@property(retain, nonatomic) NSString *documentPassword;	// G=0x305d02f1; S=0x305d0301; @synthesize
@property(readonly, assign, nonatomic) float documentScale;	// G=0x305d0245; @synthesize=_documentScale
@property(assign, nonatomic) CGAffineTransform documentTransform;	// G=0x305d01dd; S=0x305d0211; @synthesize=_documentTransform
@property(retain, nonatomic) NSURL *documentURL;	// G=0x305d0169; S=0x305d0179; @synthesize=_documentURL
@property(assign, nonatomic) BOOL hideActivityIndicatorForUnRenderedContent;	// G=0x305d02d1; S=0x305d02e1; @synthesize
@property(assign, nonatomic) BOOL hidePageViewsUntilReadyToRender;	// G=0x305d0291; S=0x305d02a1; @synthesize
@property(assign, nonatomic) int ignoreContentOffsetChanges;	// G=0x305d0281; S=0x305ccbcd; @synthesize=_ignoreContentOffsetChanges
@property(assign, nonatomic) float initialZoomScale;	// G=0x305d01bd; S=0x305d01cd; @synthesize=_initialZoomScale
@property(retain, nonatomic) NSArray *pageMinYs;	// G=0x305d0351; S=0x305d0361; @synthesize=_pageMinYs
@property(retain, nonatomic) NSArray *pageRects;	// G=0x305d0311; S=0x305d0321; @synthesize
@property(assign, nonatomic) NSObject<UIWebPDFViewDelegate> *pdfDelegate;	// G=0x305d0189; S=0x305ccbf5; @synthesize=_pdfDelegate
@property(assign) WebPDFViewPlaceholder *pdfPlaceHolderView;	// G=0x305d0255; S=0x305d0269; @synthesize
@property(assign, nonatomic) BOOL readyForSnapshot;	// G=0x305d0331; S=0x305d0341; @synthesize
@property(readonly, assign, nonatomic) unsigned totalPages;	// G=0x305ccc41; 
+ (void)setAsPDFDocRepAndView;	// 0x30284c99
- (id)initWithWebPDFViewPlaceholder:(id)webPDFViewPlaceholder;	// 0x305cccbd
- (id)_addPageAtIndex:(unsigned)index;	// 0x305ce00d
- (void)_addSubViewsInViewCoordsBounds:(CGRect)viewCoordsBounds force:(BOOL)force;	// 0x305cdcbd
- (BOOL)_checkIfDocumentNeedsUnlock;	// 0x305ceefd
- (void)_define:(id)define;	// 0x305cfcd1
- (void)_didScroll;	// 0x305ce465
- (BOOL)_hasPageRects;	// 0x305ccc61
- (id)_installViewAtIndex:(int)index inFrame:(CGRect)frame;	// 0x305cd8d5
- (unsigned)_pageNumberForRect:(CGRect)rect;	// 0x305cfe59
- (id)_pageWithSelection;	// 0x305cfaa5
- (void)_recreateUIPDFDocument;	// 0x305cf031
- (void)_removeBackgroundImageObserverIfNeeded:(id)needed;	// 0x305ccf9d
- (void)_removePageViewsNotInCurrentViewCoordsRect;	// 0x305ce299
- (void)_removePageViewsNotInViewCoordsRect:(CGRect)viewCoordsRect;	// 0x305ce0a1
- (void)_scheduleRemovePageViewsNotInViewCoordsRect;	// 0x305ce2e5
- (id)_selection;	// 0x305cfbb1
- (void)_tapGestureRecognized:(id)recognized;	// 0x305cfe01
- (BOOL)_tryToUnlockDocumentWithPassword:(id)password;	// 0x305cee61
- (CGRect)_viewCachingBoundsInUIViewCoords;	// 0x305cd529
- (CGRect)_viewportBoundsInUIVIewCoordsWithView:(id)view;	// 0x305cd471
- (CGRect)_viewportBoundsInUIViewCoords;	// 0x305cd4e9
- (void)annotationIsBeingPressed:(id)pressed annotation:(id)annotation atPoint:(CGPoint)point;	// 0x305cf969
- (void)annotationWasTouched:(id)touched annotation:(id)annotation atPoint:(CGPoint)point;	// 0x305cf859
// declared property getter: - (id)backgroundColorForUnRenderedContent;	// 0x305d02b1
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x305cfbe9
// declared property getter: - (CGPDFDocumentRef)cgPDFDocument;	// 0x305ccc8d
- (void)clearSelection;	// 0x305cfa79
- (void)dealloc;	// 0x305cd071
- (void)didCompleteLayout;	// 0x305cf135
- (void)didLongPress:(id)press inRect:(CGRect)rect atPoint:(CGPoint)point linkingToPageIndex:(unsigned)pageIndex;	// 0x305cf721
- (void)didLongPress:(id)press inRect:(CGRect)rect atPoint:(CGPoint)point linkingToURL:(id)url;	// 0x305cf601
- (void)didReceiveMemoryWarning:(id)warning;	// 0x305ce511
- (void)didRotate:(id)rotate;	// 0x305ce615
- (void)didTouch:(id)touch inRect:(CGRect)rect atPoint:(CGPoint)point linkingToPageIndex:(unsigned)pageIndex;	// 0x305cf539
- (void)didTouch:(id)touch inRect:(CGRect)rect atPoint:(CGPoint)point linkingToURL:(id)url;	// 0x305cf489
- (void)didZoom:(id)zoom;	// 0x305ce731
// declared property getter: - (id)document;	// 0x305cccad
// declared property getter: - (CGRect)documentBounds;	// 0x305d0199
// declared property getter: - (id)documentPassword;	// 0x305d02f1
// declared property getter: - (float)documentScale;	// 0x305d0245
// declared property getter: - (CGAffineTransform)documentTransform;	// 0x305d01dd
// declared property getter: - (id)documentURL;	// 0x305d0169
- (void)ensureCorrectPagesAreInstalled:(BOOL)installed;	// 0x305ce35d
- (unsigned)firstVisiblePageNumber;	// 0x305ce755
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;	// 0x305cfe25
// declared property getter: - (BOOL)hideActivityIndicatorForUnRenderedContent;	// 0x305d02d1
// declared property getter: - (BOOL)hidePageViewsUntilReadyToRender;	// 0x305d0291
// declared property getter: - (int)ignoreContentOffsetChanges;	// 0x305d0281
- (id)imageForContactRect:(CGRect)contactRect onPageInViewRect:(CGRect)viewRect destinationRect:(CGRect)rect;	// 0x305cff6d
// declared property getter: - (float)initialZoomScale;	// 0x305d01bd
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x305cd61d
// declared property getter: - (id)pageMinYs;	// 0x305d0351
// declared property getter: - (id)pageRects;	// 0x305d0311
// declared property getter: - (id)pdfDelegate;	// 0x305d0189
// declared property getter: - (id)pdfPlaceHolderView;	// 0x305d0255
- (void)prepareForSnapshot:(BOOL)snapshot;	// 0x305ce9c1
// declared property getter: - (BOOL)readyForSnapshot;	// 0x305d0331
- (void)resetZoom:(id)zoom;	// 0x305cf441
// declared property setter: - (void)setBackgroundColorForUnRenderedContent:(id)unRenderedContent;	// 0x305d02c1
// declared property setter: - (void)setDocumentPassword:(id)password;	// 0x305d0301
// declared property setter: - (void)setDocumentTransform:(CGAffineTransform)transform;	// 0x305d0211
// declared property setter: - (void)setDocumentURL:(id)url;	// 0x305d0179
// declared property setter: - (void)setHideActivityIndicatorForUnRenderedContent:(BOOL)unRenderedContent;	// 0x305d02e1
// declared property setter: - (void)setHidePageViewsUntilReadyToRender:(BOOL)render;	// 0x305d02a1
// declared property setter: - (void)setIgnoreContentOffsetChanges:(int)changes;	// 0x305ccbcd
// declared property setter: - (void)setInitialZoomScale:(float)scale;	// 0x305d01cd
// declared property setter: - (void)setPageMinYs:(id)ys;	// 0x305d0361
// declared property setter: - (void)setPageRects:(id)rects;	// 0x305d0321
// declared property setter: - (void)setPdfDelegate:(id)delegate;	// 0x305ccbf5
// declared property setter: - (void)setPdfPlaceHolderView:(id)view;	// 0x305d0269
// declared property setter: - (void)setReadyForSnapshot:(BOOL)snapshot;	// 0x305d0341
- (void)snapshotComplete;	// 0x305cecfd
// declared property getter: - (unsigned)totalPages;	// 0x305ccc41
- (id)uiPDFDocument;	// 0x305ccc9d
- (id)viewAtIndex:(int)index;	// 0x305cd345
- (void)viewWillClose;	// 0x305cee4d
- (id)viewportView;	// 0x305cd419
- (void)willRotate:(id)rotate;	// 0x305ce571
- (void)willScroll:(id)scroll;	// 0x305ce401
- (void)willZoom:(id)zoom;	// 0x305ce68d
- (void)zoom:(id)zoom to:(CGRect)to atPoint:(CGPoint)point kind:(int)kind;	// 0x305cf369
@end

