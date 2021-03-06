/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSArray;

@interface BRTableRow : BRControl {
@private
	NSArray *_items;	// 48 = 0x30
	NSArray *_widthValues;	// 52 = 0x34
}
+ (id)tableRowWithItems:(id)items widthValues:(id)values;	// 0x30270b3d
- (id)initWithItems:(id)items widthValues:(id)values;	// 0x30270b7d
- (void)dealloc;	// 0x30270bf5
- (void)layoutSubcontrols;	// 0x30270d21
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x30270c55
@end

