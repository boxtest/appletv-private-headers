/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString, NSArray, NSURL, NSNumber;

@interface SAAlarmSearch : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSNumber *enabled;	// G=0x3559f10d; S=0x3559f129; 
@property(copy, nonatomic) NSArray *frequency;	// G=0x3559f179; S=0x3559f195; 
@property(copy, nonatomic) NSNumber *hour;	// G=0x3559f1e5; S=0x3559f201; 
@property(copy, nonatomic) NSURL *identifier;	// G=0x3559f251; S=0x3559f2cd; 
@property(copy, nonatomic) NSString *label;	// G=0x3559f32d; S=0x3559f349; 
@property(copy, nonatomic) NSNumber *minute;	// G=0x3559f399; S=0x3559f3b5; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x3559f031; S=0x3559f0ad; 
+ (id)search;	// 0x3559efa1
+ (id)searchWithDictionary:(id)dictionary context:(id)context;	// 0x3559efe5
// declared property getter: - (id)enabled;	// 0x3559f10d
- (id)encodedClassName;	// 0x3559ef95
// declared property getter: - (id)frequency;	// 0x3559f179
- (id)groupIdentifier;	// 0x3559ef85
// declared property getter: - (id)hour;	// 0x3559f1e5
// declared property getter: - (id)identifier;	// 0x3559f251
// declared property getter: - (id)label;	// 0x3559f32d
// declared property getter: - (id)minute;	// 0x3559f399
- (BOOL)requiresResponse;	// 0x3559f405
// declared property setter: - (void)setEnabled:(id)enabled;	// 0x3559f129
// declared property setter: - (void)setFrequency:(id)frequency;	// 0x3559f195
// declared property setter: - (void)setHour:(id)hour;	// 0x3559f201
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x3559f2cd
// declared property setter: - (void)setLabel:(id)label;	// 0x3559f349
// declared property setter: - (void)setMinute:(id)minute;	// 0x3559f3b5
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x3559f0ad
// declared property getter: - (id)targetAppId;	// 0x3559f031
@end

