/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRActionShelfControl, BRCoverArtPreviewControl;
@protocol BRProvider;

@interface BRDetailedMediaControl : BRControl {
@private
	BRControl *_metadata;	// 48 = 0x30
	BRCoverArtPreviewControl *_coverArtPreviewControl;	// 52 = 0x34
	BRControl *_textLine;	// 56 = 0x38
	BRControl *_previewBrowser;	// 60 = 0x3c
	BRActionShelfControl *_actionShelf;	// 64 = 0x40
	BRTextControl *_expiryText;	// 68 = 0x44
	id<BRProvider> _metadataProvider;	// 72 = 0x48
	id<BRProvider> _textLineProvider;	// 76 = 0x4c
	id<BRProvider> _previewBrowserProvider;	// 80 = 0x50
	int _style;	// 84 = 0x54
	BOOL _detailsTogglingEnabled;	// 88 = 0x58
	BOOL _autoRefreshMetadata;	// 89 = 0x59
}
@property(retain) id actionProviders;	// G=0x329ce315; S=0x329ce181; converted property
@property(retain) BRCoverArtPreviewControl *coverArtPreviewControl;	// G=0x329cdb9d; S=0x329cdaf1; converted property
@property(assign) int detailControlStyle;	// G=0x329cdac1; S=0x329cd9a9; converted property
@property(retain) id detailedMetadataControl;	// G=0x329cdfb1; S=0x329cdf1d; converted property
@property(retain) id metadataProvider;	// G=0x329cdf0d; S=0x329cdde5; converted property
@property(retain) id previewBrowserProvider;	// G=0x329ce0e9; S=0x329cdfc1; converted property
@property(retain) id textLineProvider;	// G=0x329cddd5; S=0x329cdbad; converted property
- (id)init;	// 0x329cd4d9
- (void)_focusedActionChanged:(id)changed;	// 0x329ce8ed
- (id)accessibilityScreenContent;	// 0x329ce8cd
// converted property getter: - (id)actionProviders;	// 0x329ce315
- (BOOL)brEventAction:(id)action;	// 0x329cd7d5
// converted property getter: - (id)coverArtPreviewControl;	// 0x329cdb9d
- (void)dealloc;	// 0x329cd6b9
// converted property getter: - (int)detailControlStyle;	// 0x329cdac1
// converted property getter: - (id)detailedMetadataControl;	// 0x329cdfb1
- (void)enableDetailsToggling;	// 0x329cd995
- (CGRect)focusCursorFrame;	// 0x329cd8ad
- (void)invokeActionSelectionHandler;	// 0x329ce36d
- (void)layoutSubcontrols;	// 0x329ce445
// converted property getter: - (id)metadataProvider;	// 0x329cdf0d
// converted property getter: - (id)previewBrowserProvider;	// 0x329ce0e9
- (void)setActionFocusedIndex:(long)index;	// 0x329ce3c9
// converted property setter: - (void)setActionProviders:(id)providers;	// 0x329ce181
- (void)setActionSelectionHandler:(id)handler;	// 0x329ce34d
- (void)setActionStyle:(int)style;	// 0x329ce3a9
- (void)setAutoRefreshMetadata:(BOOL)metadata;	// 0x329ce171
// converted property setter: - (void)setCoverArtPreviewControl:(id)control;	// 0x329cdaf1
// converted property setter: - (void)setDetailControlStyle:(int)style;	// 0x329cd9a9
// converted property setter: - (void)setDetailedMetadataControl:(id)control;	// 0x329cdf1d
- (void)setExpiryText:(id)text;	// 0x329ce0f9
- (void)setImageProxy:(id)proxy;	// 0x329cdad1
- (void)setMediaType:(id)type;	// 0x329cd699
// converted property setter: - (void)setMetadataProvider:(id)provider;	// 0x329cdde5
// converted property setter: - (void)setPreviewBrowserProvider:(id)provider;	// 0x329cdfc1
- (void)setTextLine:(id)line;	// 0x329cdcd5
// converted property setter: - (void)setTextLineProvider:(id)provider;	// 0x329cdbad
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x329ce415
// converted property getter: - (id)textLineProvider;	// 0x329cddd5
@end
