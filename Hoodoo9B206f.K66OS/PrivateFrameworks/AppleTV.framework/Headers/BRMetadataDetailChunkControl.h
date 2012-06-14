/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRMetadataContainer.h"
#import "BRControl.h"


__attribute__((visibility("hidden")))
@interface BRMetadataDetailChunkControl : BRControl <BRMetadataContainer> {
@private
	BOOL _leftAlignLabel;	// 46 = 0x2e
}
@property(assign, nonatomic) BOOL leftAlignLabel;	// G=0x3668c135; S=0x3668c145; @synthesize=_leftAlignLabel
- (id)accessibilityLabel;	// 0x3668c119
- (void)dealloc;	// 0x3668bc5d
- (void)layoutSubcontrols;	// 0x3668bd89
// declared property getter: - (BOOL)leftAlignLabel;	// 0x3668c135
// declared property setter: - (void)setLeftAlignLabel:(BOOL)label;	// 0x3668c145
- (void)setMetadata:(id)metadata withLabels:(id)labels;	// 0x3668bc89
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3668bfdd
@end
