/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPSwipableView.h"

@class UIView, UIImageView, MPWebDocumentView, UITextLabel, UIProgressIndicator, UIImage, NSString, NSMutableString, UIScrollView;

@interface MPTextView : MPSwipableView {
	UIImage *_albumArtwork;	// 76 = 0x4c
	NSString *_rawText;	// 80 = 0x50
	NSMutableString *_text;	// 84 = 0x54
	UIImageView *_background;	// 88 = 0x58
	UIImageView *_faderView;	// 92 = 0x5c
	MPWebDocumentView *_webView;	// 96 = 0x60
	UIView *_headerView;	// 100 = 0x64
	UIScrollView *_scrollView;	// 104 = 0x68
	UITextLabel *_loadingLabel;	// 108 = 0x6c
	UIProgressIndicator *_loadingIndicator;	// 112 = 0x70
	BOOL _scrollIndicatorFlashDisabled;	// 116 = 0x74
	BOOL _needsLayout;	// 117 = 0x75
}
@property(retain, nonatomic) UIImage *artwork;	// G=0x3466b305; S=0x3466a245; @synthesize=_albumArtwork
@property(retain, nonatomic) UIView *headerView;	// G=0x3466b315; S=0x3466a65d; @synthesize=_headerView
- (id)initWithFrame:(CGRect)frame;	// 0x34669ad9
- (void)_addLoadingUI;	// 0x3466a73d
- (void)_addTextUI;	// 0x3466a9f5
- (void)_createTextUIIfNeeded;	// 0x3466ac5d
- (CGImageRef)_newFaderImage:(BOOL)image;	// 0x3466b069
- (CGImageRef)_newFaderImageBackgroundWithSize:(CGSize)size;	// 0x3466ae01
- (void)_removeLoadingUI;	// 0x3466ad5d
- (void)_removeTextUI;	// 0x3466ade1
- (void)_updateFaderImage:(BOOL)image;	// 0x3466b1f1
- (void)_updateLoadingUIForWillLoad:(BOOL)_updateLoadingUIFor;	// 0x3466a399
// declared property getter: - (id)artwork;	// 0x3466b305
- (void)dealloc;	// 0x34669c91
- (void)didMoveToSuperview;	// 0x3466a101
- (BOOL)hasText;	// 0x3466a1c5
// declared property getter: - (id)headerView;	// 0x3466b315
- (void)layoutSubviews;	// 0x34669e21
- (id)newWebView;	// 0x3466aa8d
- (void)noteDidSnapshot;	// 0x3466a211
- (void)noteWillSnapshot;	// 0x3466a1dd
// declared property setter: - (void)setArtwork:(id)artwork;	// 0x3466a245
// declared property setter: - (void)setHeaderView:(id)view;	// 0x3466a65d
- (void)setNeedsLayout;	// 0x34669de1
- (void)setScrollIndicatorFlashDisabled:(BOOL)disabled;	// 0x3466a1b5
- (void)setText:(id)text willLoad:(BOOL)load;	// 0x3466a449
- (void)webViewDidFinishLoading:(id)webView;	// 0x3466a6c9
- (float)webViewWidth;	// 0x3466a40d
@end

