/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QLDisplayBundle.h"
#import "UIWebViewDelegate.h"
#import "QuickLook-Structs.h"
#import "UIScrollViewDelegate.h"
#import "QLScrubViewDataSource.h"
#import "UIWebPDFViewHandlerDelegate.h"

@class NSData, QLPDFHanderDelegateForwarder, QLScrubView, QLPreviewConverter, UIWebView, NSMutableArray, NSURLRequest;

@interface QLWebViewDisplayBundle : QLDisplayBundle <UIWebViewDelegate, UIScrollViewDelegate, QLScrubViewDataSource, UIWebPDFViewHandlerDelegate> {
	UIWebView *_webView;	// 276 = 0x114
	QLPreviewConverter *_previewConverter;	// 280 = 0x118
	NSURLRequest *_previewRequest;	// 284 = 0x11c
	unsigned _isLoadedDuringZoom : 1;	// 288 = 0x120
	unsigned _isHTMLContent : 1;	// 288 = 0x120
	unsigned _isXMLContent : 1;	// 288 = 0x120
	unsigned _isPDFContent : 1;	// 288 = 0x120
	unsigned _isSpreadsheetContent : 1;	// 288 = 0x120
	unsigned _isPlainText : 1;	// 288 = 0x120
	unsigned _isRTFContent : 1;	// 288 = 0x120
	unsigned _isCSVContent : 1;	// 288 = 0x120
	unsigned _loadStarted : 1;	// 289 = 0x121
	float _defaultZoom;	// 292 = 0x124
	float _navigationBarHeight;	// 296 = 0x128
	QLScrubView *_scrubView;	// 300 = 0x12c
	int _lastPage;	// 304 = 0x130
	BOOL _inScroll;	// 308 = 0x134
	BOOL _webViewReadyForThumbnailing;	// 309 = 0x135
	NSMutableArray *_htmlSlideNodes;	// 312 = 0x138
	NSData *_pdfPreviewData;	// 316 = 0x13c
	QLPDFHanderDelegateForwarder *_forwarder;	// 320 = 0x140
}
@property(readonly, retain) NSData *pdfPreviewData;	// G=0x32a394cd; converted property
@property(readonly, retain) QLPreviewConverter *previewConverter;	// G=0x32a37169; converted property
+ (int)backgroundTypeForUTI:(id)uti andMode:(int)mode;	// 0x32a36955
- (id)_copyPreviewConverterForPreviewItem:(id)previewItem;	// 0x32a37071
- (CGPDFDocumentRef)_getCGPDFDocumentRef;	// 0x32a383e9
- (id)_getWebView:(BOOL)view;	// 0x32a369b1
- (void)_hideOverlayDidEnd:(id)_hideOverlay finished:(id)finished context:(void *)context;	// 0x32a38815
- (void)_hideScrubberIfNeeded:(double)needed;	// 0x32a38841
- (id)_htmlPageXPath;	// 0x32a38f75
- (id)_htmlSlideNodes;	// 0x32a3915d
- (id)_scrubView;	// 0x32a38509
- (void)_showScrubberIfNeeded:(double)needed;	// 0x32a385f5
- (void)_tearDownWebView;	// 0x32a36bc1
- (BOOL)acceptControllerTouch:(id)touch fromGestureRecognizer:(id)gestureRecognizer;	// 0x32a36cfd
- (id)alertViewForUIWebPDFViewHandler:(id)uiwebPDFViewHandler;	// 0x32a383ad
- (void)cancelLoad;	// 0x32a371a1
- (CGRect)contentFrameWithoutOverlay;	// 0x32a36dc9
- (unsigned)currentPageNumber;	// 0x32a38af9
- (void)dealloc;	// 0x32a36611
- (void)didReceiveMemoryWarning;	// 0x32a36b7d
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x32a36b5d
- (void)loadWithHints:(id)hints;	// 0x32a371dd
- (int)numberOfPagesInScrubView:(id)scrubView;	// 0x32a38f65
- (CGPoint)originForPDFPageLabelViewWithHandler:(id)handler proposedOrigin:(CGPoint)origin;	// 0x32a37049
- (int)pageCount;	// 0x32a3897d
- (CGSize)pageSizeAtIndex:(int)index;	// 0x32a38a31
// converted property getter: - (id)pdfPreviewData;	// 0x32a394cd
- (void)pdfViewHandlerCompletedLayoutAndIsUnlocked:(id)unlocked;	// 0x32a38439
// converted property getter: - (id)previewConverter;	// 0x32a37169
- (id)printPageHelper;	// 0x32a394dd
- (void)scrollToPage:(unsigned)page;	// 0x32a38cc1
- (void)scrollViewDidScroll:(id)scrollView;	// 0x32a37c65
- (void)scrubView:(id)view didSelectPageAtIndex:(unsigned)index;	// 0x32a3943d
- (CGSize)scrubView:(id)view pageSizeAtIndex:(unsigned)index;	// 0x32a39419
- (id)scrubView:(id)view thumbnailOperationForPageAtIndex:(unsigned)index;	// 0x32a392f5
- (void)setOverlayHidden:(BOOL)hidden duration:(double)duration;	// 0x32a36e51
- (void)setPreviewItem:(id)item;	// 0x32a366e9
- (void)setPreviewMode:(int)mode;	// 0x32a36699
- (void)uiWebView:(id)view decidePolicyForMIMEType:(id)mimetype request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x32a38091
- (void)uiWebView:(id)view didFirstLayoutInFrame:(id)frame;	// 0x32a37a29
- (void)uiWebView:(id)view resource:(id)resource didFailLoadingWithError:(id)error fromDataSource:(id)dataSource;	// 0x32a37bc9
- (void)uiWebView:(id)view resource:(id)resource didFinishLoadingFromDataSource:(id)dataSource;	// 0x32a37ba1
- (id)uiWebView:(id)view resource:(id)resource willSendRequest:(id)request redirectResponse:(id)response fromDataSource:(id)dataSource;	// 0x32a37d31
- (void)userInteractedWithScrubView:(id)scrubView;	// 0x32a39491
- (void)viewDidLayoutSubviews;	// 0x32a379c1
- (BOOL)webView:(id)view shouldStartLoadWithRequest:(id)request navigationType:(int)type;	// 0x32a37e51
- (void)webViewDidFinishLoad:(id)webView;	// 0x32a37b19
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x32a36b3d
@end

