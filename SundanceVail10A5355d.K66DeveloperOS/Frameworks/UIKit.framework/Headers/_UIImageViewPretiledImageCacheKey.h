/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UIImage;

__attribute__((visibility("hidden")))
@interface _UIImageViewPretiledImageCacheKey : NSObject {
	UIImage *_originalImage;	// 4 = 0x4
	CGSize _pretiledSize;	// 8 = 0x8
}
+ (id)cacheKeyWithOriginalImage:(id)originalImage pretiledSize:(CGSize)size;	// 0x33daee9d
- (id)description;	// 0x33daefe1
- (unsigned)hash;	// 0x33daef0d
- (BOOL)isEqual:(id)equal;	// 0x33daef4d
@end
