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
+ (id)rottenTomatesControlWithDictionary:(id)dictionary;	// 0x35d33cf5
- (id)initWithDictionary:(id)dictionary;	// 0x35d33d31
- (CGRect)_addTextControlWithAttributedString:(id)attributedString maxSize:(CGSize)size origin:(CGPoint)origin;	// 0x35d34f89
- (CGRect)_addTextControlWithAttributedString:(id)attributedString maxSize:(CGSize)size xOrigin:(float)origin topLine:(float)line;	// 0x35d35051
- (CGRect)_addTextControlWithText:(id)text attributes:(id)attributes maxSize:(CGSize)size origin:(CGPoint)origin;	// 0x35d34efd
- (id)_imageForFreshnessRating:(int)freshnessRating;	// 0x35d35139
- (id)_labelForFreshnessRating:(int)freshnessRating locInfo:(id)info;	// 0x35d35161
- (id)accessibilityLabel;	// 0x35d34ee1
- (void)dealloc;	// 0x35d33d89
- (void)layoutSubcontrols;	// 0x35d33dd5
@end

