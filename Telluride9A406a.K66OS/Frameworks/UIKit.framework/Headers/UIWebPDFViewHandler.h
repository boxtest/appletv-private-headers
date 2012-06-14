/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIWebPDFViewPrivateDelegate.h"
#import "UIDocumentPasswordViewDelegate.h"
#import "UIWebPDFViewDelegate.h"
#import <NSObject.h> // Unknown library

@class UIWebPDFSearchController, UIColor, WebPDFNSNumberFormatter, UIWebPDFView, UIHighlightView, UIWebPDFLabelView, UIDocumentPasswordView, UIView;
@protocol UIWebPDFViewHandlerDelegate;

@interface UIWebPDFViewHandler : NSObject <UIWebPDFViewPrivateDelegate, UIDocumentPasswordViewDelegate, UIWebPDFViewDelegate> {
@private
	UIWebPDFView *_pdfView;	// 4 = 0x4
	BOOL _scalesPageToFit;	// 8 = 0x8
	float _initialZoomScale;	// 12 = 0xc
	NSObject<UIWebPDFViewHandlerDelegate> *_pdfHandlerDelegate;	// 16 = 0x10
	UIHighlightView *_linkHighlightView;	// 20 = 0x14
	UIWebPDFLabelView *_pageLabelView;	// 24 = 0x18
	BOOL _showPageLabels;	// 28 = 0x1c
	BOOL _showsShadowsForHTMLContent;	// 29 = 0x1d
	BOOL _cachedScrollViewShadowsState;	// 30 = 0x1e
	UIDocumentPasswordView *_passwordEntryView;	// 32 = 0x20
	UIWebPDFSearchController *_searchController;	// 36 = 0x24
	UIColor *_backgroundColorForUnRenderedContent;	// 40 = 0x28
	BOOL _hideActivityIndicatorForUnRenderedContent;	// 44 = 0x2c
	BOOL _hidePageViewsUntilReadyToRender;	// 45 = 0x2d
	WebPDFNSNumberFormatter *_labelViewFormatter;	// 48 = 0x30
	PDFHistoryItem _pendingHistoryItemRestore;	// 52 = 0x34
}
@property(retain, nonatomic) UIColor *backgroundColorForUnRenderedContent;	// G=0x35a13eb5; S=0x3571f515; @synthesize=_backgroundColorForUnRenderedContent
@property(readonly, assign, nonatomic) UIView *frontView;	// G=0x3571f995; 
@property(assign, nonatomic) BOOL hideActivityIndicatorForUnRenderedContent;	// G=0x35a13ec5; S=0x35a10eed; @synthesize=_hideActivityIndicatorForUnRenderedContent
@property(assign, nonatomic) BOOL hidePageViewsUntilReadyToRender;	// G=0x35a13ea5; S=0x35a10eb9; @synthesize=_hidePageViewsUntilReadyToRender
@property(assign, nonatomic) NSObject<UIWebPDFViewHandlerDelegate> *pdfHandlerDelegate;	// G=0x35a13e95; S=0x3571f579; @synthesize=_pdfHandlerDelegate
@property(readonly, assign, nonatomic) UIWebPDFView *pdfView;	// G=0x3571f9c5; 
@property(assign, nonatomic) BOOL scalesPageToFit;	// G=0x35a13e85; S=0x3581b715; @synthesize=_scalesPageToFit
@property(readonly, assign, nonatomic) UIWebPDFSearchController *searchController;	// G=0x35a10fe9; 
@property(assign, nonatomic) BOOL showPageLabels;	// G=0x35a13e75; S=0x3571f589; @synthesize=_showPageLabels
- (id)init;	// 0x3571f385
- (void)_adjustContentOffsetForKeyboardIfNeeded;	// 0x35a12839
- (void)_adjustZoomScalesForScrollViewInternal:(id)scrollViewInternal;	// 0x35a11aa9
- (void)_createPDFViewIfNeeded:(id)needed;	// 0x35a1137d
- (void)_ensurePDFViewInHierarchyForWebDocView:(id)webDocView;	// 0x35a1156d
- (CGRect)_frameForDocumentBounds:(CGRect)documentBounds;	// 0x35a11149
- (id)_getLabelViewFormatter;	// 0x35a13401
- (id)_getPDFDocumentViewForWebView:(id)webView;	// 0x357c0891
- (BOOL)_handleAnnotationClick:(CGPDFDictionaryRef)click;	// 0x35a12611
- (BOOL)_handleDestinationActionClick:(CGPDFDictionaryRef)click destinationKey:(const char *)key;	// 0x35a1233d
- (BOOL)_handleLinkActionClick:(CGPDFDictionaryRef)click;	// 0x35a12585
- (BOOL)_handleURIActionClick:(CGPDFDictionaryRef)click uriKey:(const char *)key;	// 0x35a12519
- (void)_keyboardDidShow:(id)_keyboard;	// 0x35a12b89
- (void)_notifyDelegateOfLinkClick:(id)linkClick;	// 0x35a122d9
- (void)_postdidDetermineDocumentBounds;	// 0x35a12e01
- (CGRect)_rectForPasswordView:(id)passwordView;	// 0x35a11245
- (CGRect)_rectForPdfView:(CGRect)pdfView;	// 0x35a110b9
- (void)_removePDFViewIfWebDocViewIsNotPDF:(id)pdf;	// 0x357c1671
- (void)_removePDFViewIfWebDocViewIsNotSamePDF:(id)pdf;	// 0x35a112f1
- (void)_replacePDFViewIfPresentWithWebDocView:(id)webDocView;	// 0x357c16a9
- (void)_resultRects:(id)rects andResultViews:(id)views forSearchResult:(id)searchResult inViewCoordinates:(id)viewCoordinates;	// 0x35a137c1
- (id)_scroller:(id)scroller;	// 0x357c085d
- (void)_setSearchControllerDocumentToSearch;	// 0x35a10f21
- (void)_showPasswordEntryViewForFile:(id)file;	// 0x35a12d09
- (void)_showPasswordErrorAlert;	// 0x35a126e1
- (void)_updateViewHierarchyForDocumentView:(id)documentView ignoreIfSame:(BOOL)same;	// 0x35a116e9
- (void)adjustZoomScalesForScrollView;	// 0x35a11d55
// declared property getter: - (id)backgroundColorForUnRenderedContent;	// 0x35a13eb5
- (void)clearAllViews;	// 0x3581d579
- (void)clearLinkHighlight;	// 0x3581d695
- (void)clearPageLabel;	// 0x3581d6d5
- (id)createLinkHighlight;	// 0x35a11e9d
- (id)createPageLabel;	// 0x35a1266d
- (void)dealloc;	// 0x3581d4f5
- (void)didBeginEditingPassword:(id)password inView:(id)view;	// 0x35a12bbd
- (void)didDetermineDocumentBounds:(id)bounds;	// 0x35a12ec5
- (void)didEndEditingPassword:(id)password inView:(id)view;	// 0x35a12c29
- (void)didReceiveMemoryWarning:(id)warning;	// 0x35a1107d
- (void)didScroll:(id)scroll;	// 0x35a13235
- (void)ensureCorrectPagesAreInstalled;	// 0x3581bfe9
// declared property getter: - (id)frontView;	// 0x3571f995
- (void)handleScrollToAnchor:(id)anchor;	// 0x35a13719
// declared property getter: - (BOOL)hideActivityIndicatorForUnRenderedContent;	// 0x35a13ec5
// declared property getter: - (BOOL)hidePageViewsUntilReadyToRender;	// 0x35a13ea5
- (void)highlightRect:(CGRect)rect;	// 0x35a11f89
- (id)passwordForPDFView:(id)pdfview;	// 0x35a13199
// declared property getter: - (id)pdfHandlerDelegate;	// 0x35a13e95
// declared property getter: - (id)pdfView;	// 0x3571f9c5
- (void)pdfView:(id)view shouldZoomToRect:(CGRect)rect;	// 0x35a130c9
- (void)pdfView:(id)view willClickAnnotation:(CGPDFDictionaryRef)annotation inRect:(CGRect)rect;	// 0x35a13155
- (void)removeViewFromSuperview;	// 0x35a13285
- (void)restoreStateFromHistoryItem:(id)historyItem forWebView:(id)webView;	// 0x357cc829
- (void)restoreStateFromPendingHistoryItem;	// 0x35a13dad
- (void)revealSearchResult:(id)result andZoomIn:(BOOL)anIn;	// 0x35a13a21
- (void)saveStateToHistoryItem:(id)historyItem forWebView:(id)webView;	// 0x357c36f5
// declared property getter: - (BOOL)scalesPageToFit;	// 0x35a13e85
- (void)scrollToPageNumber:(int)pageNumber animate:(BOOL)animate;	// 0x35a120fd
// declared property getter: - (id)searchController;	// 0x35a10fe9
// declared property setter: - (void)setBackgroundColorForUnRenderedContent:(id)unRenderedContent;	// 0x3571f515
// declared property setter: - (void)setHideActivityIndicatorForUnRenderedContent:(BOOL)unRenderedContent;	// 0x35a10eed
// declared property setter: - (void)setHidePageViewsUntilReadyToRender:(BOOL)render;	// 0x35a10eb9
// declared property setter: - (void)setPdfHandlerDelegate:(id)delegate;	// 0x3571f579
// declared property setter: - (void)setScalesPageToFit:(BOOL)fit;	// 0x3581b715
// declared property setter: - (void)setShowPageLabels:(BOOL)labels;	// 0x3571f589
- (void)shouldResetZoom:(id)zoom;	// 0x35a13111
// declared property getter: - (BOOL)showPageLabels;	// 0x35a13e75
- (void)updatePageNumberLabelWithUserScrolling:(BOOL)userScrolling animated:(BOOL)animated;	// 0x35a13441
- (void)updateViewHierarchyForDocumentViewLoadComplete:(id)documentViewLoadComplete;	// 0x357c34c5
- (void)updateViewHierarchyForDocumentViewNewLoad:(id)documentViewNewLoad;	// 0x357c07c9
- (void)updateViewHierarchyForDocumentViewTabSwitch:(id)documentViewTabSwitch;	// 0x35a133cd
- (void)updateViewHierarchyForDocumentViewTabSwitch:(id)documentViewTabSwitch restoringZoomScale:(float)scale andScrollPt:(CGPoint)pt;	// 0x35a132d5
- (void)updateViewHierarchyForFirstNonEmptyLayoutInFrame:(id)frame;	// 0x357c1661
- (void)updateViewSettings;	// 0x35a11769
- (void)userDidEnterPassword:(id)user forPasswordView:(id)passwordView;	// 0x35a12781
@end
