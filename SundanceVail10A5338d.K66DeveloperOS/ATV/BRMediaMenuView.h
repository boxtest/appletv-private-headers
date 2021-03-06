/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMenuView.h"
#import "AppleTV-Structs.h"

@class BRControl, NSString, BRTextControl;

__attribute__((visibility("hidden")))
@interface BRMediaMenuView : BRMenuView {
	BRControl *_preview;	// 108 = 0x6c
	NSString *_previewLabel;	// 112 = 0x70
	BRControl *_listHeader;	// 116 = 0x74
	BRTextControl *_descriptionControl;	// 120 = 0x78
	XXStruct_qlg9jA _headerMaxWidth;	// 124 = 0x7c
	BOOL _headerCanExpandListWidth;	// 128 = 0x80
	XXStruct_qlg9jA _previewTrailingGap;	// 132 = 0x84
	XXStruct_qlg9jA _headerSpaceAbove;	// 136 = 0x88
	XXStruct_qlg9jA _headerSpaceBelow;	// 140 = 0x8c
}
@property(assign, nonatomic) BOOL headerCanExpandListWidth;	// G=0x3004e1; S=0x3004f1; @synthesize=_headerCanExpandListWidth
@property(assign, nonatomic) XXStruct_qlg9jA headerMaxWidth;	// G=0x3004b5; S=0x3004d1; @synthesize=_headerMaxWidth
@property(assign) XXStruct_qlg9jA headerSpaceAbove;	// G=0x30052d; S=0x300545; @synthesize=_headerSpaceAbove
@property(assign) XXStruct_qlg9jA headerSpaceBelow;	// G=0x30055d; S=0x300575; @synthesize=_headerSpaceBelow
@property(retain) id listDescription;	// G=0x2ffd69; S=0x2ffc81; converted property
@property(retain) BRControl *listHeader;	// G=0x2ffc71; S=0x2ffa4d; converted property
@property(retain) BRControl *preview;	// G=0x2ff9d9; S=0x2ff949; converted property
@property(retain) NSString *previewLabel;	// G=0x2ffa3d; S=0x2ff9e9; converted property
@property(assign, nonatomic) XXStruct_qlg9jA previewTrailingGap;	// G=0x300501; S=0x30051d; @synthesize=_previewTrailingGap
- (id)initWithListAlignment:(int)listAlignment;	// 0x2ff85d
- (id)accessibilityLabel;	// 0x30044d
- (id)accessibilityScreenContent;	// 0x300495
- (BOOL)brEventAction:(id)action;	// 0x2ffda1
- (void)dealloc;	// 0x2ff8d1
// declared property getter: - (BOOL)headerCanExpandListWidth;	// 0x3004e1
// declared property getter: - (XXStruct_qlg9jA)headerMaxWidth;	// 0x3004b5
// declared property getter: - (XXStruct_qlg9jA)headerSpaceAbove;	// 0x30052d
// declared property getter: - (XXStruct_qlg9jA)headerSpaceBelow;	// 0x30055d
- (void)layoutSubcontrols;	// 0x2ffe1d
// converted property getter: - (id)listDescription;	// 0x2ffd69
// converted property getter: - (id)listHeader;	// 0x2ffc71
// converted property getter: - (id)preview;	// 0x2ff9d9
// converted property getter: - (id)previewLabel;	// 0x2ffa3d
// declared property getter: - (XXStruct_qlg9jA)previewTrailingGap;	// 0x300501
// declared property setter: - (void)setHeaderCanExpandListWidth:(BOOL)width;	// 0x3004f1
// declared property setter: - (void)setHeaderMaxWidth:(XXStruct_qlg9jA)width;	// 0x3004d1
// declared property setter: - (void)setHeaderSpaceAbove:(XXStruct_qlg9jA)above;	// 0x300545
// declared property setter: - (void)setHeaderSpaceBelow:(XXStruct_qlg9jA)below;	// 0x300575
// converted property setter: - (void)setListDescription:(id)description;	// 0x2ffc81
// converted property setter: - (void)setListHeader:(id)header;	// 0x2ffa4d
// converted property setter: - (void)setPreview:(id)preview;	// 0x2ff949
// converted property setter: - (void)setPreviewLabel:(id)label;	// 0x2ff9e9
// declared property setter: - (void)setPreviewTrailingGap:(XXStruct_qlg9jA)gap;	// 0x30051d
@end

