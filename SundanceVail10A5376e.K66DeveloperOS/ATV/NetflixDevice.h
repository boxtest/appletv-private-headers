/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NetflixNrdObjectProtocol.h"
#import "NetflixNrdObject.h"

@class NSString, NSMutableArray, NSDictionary, Netflix, NSMutableDictionary;

@interface NetflixDevice : NetflixNrdObject <NetflixNrdObjectProtocol> {
	Netflix *netflix_;	// 4 = 0x4
}
@property(readonly, assign) NSString *ESN;	// G=0x476e75; 
@property(readonly, assign) NSString *ESNPrefix;	// G=0x476dfd; 
@property(readonly, assign) unsigned PC_NATIVE;	// G=0x477da9; 
@property(readonly, assign) unsigned PC_NONE;	// G=0x477da1; 
@property(readonly, assign) unsigned PC_PIN;	// G=0x477da5; 
@property(readonly, assign) NSMutableDictionary *SDKVersion;	// G=0x476eed; 
@property(copy) NSMutableArray *UILanguages;	// G=0x478035; S=0x4780ad; 
@property(readonly, assign) NSDictionary *capability;	// G=0x477e8d; 
@property(readonly, assign) unsigned certificationVersion;	// G=0x476d95; 
@property(readonly, assign) BOOL isScreenSaverOn;	// G=0x477f7d; 
@property(readonly, assign) NSString *language;	// G=0x477d29; 
@property(retain) Netflix *netflix;	// G=0x478501; S=0x478515; @synthesize=netflix_
@property(readonly, assign) unsigned parentalControlOverrideType;	// G=0x477e25; 
@property(readonly, assign) NSString *parentalControlRating;	// G=0x477dad; 
@property(readonly, assign) NSString *softwareVersion;	// G=0x476d1d; 
@property(readonly, assign) NSDictionary *videoOutput;	// G=0x477f05; 
+ (id)sharedInstance;	// 0x476c31
// declared property getter: - (id)ESN;	// 0x476e75
// declared property getter: - (id)ESNPrefix;	// 0x476dfd
// declared property getter: - (unsigned)PC_NATIVE;	// 0x477da9
// declared property getter: - (unsigned)PC_NONE;	// 0x477da1
// declared property getter: - (unsigned)PC_PIN;	// 0x477da5
// declared property getter: - (id)SDKVersion;	// 0x476eed
// declared property getter: - (id)UILanguages;	// 0x478035
- (void)addEventListener:(id)listener name:(id)name;	// 0x478471
// declared property getter: - (id)capability;	// 0x477e8d
// declared property getter: - (unsigned)certificationVersion;	// 0x476d95
// declared property getter: - (BOOL)isScreenSaverOn;	// 0x477f7d
// declared property getter: - (id)language;	// 0x477d29
// declared property getter: - (id)netflix;	// 0x478501
// declared property getter: - (unsigned)parentalControlOverrideType;	// 0x477e25
// declared property getter: - (id)parentalControlRating;	// 0x477dad
- (void)removeEventListener:(id)listener name:(id)name;	// 0x4784b9
// declared property setter: - (void)setNetflix:(id)netflix;	// 0x478515
// declared property setter: - (void)setUILanguages:(id)languages;	// 0x4780ad
- (void)setUIVersion:(id)version;	// 0x477fe5
// declared property getter: - (id)softwareVersion;	// 0x476d1d
- (void)updateProperty:(id)property value:(id)value;	// 0x47820d
// declared property getter: - (id)videoOutput;	// 0x477f05
@end
