/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRAsyncImageControl, NSMutableArray, NSDictionary, BRImageControl;

__attribute__((visibility("hidden")))
@interface ATVThunderGameCourtView : BRControl {
	NSDictionary *_data;	// 84 = 0x54
	BRAsyncImageControl *_court;	// 88 = 0x58
	BRControl *_courtContainer;	// 92 = 0x5c
	BRImageControl *_courtGlass;	// 96 = 0x60
	NSMutableArray *_homePlayerCards;	// 100 = 0x64
	NSMutableArray *_awayPlayerCards;	// 104 = 0x68
}
- (id)initWithDictionary:(id)dictionary;	// 0x266b41
- (id)accessibilityLabel;	// 0x2675c1
- (void)dealloc;	// 0x2670a9
- (void)layoutSubcontrols;	// 0x26718d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x26715d
@end

