/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreRottenTomatoesControl : BRControl {
@private
	NSDictionary *_itemDictionary;	// 48 = 0x30
}
+ (id)rottenTomatesControlWithDictionary:(id)dictionary;	// 0x301d5461
- (id)initWithDictionary:(id)dictionary;	// 0x301d549d
- (CGRect)_addTextControlWithAttributedString:(id)attributedString maxSize:(CGSize)size origin:(CGPoint)origin;	// 0x301d6719
- (CGRect)_addTextControlWithAttributedString:(id)attributedString maxSize:(CGSize)size xOrigin:(float)origin topLine:(float)line;	// 0x301d67e1
- (CGRect)_addTextControlWithText:(id)text attributes:(id)attributes maxSize:(CGSize)size origin:(CGPoint)origin;	// 0x301d668d
- (id)_imageForFreshnessRating:(int)freshnessRating;	// 0x301d68c9
- (id)_labelForFreshnessRating:(int)freshnessRating locInfo:(id)info;	// 0x301d68f1
- (id)accessibilityLabel;	// 0x301d6671
- (void)dealloc;	// 0x301d54f5
- (void)layoutSubcontrols;	// 0x301d5541
@end

