/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIWebDocumentView.h> // Unknown library

@class NSString;

@interface MPWebDocumentView : UIWebDocumentView {
	id _loadDelegate;	// 568 = 0x238
	NSString *_stylesheet;	// 572 = 0x23c
	unsigned _adjustHeightToFit : 1;	// 576 = 0x240
	unsigned _treatAsPlainText : 1;	// 576 = 0x240
}
@property(assign, nonatomic) id loadDelegate;	// G=0x33c68ea1; S=0x33c68eb1; @synthesize=_loadDelegate
@property(retain, nonatomic) NSString *stylesheet;	// G=0x33c68ec1; S=0x33c68ed1; @synthesize=_stylesheet
+ (id)newEmptyLabelView;	// 0x33c68429
- (id)initWithFrame:(CGRect)frame;	// 0x33c68581
- (void)dealloc;	// 0x33c6861d
- (CGSize)layoutWithAutoresizingSize:(CGSize)autoresizingSize contentBlock:(id)block;	// 0x33c68b89
// declared property getter: - (id)loadDelegate;	// 0x33c68ea1
- (void)openURL:(id)url;	// 0x33c68df9
- (void)setContentWithString:(id)string stylesheet:(id)stylesheet;	// 0x33c68a75
- (void)setHTMLFragment:(id)fragment;	// 0x33c686a9
// declared property setter: - (void)setLoadDelegate:(id)delegate;	// 0x33c68eb1
- (void)setPlaintextString:(id)string manuallyWrap:(BOOL)wrap;	// 0x33c687a5
// declared property setter: - (void)setStylesheet:(id)stylesheet;	// 0x33c68ed1
// declared property getter: - (id)stylesheet;	// 0x33c68ec1
- (void)webView:(id)view decidePolicyForNavigationAction:(id)navigationAction request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x33c68e19
- (void)webView:(id)view didFinishLoadForFrame:(id)frame;	// 0x33c68cf9
@end

