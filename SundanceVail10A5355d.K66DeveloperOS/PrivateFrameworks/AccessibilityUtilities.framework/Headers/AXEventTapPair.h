/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface AXEventTapPair : NSObject {
	id handler;	// 4 = 0x4
	NSString *identifier;	// 8 = 0x8
	int priority;	// 12 = 0xc
}
@property(copy, nonatomic) id handler;	// G=0x34191d99; S=0x34191dad; @synthesize
@property(copy, nonatomic) NSString *identifier;	// G=0x34191dbd; S=0x34191dd1; @synthesize
@property(assign, nonatomic) int priority;	// G=0x34191de1; S=0x34191df1; @synthesize
- (void)dealloc;	// 0x34191cd5
- (id)description;	// 0x34191d39
// declared property getter: - (id)handler;	// 0x34191d99
// declared property getter: - (id)identifier;	// 0x34191dbd
// declared property getter: - (int)priority;	// 0x34191de1
// declared property setter: - (void)setHandler:(id)handler;	// 0x34191dad
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x34191dd1
// declared property setter: - (void)setPriority:(int)priority;	// 0x34191df1
@end
