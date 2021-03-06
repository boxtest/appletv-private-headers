/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

#import "CBDescriptor.h"

@class NSNumber;

@interface CBMutableDescriptor : CBDescriptor {
	NSNumber *_ID;	// 24 = 0x18
}
@property(retain) NSNumber *ID;	// G=0x2d0322fd; S=0x2d032311; @synthesize=_ID
- (id)initWithCharacteristic:(id)characteristic dictionary:(id)dictionary;	// 0x2d03220d
- (id)initWithType:(id)type value:(id)value;	// 0x2d031f35
// declared property getter: - (id)ID;	// 0x2d0322fd
- (void)dealloc;	// 0x2d0322b1
// declared property setter: - (void)setID:(id)anId;	// 0x2d032311
@end

