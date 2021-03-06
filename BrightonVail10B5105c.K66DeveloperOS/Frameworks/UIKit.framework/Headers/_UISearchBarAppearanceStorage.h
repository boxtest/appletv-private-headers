/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIImage, NSMutableDictionary, NSValue;

__attribute__((visibility("hidden")))
@interface _UISearchBarAppearanceStorage : NSObject {
	NSMutableDictionary *searchFieldBackgroundImages;	// 4 = 0x4
	NSValue *searchFieldPositionAdjustment;	// 8 = 0x8
	NSMutableDictionary *iconImages;	// 12 = 0xc
	UIImage *separatorImage;	// 16 = 0x10
}
@property(retain, nonatomic) NSValue *searchFieldPositionAdjustment;	// G=0x34606aad; S=0x347ce01d; @synthesize
@property(retain, nonatomic) UIImage *separatorImage;	// G=0x34605c85; S=0x34605d5d; @synthesize
- (void)dealloc;	// 0x347cdf91
- (id)imageForIcon:(int)icon state:(unsigned)state;	// 0x34605855
- (id)searchFieldBackgroundImageForState:(unsigned)state;	// 0x34605625
// declared property getter: - (id)searchFieldPositionAdjustment;	// 0x34606aad
// declared property getter: - (id)separatorImage;	// 0x34605c85
- (void)setImage:(id)image forIcon:(int)icon state:(unsigned)state;	// 0x346058f5
- (void)setSearchFieldBackgroundImage:(id)image forState:(unsigned)state;	// 0x34605671
// declared property setter: - (void)setSearchFieldPositionAdjustment:(id)adjustment;	// 0x347ce01d
// declared property setter: - (void)setSeparatorImage:(id)image;	// 0x34605d5d
@end

