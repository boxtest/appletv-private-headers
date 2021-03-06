/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SASportsEntity.h"

@class NSNumber, NSString, NSArray;

@interface SASportsTeam : SASportsEntity {
}
@property(copy, nonatomic) NSString *abbreviatedName;	// G=0x353f1b11; S=0x353f1b2d; 
@property(copy, nonatomic) NSArray *athletes;	// G=0x353f1b7d; S=0x353f1bf9; 
@property(copy, nonatomic) NSString *awayLosses;	// G=0x353f1c61; S=0x353f1c7d; 
@property(copy, nonatomic) NSString *awayWins;	// G=0x353f1ccd; S=0x353f1ce9; 
@property(copy, nonatomic) NSNumber *clinchedQualificationPosition;	// G=0x353f1d39; S=0x353f1d55; 
@property(copy, nonatomic) NSNumber *conferencePosition;	// G=0x353f1da5; S=0x353f1dc1; 
@property(copy, nonatomic) NSString *gamesBehind;	// G=0x353f1e11; S=0x353f1e2d; 
@property(copy, nonatomic) NSString *groupName;	// G=0x353f1e7d; S=0x353f1e99; 
@property(copy, nonatomic) NSNumber *groupPosition;	// G=0x353f1ee9; S=0x353f1f05; 
@property(copy, nonatomic) NSString *groupPositionDescription;	// G=0x353f1f55; S=0x353f1f71; 
@property(copy, nonatomic) NSString *homeLosses;	// G=0x353f1fc1; S=0x353f1fdd; 
@property(copy, nonatomic) NSString *homeWins;	// G=0x353f202d; S=0x353f2049; 
@property(copy, nonatomic) NSString *location;	// G=0x353f2099; S=0x353f20b5; 
@property(copy, nonatomic) NSString *losses;	// G=0x353f2105; S=0x353f2121; 
@property(copy, nonatomic) NSArray *news;	// G=0x353f2171; S=0x353f21ed; 
@property(copy, nonatomic) NSString *overtimeLosses;	// G=0x353f2255; S=0x353f2271; 
@property(copy, nonatomic) NSString *points;	// G=0x353f22c1; S=0x353f22dd; 
@property(copy, nonatomic) NSString *pointsAgainst;	// G=0x353f232d; S=0x353f2349; 
@property(copy, nonatomic) NSString *pointsFor;	// G=0x353f2399; S=0x353f23b5; 
@property(copy, nonatomic) NSNumber *primaryColor;	// G=0x353f2405; S=0x353f2421; 
@property(copy, nonatomic) NSString *qualificationPosition;	// G=0x353f2471; S=0x353f248d; 
@property(copy, nonatomic) NSArray *rankings;	// G=0x353f24dd; S=0x353f2559; 
@property(copy, nonatomic) NSNumber *secondaryColor;	// G=0x353f25c1; S=0x353f25dd; 
@property(copy, nonatomic) NSArray *statistics;	// G=0x353f262d; S=0x353f26a9; 
@property(copy, nonatomic) NSString *streakNumber;	// G=0x353f2711; S=0x353f272d; 
@property(copy, nonatomic) NSString *streakType;	// G=0x353f277d; S=0x353f2799; 
@property(copy, nonatomic) NSString *ties;	// G=0x353f27e9; S=0x353f2805; 
@property(copy, nonatomic) NSString *venueLocation;	// G=0x353f2855; S=0x353f2871; 
@property(copy, nonatomic) NSString *venueName;	// G=0x353f28c1; S=0x353f28dd; 
@property(copy, nonatomic) NSString *winPercentage;	// G=0x353f292d; S=0x353f2949; 
@property(copy, nonatomic) NSString *wins;	// G=0x353f2999; S=0x353f29b5; 
+ (id)team;	// 0x353f1a81
+ (id)teamWithDictionary:(id)dictionary context:(id)context;	// 0x353f1ac5
// declared property getter: - (id)abbreviatedName;	// 0x353f1b11
// declared property getter: - (id)athletes;	// 0x353f1b7d
// declared property getter: - (id)awayLosses;	// 0x353f1c61
// declared property getter: - (id)awayWins;	// 0x353f1ccd
// declared property getter: - (id)clinchedQualificationPosition;	// 0x353f1d39
// declared property getter: - (id)conferencePosition;	// 0x353f1da5
- (id)encodedClassName;	// 0x353f1a75
// declared property getter: - (id)gamesBehind;	// 0x353f1e11
- (id)groupIdentifier;	// 0x353f1a65
// declared property getter: - (id)groupName;	// 0x353f1e7d
// declared property getter: - (id)groupPosition;	// 0x353f1ee9
// declared property getter: - (id)groupPositionDescription;	// 0x353f1f55
// declared property getter: - (id)homeLosses;	// 0x353f1fc1
// declared property getter: - (id)homeWins;	// 0x353f202d
// declared property getter: - (id)location;	// 0x353f2099
// declared property getter: - (id)losses;	// 0x353f2105
// declared property getter: - (id)news;	// 0x353f2171
// declared property getter: - (id)overtimeLosses;	// 0x353f2255
// declared property getter: - (id)points;	// 0x353f22c1
// declared property getter: - (id)pointsAgainst;	// 0x353f232d
// declared property getter: - (id)pointsFor;	// 0x353f2399
// declared property getter: - (id)primaryColor;	// 0x353f2405
// declared property getter: - (id)qualificationPosition;	// 0x353f2471
// declared property getter: - (id)rankings;	// 0x353f24dd
// declared property getter: - (id)secondaryColor;	// 0x353f25c1
// declared property setter: - (void)setAbbreviatedName:(id)name;	// 0x353f1b2d
// declared property setter: - (void)setAthletes:(id)athletes;	// 0x353f1bf9
// declared property setter: - (void)setAwayLosses:(id)losses;	// 0x353f1c7d
// declared property setter: - (void)setAwayWins:(id)wins;	// 0x353f1ce9
// declared property setter: - (void)setClinchedQualificationPosition:(id)position;	// 0x353f1d55
// declared property setter: - (void)setConferencePosition:(id)position;	// 0x353f1dc1
// declared property setter: - (void)setGamesBehind:(id)behind;	// 0x353f1e2d
// declared property setter: - (void)setGroupName:(id)name;	// 0x353f1e99
// declared property setter: - (void)setGroupPosition:(id)position;	// 0x353f1f05
// declared property setter: - (void)setGroupPositionDescription:(id)description;	// 0x353f1f71
// declared property setter: - (void)setHomeLosses:(id)losses;	// 0x353f1fdd
// declared property setter: - (void)setHomeWins:(id)wins;	// 0x353f2049
// declared property setter: - (void)setLocation:(id)location;	// 0x353f20b5
// declared property setter: - (void)setLosses:(id)losses;	// 0x353f2121
// declared property setter: - (void)setNews:(id)news;	// 0x353f21ed
// declared property setter: - (void)setOvertimeLosses:(id)losses;	// 0x353f2271
// declared property setter: - (void)setPoints:(id)points;	// 0x353f22dd
// declared property setter: - (void)setPointsAgainst:(id)against;	// 0x353f2349
// declared property setter: - (void)setPointsFor:(id)aFor;	// 0x353f23b5
// declared property setter: - (void)setPrimaryColor:(id)color;	// 0x353f2421
// declared property setter: - (void)setQualificationPosition:(id)position;	// 0x353f248d
// declared property setter: - (void)setRankings:(id)rankings;	// 0x353f2559
// declared property setter: - (void)setSecondaryColor:(id)color;	// 0x353f25dd
// declared property setter: - (void)setStatistics:(id)statistics;	// 0x353f26a9
// declared property setter: - (void)setStreakNumber:(id)number;	// 0x353f272d
// declared property setter: - (void)setStreakType:(id)type;	// 0x353f2799
// declared property setter: - (void)setTies:(id)ties;	// 0x353f2805
// declared property setter: - (void)setVenueLocation:(id)location;	// 0x353f2871
// declared property setter: - (void)setVenueName:(id)name;	// 0x353f28dd
// declared property setter: - (void)setWinPercentage:(id)percentage;	// 0x353f2949
// declared property setter: - (void)setWins:(id)wins;	// 0x353f29b5
// declared property getter: - (id)statistics;	// 0x353f262d
// declared property getter: - (id)streakNumber;	// 0x353f2711
// declared property getter: - (id)streakType;	// 0x353f277d
// declared property getter: - (id)ties;	// 0x353f27e9
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x353f2a05
// declared property getter: - (id)venueLocation;	// 0x353f2855
// declared property getter: - (id)venueName;	// 0x353f28c1
// declared property getter: - (id)winPercentage;	// 0x353f292d
// declared property getter: - (id)wins;	// 0x353f2999
@end

