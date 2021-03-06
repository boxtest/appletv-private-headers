/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRTextControl, NSString, BRMetadataTitleControl, BRTableView, BRCoverArtPreviewControl, BRCursorControl, BRMediaShelfView, BRDividerControl;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface ATVItemDetailView : BRControl {
@private
	BRCoverArtPreviewControl *_mainImageControl;	// 48 = 0x30
	BRDividerControl *_summaryTopDivider;	// 52 = 0x34
	BRDividerControl *_summaryBottomDivider;	// 56 = 0x38
	BRTextControl *_mainImageTextControl;	// 60 = 0x3c
	BRTextControl *_summaryControl;	// 64 = 0x40
	BRCursorControl *_cursor;	// 68 = 0x44
	int _mainImageStyle;	// 72 = 0x48
	int _displayMode;	// 76 = 0x4c
	BRTableView *_table;	// 80 = 0x50
	BRMediaShelfView *_centerShelf;	// 84 = 0x54
	BRControl *_divider;	// 88 = 0x58
	BRMediaShelfView *_bottomShelf;	// 92 = 0x5c
	BRMetadataTitleControl *_titleControl;	// 96 = 0x60
}
@property(retain, nonatomic) BRMediaShelfView *bottomShelf;	// G=0x35eee8ad; S=0x35eedd21; @synthesize=_bottomShelf
@property(retain, nonatomic) BRMediaShelfView *centerShelf;	// G=0x35eee88d; S=0x35eedc89; @synthesize=_centerShelf
@property(assign, nonatomic) int displayMode;	// G=0x35eee85d; S=0x35eee86d; @synthesize=_displayMode
@property(retain, nonatomic) BRControl *divider;	// G=0x35eee89d; S=0x35eedda9; @synthesize=_divider
@property(retain, nonatomic) id<BRImageProxy> mainImageProxy;	// G=0x35eedc51; S=0x35eedc31; @dynamic
@property(assign, nonatomic) int mainImageStyle;	// G=0x35eee83d; S=0x35eee84d; @synthesize=_mainImageStyle
@property(retain, nonatomic) NSString *mainImageText;	// G=0x35eede9d; S=0x35eede31; @dynamic
@property(readonly, assign, nonatomic) float metadataWidth;	// G=0x35eedf79; @dynamic
@property(retain, nonatomic) NSString *summary;	// G=0x35eedf41; S=0x35eeded5; @dynamic
@property(readonly, assign, nonatomic) BRTableView *table;	// G=0x35eee87d; @synthesize=_table
@property(readonly, assign, nonatomic) BRMetadataTitleControl *titleControl;	// G=0x35eee8bd; @synthesize=_titleControl
- (id)init;	// 0x35eed899
- (id)accessibilityLabel;	// 0x35eee7d5
// declared property getter: - (id)bottomShelf;	// 0x35eee8ad
- (BOOL)brEventAction:(id)action;	// 0x35eedfb5
// declared property getter: - (id)centerShelf;	// 0x35eee88d
- (void)dealloc;	// 0x35eedb1d
// declared property getter: - (int)displayMode;	// 0x35eee85d
// declared property getter: - (id)divider;	// 0x35eee89d
- (void)layoutSubcontrols;	// 0x35eee0e1
// declared property getter: - (id)mainImageProxy;	// 0x35eedc51
// declared property getter: - (int)mainImageStyle;	// 0x35eee83d
// declared property getter: - (id)mainImageText;	// 0x35eede9d
// declared property getter: - (float)metadataWidth;	// 0x35eedf79
// declared property setter: - (void)setBottomShelf:(id)shelf;	// 0x35eedd21
// declared property setter: - (void)setCenterShelf:(id)shelf;	// 0x35eedc89
// declared property setter: - (void)setDisplayMode:(int)mode;	// 0x35eee86d
// declared property setter: - (void)setDivider:(id)divider;	// 0x35eedda9
// declared property setter: - (void)setMainImageProxy:(id)proxy;	// 0x35eedc31
// declared property setter: - (void)setMainImageStyle:(int)style;	// 0x35eee84d
// declared property setter: - (void)setMainImageText:(id)text;	// 0x35eede31
// declared property setter: - (void)setSummary:(id)summary;	// 0x35eeded5
// declared property getter: - (id)summary;	// 0x35eedf41
// declared property getter: - (id)table;	// 0x35eee87d
// declared property getter: - (id)titleControl;	// 0x35eee8bd
@end

