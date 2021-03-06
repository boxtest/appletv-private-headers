/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSString, NSNumber, SASportsSeason;

@interface SASportsLeague : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *diplayedText;	// G=0x3425acd9; S=0x3425acf5; 
@property(copy, nonatomic) NSNumber *displayTeamLocationOverName;	// G=0x3425ad45; S=0x3425ad61; 
@property(copy, nonatomic) NSString *identifier;	// G=0x3425adb1; S=0x3425adcd; 
@property(retain, nonatomic) SASportsSeason *season;	// G=0x3425ae1d; S=0x3425ae71; 
@property(copy, nonatomic) NSString *sport;	// G=0x3425aead; S=0x3425aec9; 
+ (id)league;	// 0x3425ac49
+ (id)leagueWithDictionary:(id)dictionary context:(id)context;	// 0x3425ac8d
// declared property getter: - (id)diplayedText;	// 0x3425acd9
// declared property getter: - (id)displayTeamLocationOverName;	// 0x3425ad45
- (id)encodedClassName;	// 0x3425ac3d
- (id)groupIdentifier;	// 0x3425ac2d
// declared property getter: - (id)identifier;	// 0x3425adb1
// declared property getter: - (id)season;	// 0x3425ae1d
// declared property setter: - (void)setDiplayedText:(id)text;	// 0x3425acf5
// declared property setter: - (void)setDisplayTeamLocationOverName:(id)name;	// 0x3425ad61
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x3425adcd
// declared property setter: - (void)setSeason:(id)season;	// 0x3425ae71
// declared property setter: - (void)setSport:(id)sport;	// 0x3425aec9
// declared property getter: - (id)sport;	// 0x3425aead
@end

