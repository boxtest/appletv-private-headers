/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class ATVFeedImageElement, NSString, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedMenuItemElement : ATVFeedElement {
	NSString *_label;	// 4 = 0x4
	NSString *_label2;	// 8 = 0x8
	NSString *_rightLabel;	// 12 = 0xc
	ATVFeedImageElement *_image;	// 16 = 0x10
	ATVFeedImageElement *_defaultImage;	// 20 = 0x14
	ATVFeedElement *_preview;	// 24 = 0x18
	NSArray *_accessories;	// 28 = 0x1c
	int _ordinal;	// 32 = 0x20
	int _maxOrdinalDigits;	// 36 = 0x24
}
@property(retain, nonatomic) NSArray *accessories;	// G=0x139735; S=0x139745; @synthesize=_accessories
@property(retain, nonatomic) ATVFeedImageElement *defaultImage;	// G=0x1396f5; S=0x139705; @synthesize=_defaultImage
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x1396d5; S=0x1396e5; @synthesize=_image
@property(copy, nonatomic) NSString *label;	// G=0x139669; S=0x13967d; @synthesize=_label
@property(copy, nonatomic) NSString *label2;	// G=0x13968d; S=0x1396a1; @synthesize=_label2
@property(assign, nonatomic) int maxOrdinalDigits;	// G=0x139775; S=0x139785; @synthesize=_maxOrdinalDigits
@property(assign, nonatomic) int ordinal;	// G=0x139755; S=0x139765; @synthesize=_ordinal
@property(retain, nonatomic) ATVFeedElement *preview;	// G=0x139715; S=0x139725; @synthesize=_preview
@property(copy, nonatomic) NSString *rightLabel;	// G=0x1396b1; S=0x1396c5; @synthesize=_rightLabel
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x1391cd
// declared property getter: - (id)accessories;	// 0x139735
- (void)dealloc;	// 0x1395a1
// declared property getter: - (id)defaultImage;	// 0x1396f5
// declared property getter: - (id)image;	// 0x1396d5
// declared property getter: - (id)label;	// 0x139669
// declared property getter: - (id)label2;	// 0x13968d
// declared property getter: - (int)maxOrdinalDigits;	// 0x139775
// declared property getter: - (int)ordinal;	// 0x139755
// declared property getter: - (id)preview;	// 0x139715
// declared property getter: - (id)rightLabel;	// 0x1396b1
// declared property setter: - (void)setAccessories:(id)accessories;	// 0x139745
// declared property setter: - (void)setDefaultImage:(id)image;	// 0x139705
// declared property setter: - (void)setImage:(id)image;	// 0x1396e5
// declared property setter: - (void)setLabel2:(id)a2;	// 0x1396a1
// declared property setter: - (void)setLabel:(id)label;	// 0x13967d
// declared property setter: - (void)setMaxOrdinalDigits:(int)digits;	// 0x139785
// declared property setter: - (void)setOrdinal:(int)ordinal;	// 0x139765
// declared property setter: - (void)setPreview:(id)preview;	// 0x139725
// declared property setter: - (void)setRightLabel:(id)label;	// 0x1396c5
@end
