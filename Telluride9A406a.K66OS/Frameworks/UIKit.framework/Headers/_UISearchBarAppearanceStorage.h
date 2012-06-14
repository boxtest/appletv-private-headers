/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSValue;

__attribute__((visibility("hidden")))
@interface _UISearchBarAppearanceStorage : NSObject {
@private
	NSMutableDictionary *searchFieldBackgroundImages;	// 4 = 0x4
	NSValue *searchFieldPositionAdjustment;	// 8 = 0x8
	NSMutableDictionary *iconImages;	// 12 = 0xc
}
@property(retain, nonatomic) NSValue *searchFieldPositionAdjustment;	// G=0x358f2071; S=0x358f2081; @synthesize
- (void)dealloc;	// 0x358f1ffd
- (id)imageForIcon:(int)icon state:(unsigned)state;	// 0x358f1f61
- (id)searchFieldBackgroundImageForState:(unsigned)state;	// 0x358f1e61
// declared property getter: - (id)searchFieldPositionAdjustment;	// 0x358f2071
- (void)setImage:(id)image forIcon:(int)icon state:(unsigned)state;	// 0x358f1ea9
- (void)setSearchFieldBackgroundImage:(id)image forState:(unsigned)state;	// 0x358f1d8d
// declared property setter: - (void)setSearchFieldPositionAdjustment:(id)adjustment;	// 0x358f2081
@end
