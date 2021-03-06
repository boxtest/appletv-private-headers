/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <WAKView.h> // Unknown library
#import "WebPDFDocumentView.h"
#import "WebPDFDocumentRepresentation.h"


@interface WebPDFView : WAKView <WebPDFDocumentView, WebPDFDocumentRepresentation> {
@private
	BOOL dataSourceHasBeenSet;	// 68 = 0x44
	CGPDFDocumentRef _PDFDocument;	// 72 = 0x48
	CGRect *_pageRects;	// 76 = 0x4c
}
+ (CGColorRef)backgroundColor;	// 0x32c6c79d
+ (CGColorRef)shadowColor;	// 0x32c6c895
+ (id)supportedMIMETypes;	// 0x32c1ff75
- (void)_checkPDFTitle;	// 0x32c6cbb5
- (void)_computePageRects;	// 0x32c6cd1d
- (id)_pagesInRect:(CGRect)rect;	// 0x32c6d095
- (BOOL)canProvideDocumentSource;	// 0x32c6c6fd
- (void)dataSourceUpdated:(id)updated;	// 0x32c6c6e5
- (void)dealloc;	// 0x32c6c749
- (CGPDFDocumentRef)doc;	// 0x32c6c705
- (id)documentSource;	// 0x32c6c701
- (void)drawPage:(CGPDFPageRef)page;	// 0x32c6d2b9
- (void)drawRect:(CGRect)rect;	// 0x32c6cfbd
- (void)finishedLoadingWithDataSource:(id)dataSource;	// 0x32c6cafd
- (void)layout;	// 0x32c6cf0d
- (unsigned)pageNumberForRect:(CGRect)rect;	// 0x32c6c9a9
- (void)receivedData:(id)data withDataSource:(id)dataSource;	// 0x32c6c6f5
- (void)receivedError:(id)error withDataSource:(id)dataSource;	// 0x32c6c6f9
- (CGRect)rectForPageNumber:(unsigned)pageNumber;	// 0x32c6c715
- (void)setDataSource:(id)source;	// 0x32c6cf25
- (void)setNeedsLayout:(BOOL)layout;	// 0x32c6c6e9
- (id)title;	// 0x32c6cab5
- (unsigned)totalPages;	// 0x32c6c989
- (void)viewDidMoveToHostWindow;	// 0x32c6c6f1
- (void)viewWillMoveToHostWindow:(id)view;	// 0x32c6c6ed
@end

