/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreUserReviewsControl : BRControl {
	NSDictionary *_itemDictionary;	// 84 = 0x54
}
+ (id)userReviewsControlWithDictionary:(id)dictionary;	// 0x1e55ed
- (id)initWithDictionary:(id)dictionary;	// 0x1e5629
- (CGRect)_addTextControlWithAttributedString:(id)attributedString maxSize:(CGSize)size xOrigin:(float)origin topLine:(float)line;	// 0x1e61c9
- (CGRect)_addTextControlWithText:(id)text attributes:(id)attributes maxSize:(CGSize)size origin:(CGPoint)origin;	// 0x1e60c9
- (id)_largeImageForRating:(float)rating;	// 0x1e63d5
- (id)_smallImageForRating:(float)rating;	// 0x1e62b9
- (id)accessibilityLabel;	// 0x1e60ad
- (void)dealloc;	// 0x1e5681
- (void)layoutSubcontrols;	// 0x1e56cd
@end

