/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"
#import "BRMetadataContainer.h"


__attribute__((visibility("hidden")))
@interface BRMetadataDetailChunkControl : BRControl <BRMetadataContainer> {
	BOOL _leftAlignLabel;	// 84 = 0x54
}
@property(assign, nonatomic) BOOL leftAlignLabel;	// G=0x2c4ec1; S=0x2c4ed1; @synthesize=_leftAlignLabel
- (id)accessibilityLabel;	// 0x2c4ea5
- (void)dealloc;	// 0x2c49b1
- (void)layoutSubcontrols;	// 0x2c4af9
// declared property getter: - (BOOL)leftAlignLabel;	// 0x2c4ec1
// declared property setter: - (void)setLeftAlignLabel:(BOOL)label;	// 0x2c4ed1
- (void)setMetadata:(id)metadata withLabels:(id)labels;	// 0x2c49dd
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2c4d69
@end
