/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "UIKit-Structs.h"


@interface UIKBHandwritingStrokes : NSObject <NSCopying> {
	KBStrokeList *_strokes;	// 4 = 0x4
}
- (id)initWithStrokes:(KBStrokeList *)strokes;	// 0x34853ff5
- (id)copyWithZone:(NSZone *)zone;	// 0x348541d1
- (void)dealloc;	// 0x348540e1
- (const KBStrokeList *)strokes;	// 0x348541c1
@end
