/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSLayoutConstraint.h"


@interface NSAutoresizingMaskLayoutConstraint : NSLayoutConstraint {
}
+ (id)constraintWithItem:(id)item attribute:(int)attribute relatedBy:(int)by toItem:(id)item4 attribute:(int)attribute5 multiplier:(float)multiplier constant:(float)constant;	// 0x31a01d61
+ (id)constraintsWithAutoresizingMask:(unsigned)autoresizingMask subitem:(id)subitem frame:(CGRect)frame superitem:(id)superitem bounds:(CGRect)bounds;	// 0x31a010cd
- (int)_constraintType;	// 0x31a01f05
- (id)_viewForAutoresizingMask;	// 0x31a01c65
- (id)descriptionAccessory;	// 0x31a01cb5
@end
