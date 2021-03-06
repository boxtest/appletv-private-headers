/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SASportsEntity.h"

@class SASportsTeam, NSString, NSArray, NSNumber;

@interface SASportsAthlete : SASportsEntity {
}
@property(retain, nonatomic) SASportsTeam *activeTeam;	// G=0x355c9629; S=0x355c967d; 
@property(copy, nonatomic) NSArray *athleteMetadata;	// G=0x355c96b9; S=0x355c9735; 
@property(copy, nonatomic) NSString *firstName;	// G=0x355c979d; S=0x355c97b9; 
@property(copy, nonatomic) NSArray *formattedMetadata;	// G=0x355c9809; S=0x355c9825; 
@property(copy, nonatomic) NSString *gender;	// G=0x355c9875; S=0x355c9891; 
@property(copy, nonatomic) NSNumber *injured;	// G=0x355c98e1; S=0x355c98fd; 
@property(copy, nonatomic) NSString *lastName;	// G=0x355c994d; S=0x355c9969; 
@property(copy, nonatomic) NSString *position;	// G=0x355c99b9; S=0x355c99d5; 
@property(copy, nonatomic) NSArray *previousTeams;	// G=0x355c9a25; S=0x355c9aa1; 
@property(copy, nonatomic) NSArray *statistics;	// G=0x355c9b09; S=0x355c9b85; 
+ (id)athlete;	// 0x355c9599
+ (id)athleteWithDictionary:(id)dictionary context:(id)context;	// 0x355c95dd
// declared property getter: - (id)activeTeam;	// 0x355c9629
// declared property getter: - (id)athleteMetadata;	// 0x355c96b9
- (id)encodedClassName;	// 0x355c958d
// declared property getter: - (id)firstName;	// 0x355c979d
// declared property getter: - (id)formattedMetadata;	// 0x355c9809
// declared property getter: - (id)gender;	// 0x355c9875
- (id)groupIdentifier;	// 0x355c957d
// declared property getter: - (id)injured;	// 0x355c98e1
// declared property getter: - (id)lastName;	// 0x355c994d
// declared property getter: - (id)position;	// 0x355c99b9
// declared property getter: - (id)previousTeams;	// 0x355c9a25
// declared property setter: - (void)setActiveTeam:(id)team;	// 0x355c967d
// declared property setter: - (void)setAthleteMetadata:(id)metadata;	// 0x355c9735
// declared property setter: - (void)setFirstName:(id)name;	// 0x355c97b9
// declared property setter: - (void)setFormattedMetadata:(id)metadata;	// 0x355c9825
// declared property setter: - (void)setGender:(id)gender;	// 0x355c9891
// declared property setter: - (void)setInjured:(id)injured;	// 0x355c98fd
// declared property setter: - (void)setLastName:(id)name;	// 0x355c9969
// declared property setter: - (void)setPosition:(id)position;	// 0x355c99d5
// declared property setter: - (void)setPreviousTeams:(id)teams;	// 0x355c9aa1
// declared property setter: - (void)setStatistics:(id)statistics;	// 0x355c9b85
// declared property getter: - (id)statistics;	// 0x355c9b09
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x355c9bed
@end

