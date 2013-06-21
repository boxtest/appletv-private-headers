/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRCoverArtPreviewControl, BRTextControl, BRActionShelfControl;
@protocol BRProvider;

__attribute__((visibility("hidden")))
@interface BRDetailedMediaControl : BRControl {
	BRControl *_metadata;	// 84 = 0x54
	BRCoverArtPreviewControl *_coverArtPreviewControl;	// 88 = 0x58
	BRControl *_textLine;	// 92 = 0x5c
	BRControl *_previewBrowser;	// 96 = 0x60
	BRActionShelfControl *_actionShelf;	// 100 = 0x64
	BRTextControl *_expiryText;	// 104 = 0x68
	id<BRProvider> _metadataProvider;	// 108 = 0x6c
	id<BRProvider> _textLineProvider;	// 112 = 0x70
	id<BRProvider> _previewBrowserProvider;	// 116 = 0x74
	int _style;	// 120 = 0x78
	BOOL _detailsTogglingEnabled;	// 124 = 0x7c
	BOOL _autoRefreshMetadata;	// 125 = 0x7d
}
@property(retain) id actionProviders;	// G=0x2dc8d1; S=0x2dc749; converted property
@property(retain) BRCoverArtPreviewControl *coverArtPreviewControl;	// G=0x2dc199; S=0x2dc0dd; converted property
@property(assign) int detailControlStyle;	// G=0x2dc0ad; S=0x2dbf99; converted property
@property(retain) id detailedMetadataControl;	// G=0x2dc589; S=0x2dc4e5; converted property
@property(retain) id metadataProvider;	// G=0x2dc4d5; S=0x2dc3c5; converted property
@property(retain) id previewBrowserProvider;	// G=0x2dc6a9; S=0x2dc599; converted property
@property(retain) id textLineProvider;	// G=0x2dc3b5; S=0x2dc1a9; converted property
- (id)init;	// 0x2dbad1
- (void)_focusedActionChanged:(id)changed;	// 0x2dcf11
- (id)accessibilityScreenContent;	// 0x2dcef1
// converted property getter: - (id)actionProviders;	// 0x2dc8d1
- (BOOL)brEventAction:(id)action;	// 0x2dbdb1
// converted property getter: - (id)coverArtPreviewControl;	// 0x2dc199
- (void)dealloc;	// 0x2dbc95
// converted property getter: - (int)detailControlStyle;	// 0x2dc0ad
// converted property getter: - (id)detailedMetadataControl;	// 0x2dc589
- (void)enableDetailsToggling;	// 0x2dbf85
- (CGRect)focusCursorFrame;	// 0x2dbe89
- (void)invokeActionSelectionHandler;	// 0x2dc929
- (void)layoutSubcontrols;	// 0x2dca01
// converted property getter: - (id)metadataProvider;	// 0x2dc4d5
// converted property getter: - (id)previewBrowserProvider;	// 0x2dc6a9
- (void)setActionFocusedIndex:(long)index;	// 0x2dc985
// converted property setter: - (void)setActionProviders:(id)providers;	// 0x2dc749
- (void)setActionSelectionHandler:(id)handler;	// 0x2dc909
- (void)setActionStyle:(int)style;	// 0x2dc965
- (void)setAutoRefreshMetadata:(BOOL)metadata;	// 0x2dc739
// converted property setter: - (void)setCoverArtPreviewControl:(id)control;	// 0x2dc0dd
// converted property setter: - (void)setDetailControlStyle:(int)style;	// 0x2dbf99
// converted property setter: - (void)setDetailedMetadataControl:(id)control;	// 0x2dc4e5
- (void)setExpiryText:(id)text;	// 0x2dc6b9
- (void)setImageProxy:(id)proxy;	// 0x2dc0bd
- (void)setMediaType:(id)type;	// 0x2dbc75
// converted property setter: - (void)setMetadataProvider:(id)provider;	// 0x2dc3c5
// converted property setter: - (void)setPreviewBrowserProvider:(id)provider;	// 0x2dc599
- (void)setTextLine:(id)line;	// 0x2dc2b9
// converted property setter: - (void)setTextLineProvider:(id)provider;	// 0x2dc1a9
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2dc9d1
// converted property getter: - (id)textLineProvider;	// 0x2dc3b5
@end
