/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedRootElement.h"

@class NSString, ATVFeedHeaderWithCountAndButtonsElement, NSArray, ATVFeedInitialSelectionElement;

__attribute__((visibility("hidden")))
@interface ATVFeedMediaBrowserElement : ATVFeedRootElement {
	ATVFeedHeaderWithCountAndButtonsElement *_header;	// 4 = 0x4
	ATVFeedInitialSelectionElement *_initialSelection;	// 8 = 0x8
	NSArray *_items;	// 12 = 0xc
	NSString *_gridLayout;	// 16 = 0x10
}
@property(retain, nonatomic) NSString *gridLayout;	// G=0x117449; S=0x117459; @synthesize=_gridLayout
@property(retain, nonatomic) ATVFeedHeaderWithCountAndButtonsElement *header;	// G=0x1173a1; S=0x1173b1; @synthesize=_header
@property(retain, nonatomic) ATVFeedInitialSelectionElement *initialSelection;	// G=0x1173d9; S=0x1173e9; @synthesize=_initialSelection
@property(retain, nonatomic) NSArray *items;	// G=0x117411; S=0x117421; @synthesize=_items
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x117099
- (void).cxx_destruct;	// 0x117481
// declared property getter: - (id)gridLayout;	// 0x117449
// declared property getter: - (id)header;	// 0x1173a1
// declared property getter: - (id)initialSelection;	// 0x1173d9
// declared property getter: - (id)items;	// 0x117411
// declared property setter: - (void)setGridLayout:(id)layout;	// 0x117459
// declared property setter: - (void)setHeader:(id)header;	// 0x1173b1
// declared property setter: - (void)setInitialSelection:(id)selection;	// 0x1173e9
// declared property setter: - (void)setItems:(id)items;	// 0x117421
@end

