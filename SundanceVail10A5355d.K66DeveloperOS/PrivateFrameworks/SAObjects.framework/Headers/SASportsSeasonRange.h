/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSDate, NSString;

@interface SASportsSeasonRange : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSDate *end;	// G=0x3663e0b5; S=0x3663e0d1; 
@property(copy, nonatomic) NSString *seasonType;	// G=0x3663e121; S=0x3663e13d; 
@property(copy, nonatomic) NSDate *start;	// G=0x3663e18d; S=0x3663e1a9; 
+ (id)seasonRange;	// 0x3663e025
+ (id)seasonRangeWithDictionary:(id)dictionary context:(id)context;	// 0x3663e069
- (id)encodedClassName;	// 0x3663e019
// declared property getter: - (id)end;	// 0x3663e0b5
- (id)groupIdentifier;	// 0x3663e009
// declared property getter: - (id)seasonType;	// 0x3663e121
// declared property setter: - (void)setEnd:(id)end;	// 0x3663e0d1
// declared property setter: - (void)setSeasonType:(id)type;	// 0x3663e13d
// declared property setter: - (void)setStart:(id)start;	// 0x3663e1a9
// declared property getter: - (id)start;	// 0x3663e18d
@end
