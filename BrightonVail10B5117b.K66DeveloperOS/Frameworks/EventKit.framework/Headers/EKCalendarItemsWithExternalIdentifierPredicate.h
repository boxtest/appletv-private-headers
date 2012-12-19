/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSPredicate.h> // Unknown library
#import "EventKit-Structs.h"

@class NSString;

@interface EKCalendarItemsWithExternalIdentifierPredicate : NSPredicate {
	NSString *_externalIdentifier;	// 8 = 0x8
}
- (id)initWithCoder:(id)coder;	// 0x318d873d
- (id)initWithExternalIdentifier:(id)externalIdentifier;	// 0x318d868d
- (id)copyWithZone:(NSZone *)zone;	// 0x318d86e1
- (void)dealloc;	// 0x318d86f1
- (void)encodeWithCoder:(id)coder;	// 0x318d87ad
- (BOOL)evaluateWithObject:(id)object;	// 0x318d8809
@end
